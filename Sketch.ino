
boolean fanOn;
boolean buttonPressed;

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(4, INPUT);
  Serial.println("Booting...");
  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);
}

void loop() {
  if(digitalRead(4) == HIGH){
    if(buttonPressed == false){
      fanOn = !fanOn;
    }
    buttonPressed = true;
  } else {
    buttonPressed = false;
  }
  if(fanOn){
    // analogRead(pin);
    // pin must be A0 - A5, the slider is connected to A5
    // use analogRead() as a number, it will be 0 - 1023 depending on the voltage at that pin
    
    // analogWrite(pin, value);
    // pin must be PWM pin (has a ~ on the board)
    // value must be 0 - 255. 0 will output 0 volts, and 255 will output 5 volts.

    // map(input, input_lower, input_upper, output_lower, output_higher);
    // scales an input.
    
  } else {
    digitalWrite(11, LOW);
  }
}















// analogWrite(11, map(analogRead(A5), 0, 1023, 50, 255));
