// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;


void setup() {
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(2, INPUT);
  pinMode(3, INPUT);

  Serial.begin(9600);

  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {

  int buttonState2 = digitalRead(2);
  int buttonState3 = digitalRead(3);
  int power = 255;

  if(buttonState3 == HIGH and buttonState2 == HIGH){
    power = 0;
  }

  analogWrite(enA,power);

  if(buttonState2 == HIGH){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
  else if(buttonState3 == HIGH){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }

  Serial.println(buttonState2);
  Serial.println(buttonState3);

}
