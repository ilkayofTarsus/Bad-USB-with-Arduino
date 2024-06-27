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

  delay(600);

  // Linux icin
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();

  delay(200);

  // Mac os icin
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(200);

  // windows
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);


  for(int i = 0; i < 4; i++) {
    typeKey(KEY_DELETE);
  }

  
  Keyboard.print("https://www.youtube.com/watch?v=2ZPFwQbOOYA");


  
  typeKey(KEY_RETURN);
  delay(5000);
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400); 
  typeKey(KEY_TAB);
  delay(400);
  typeKey(KEY_RETURN);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
void loop() {}
