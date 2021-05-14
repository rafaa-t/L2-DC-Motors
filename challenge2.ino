// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;


void setup() {

  Serial.begin(9600);
  // Set all thOUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  digitalWrite(A0, INPUT);
  
  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  
}

void loop() {

  int poten = analogRead(A0);

  int finall = map(poten,1023,0,0,255);
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
 
  analogWrite(enA, finall);

  Serial.println(finall);

 

  
  
}
