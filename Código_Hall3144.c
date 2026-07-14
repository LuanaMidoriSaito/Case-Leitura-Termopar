const int pinoHall = 4;
void setup(){
  Serial.begin(115200);
  pinMode(pinoHall, INPUT_PULLUP);
}

void loop(){
  int estado = digitalRead(pinoHall);
  
  if(estado == LOW){
    Serial.println("Achou!");
  } else{
    Serial.println("Imã não encontrado :(");
  }
  
  delay(200);
}
