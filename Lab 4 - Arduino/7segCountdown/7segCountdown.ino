#include <SegmentDisplay.h>
SegmentDisplay segmentDisplay(2, 3, 4, 5, 6, 7, 8, 9);
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  /*Display only the decimal point*/
  //segmentDisplay.displayDecimalPoint();

  //segmentDisplay.displayHex(12, false);

  for (int i = 9; i >= 0; i--) {
    segmentDisplay.displayHex(i, true);
    delay(1500); // Optional delay to make the countdown more readable
  }
}
