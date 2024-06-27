#include <Keyboard.h> 

// Init function
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

  Keyboard.print("notepad");

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

  Keyboard.print("  |___|  |__| |__||___|  |_||_______||_______||_______||_______||_______|\n\n\n");

  typeKey(KEY_RETURN);

  Keyboard.print("\n\n\n");

  typeKey(KEY_RETURN);
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

  Keyboard.print("  |___|  |__| |__||___|  |_||_______||_______||_______||_______||_______|\n\n\n");

  typeKey(KEY_RETURN);
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

  Keyboard.print("  |___|  |__| |__||___|  |_||_______||_______||_______||_______||_______|\n\n\n");



  typeKey(KEY_RETURN);

  Keyboard.print("bilgisayarin kilitlenecek");
  delay(100);

  
  Keyboard.print("bilgisayarin kilitlenecek");
  delay(100);

  
  Keyboard.print("bilgisayarin kilitlenecek");
  delay(100);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print("x");

  delay(50);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(108);
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
