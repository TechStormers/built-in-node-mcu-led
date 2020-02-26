#define led D4 //controlling led connected to pin D4
void setup() {
  pinMode(led,OUTPUT); // declaring pinmode
}

void loop() {
  digitalWrite(led,0); //turns led on
  delay(1000); // 1000 milliseconds or 1 second delay
  digitalWrite(led,1); //turns led off
  delay(1000); // 1 second delay
}    
