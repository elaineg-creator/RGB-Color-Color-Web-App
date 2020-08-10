const int redPin = 11;
const int bluePin = 10;
const int greenPin = 9;
byte buff[2];
int brightness = 0;
int color = 0;
void setup() {
  Serial.begin(9600);

}

void getColor () {
  if (Serial.readBytes(buff,2) == 2) {
    byte input1 = buff[0];
    byte input2 = buff[1];
    if (input1 == 1) {
        analogWrite(redPin, input2);
      }
      if (input1 == 2) {
        analogWrite(greenPin, input2);
      }
      if (input1 == 3) {
        analogWrite(bluePin, input2);
      }
  }
}
  

void loop() {
  getColor();
  
}
