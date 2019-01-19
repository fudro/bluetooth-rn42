/*******************************************************
 * This program tests the functionality of the Parallax RN42 Bluetooth Module.
 * Based on tutorial by ForcceTronics https://youtu.be/OUSAIPwwq7U
 *******************************************************/

void setup() {
  //Set baud rate to match RN42 BT Module. When jumper 4 on the module is connected, the baud rate is automatically set to 9600 and cannot be changed by software. See manual to identify jumper 4.
  Serial.begin(9600);
}

void loop() {
  String t;
  while(Serial.available()) {
    t += (char)Serial.read();
  }
  if(t.length()) {
    if(t == "hello\r\n") {
      Serial.print("hi\n");
    }
    else if (t == "name\r\n") {
      Serial.print("Atom\n");
    }
    else {
      Serial.print("say wut\n");
    }
  }
  delay (20);
}
