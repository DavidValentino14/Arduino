#include <TM1637.h>

int CLK = 2;
int DIO = 3;

TM1637 tm(CLK, DIO);

void setup() {
  // put your setup code here, to run once:
  tm.init();

  //set brightness; 0-7
  tm.set(2);
}

void loop() {
  // put your main code here, to run repeatedly:

  // example: "12:ab"
  // tm.display(position, character);
  for (int a = 3600; a >= 0; a--)
  {
    displayTime(a);
    delay (100);
  }
}

void displayNumber(int num) {
  tm.display(3, num % 10);
  tm.display(2, num / 10 % 10);
  tm.display(1, num / 100 % 10);
  tm.display(0, num / 1000 % 10);
}

void displayTime(int seconds) {
  int minutes = seconds / 60;
  seconds = seconds % 60;

  tm.point(1);
  tm.display(3, seconds % 10);
  tm.display(2, seconds / 10 % 10);
  tm.display(1, minutes % 10);
  tm.display(0, minutes / 10 % 10);
}
