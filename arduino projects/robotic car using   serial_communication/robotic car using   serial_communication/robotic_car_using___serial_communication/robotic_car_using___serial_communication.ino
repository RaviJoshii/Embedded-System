
void setup()
{
  for (int i = 2; i <= 5; i++)
  { pinMode(i, OUTPUT);
  }

  Serial.begin(9600);
}
void p1()//****************for stop the both two motor
{
  for (int i = 2; i <= 5; i++)
  {
    digitalWrite(i, HIGH);
  }
}
void p2()//******************to move forward both the motors
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

}
void p3()//******************to move backward both the motors
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);

}
void p4()//*****************to move one motor forward and another motor backward    means    to move motor right
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

}
void p5()//*****************to move one motor backward and another motor forward    means    to move motor left
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);

}
void loop()
{
  if (Serial.available())
  {
    int x;
    x = Serial.read();
    if (x == 'f')
    {
      p2();
      Serial.println("go forward");
    }
    if (x == 'b')
    {
      p3();
      Serial.println("go backward");
    }
    if (x == 'r')
    {
      p4();
      Serial.println("go right");
    }
    if (x == 'l')
    {
      p5();
      Serial.println("go left");
    }
    if (x == 's')
    {
      p1();
      Serial.println("stop");
    }
  }


}

Arduino: 1.6.9 (Windows 8.1), Board: "Arduino/Genuino Uno"

C:\Program Files (x86)\arduino-1.6.9\arduino-builder -dump-prefs -logger=machine -hardware "C:\Program Files (x86)\arduino-1.6.9\hardware" -tools "C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr" -built-in-libraries "C:\Program Files (x86)\arduino-1.6.9\libraries" -libraries "C:\Users\RADHA\Documents\Arduino\libraries" -fqbn=arduino:avr:uno -ide-version=10609 -build-path "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp" -warnings=none -prefs=build.warn_data_percentage=75 -verbose "C:\Users\RADHA\Documents\Arduino\robotic car using   serial_communication\robotic car using   serial_communication\serial_comm.\serial_comm..ino"
C:\Program Files (x86)\arduino-1.6.9\arduino-builder -compile -logger=machine -hardware "C:\Program Files (x86)\arduino-1.6.9\hardware" -tools "C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr" -built-in-libraries "C:\Program Files (x86)\arduino-1.6.9\libraries" -libraries "C:\Users\RADHA\Documents\Arduino\libraries" -fqbn=arduino:avr:uno -ide-version=10609 -build-path "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp" -warnings=none -prefs=build.warn_data_percentage=75 -verbose "C:\Users\RADHA\Documents\Arduino\robotic car using   serial_communication\robotic car using   serial_communication\serial_comm.\serial_comm..ino"
"C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics  -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\cores\arduino" "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\variants\standard" "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\sketch\serial_comm..ino.cpp" -o "nul"
"C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics  -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\cores\arduino" "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\variants\standard" "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\sketch\serial_comm..ino.cpp" -o "nul"
"C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics  -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\cores\arduino" "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\variants\standard" "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\sketch\serial_comm..ino.cpp" -o "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\preproc\ctags_target_for_gcc_minus_e.cpp"
"{runtime.tools.ctags.path}/ctags" -u --language-force=c++ -f - --c++-kinds=svpf --fields=KSTtzns --line-directives "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\preproc\ctags_target_for_gcc_minus_e.cpp"
exec: "{runtime.tools.ctags.path}/ctags": file does not exist
Error compiling for board Arduino/Genuino Uno.



Arduino: 1.6.9 (Windows 8.1), Board: "Arduino/Genuino Uno"

C:\Program Files (x86)\arduino-1.6.9\arduino-builder -dump-prefs -logger=machine -hardware "C:\Program Files (x86)\arduino-1.6.9\hardware" -tools "C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr" -built-in-libraries "C:\Program Files (x86)\arduino-1.6.9\libraries" -libraries "C:\Users\RADHA\Documents\Arduino\libraries" -fqbn=arduino:avr:uno -ide-version=10609 -build-path "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp" -warnings=none -prefs=build.warn_data_percentage=75 -verbose "C:\Users\RADHA\Documents\Arduino\robotic car using   serial_communication\robotic car using   serial_communication\serial_comm.\serial_comm..ino"
C:\Program Files (x86)\arduino-1.6.9\arduino-builder -compile -logger=machine -hardware "C:\Program Files (x86)\arduino-1.6.9\hardware" -tools "C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr" -built-in-libraries "C:\Program Files (x86)\arduino-1.6.9\libraries" -libraries "C:\Users\RADHA\Documents\Arduino\libraries" -fqbn=arduino:avr:uno -ide-version=10609 -build-path "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp" -warnings=none -prefs=build.warn_data_percentage=75 -verbose "C:\Users\RADHA\Documents\Arduino\robotic car using   serial_communication\robotic car using   serial_communication\serial_comm.\serial_comm..ino"
"C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics  -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\cores\arduino" "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\variants\standard" "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\sketch\serial_comm..ino.cpp" -o "nul"
"C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics  -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\cores\arduino" "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\variants\standard" "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\sketch\serial_comm..ino.cpp" -o "nul"
"C:\Program Files (x86)\arduino-1.6.9\hardware\tools\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics  -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\cores\arduino" "-IC:\Program Files (x86)\arduino-1.6.9\hardware\arduino\avr\variants\standard" "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\sketch\serial_comm..ino.cpp" -o "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\preproc\ctags_target_for_gcc_minus_e.cpp"
"{runtime.tools.ctags.path}/ctags" -u --language-force=c++ -f - --c++-kinds=svpf --fields=KSTtzns --line-directives "C:\Users\RADHA\AppData\Local\Temp\buildc63272ef71e34f952f9c70b520930a2d.tmp\preproc\ctags_target_for_gcc_minus_e.cpp"
exec: "{runtime.tools.ctags.path}/ctags": file does not exist
Error compiling for board Arduino/Genuino Uno.
























