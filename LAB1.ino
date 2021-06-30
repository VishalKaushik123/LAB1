/*
 * Project LAB1
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

  // sets the D5 pin as the output
  pinMode(D5, OUTPUT);
}
// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  
  //turns the light on
  digitalWrite(D5, HIGH);
  //waits 1/2 second
  delay(500);
  //turns the light off
  digitalWrite(D5, LOW);
  // waits 1/2 second
  delay(500);


}
