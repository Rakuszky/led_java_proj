int input;

void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if (Serial.available() > 0){
    input = Serial.read();

    if (input == '1'){
      digitalWrite(13, HIGH);
    }else{
      digitalWrite(13,LOW);
    }
  }
}
