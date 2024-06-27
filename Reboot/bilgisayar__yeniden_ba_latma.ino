#include <Keyboard.h> 
#define KEY_LEFT_ESC 0x1B


void setup()
{
  
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad.exe");

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print(" _______  _______  ______    _______  __   __  _______  ___      __   __ ");

  typeKey(KEY_RETURN);

  Keyboard.print("|       ||   _   ||    _ |  |       ||  | |  ||       ||   |    |  | |  |");

  typeKey(KEY_RETURN);

  Keyboard.print("|_     _||  |_|  ||   | ||  |  _____||  | |  ||  _____||   |    |  | |  |");

  typeKey(KEY_RETURN);

  Keyboard.print("  |   |  |       ||   |_||_ | |_____ |  |_|  || |_____ |   |    |  |_|  |");

  typeKey(KEY_RETURN);
  Keyboard.print("  |   |  |       ||    __  ||_____  ||       ||_____  ||   |___ |       |");

  typeKey(KEY_RETURN);

  Keyboard.print("  |   |  |   _   ||   |  | | _____| ||       | _____| ||       ||       |");

  typeKey(KEY_RETURN);

  Keyboard.print("  TARSUSLU BILGISAYARINI KAPATIYOR\n");

  typeKey(KEY_RETURN);
    Keyboard.print("TARSUSLU BILGISAYARINI KAPATIYOR\n");

  typeKey(KEY_RETURN); 
  Keyboard.print("TARSUSLU BILGISAYARINI KAPATIYOR\n");

  typeKey(KEY_RETURN);  
  Keyboard.print("TARSUSLU BILGISAYARINI KAPATIYOR\n");

  typeKey(KEY_RETURN);
  
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("shutdown /r /t 10");
  typeKey(KEY_RETURN);
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
