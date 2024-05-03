#include <MsTimer2.h>
#define AVGNO 100
#define SENSOR 0
volatile int i;
volatile long totalval;

void timer() {
  i++;
  int val = analogRead(SENSOR)
  totalval+=val;

}

void setup() {
  Serial.begin(9600);

}

//TO BE CONTINUED