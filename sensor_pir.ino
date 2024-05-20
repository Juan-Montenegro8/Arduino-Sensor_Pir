int led =13;
int pir =2;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
  Serial.print("holi");

}

void loop() {
  int value= digitalRead(pir);
  if(value ==HIGH)
  {
    digitalWrite(led,HIGH );
    Serial.println("intruso rey, pilas weon");
    delay(500);
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("todo melo caramelo");
    delay(500);
  }

}
