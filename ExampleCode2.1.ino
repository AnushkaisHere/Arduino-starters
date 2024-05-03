const int SENSOR = 0;
const int LED= 9;
int val = 0;

void setup() {
pinMode(LED, OUTPUT);
Serial.begin(9600);

}

void loop() {
int val = analogRead(SENSOR);
analogWrite(LED, val/4);
Serial.print(val);
delay(100);

}

//this code WORKS YAYYY!!!

