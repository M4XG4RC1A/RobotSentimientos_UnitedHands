void setup() {
  // put your setup code here, to run once:
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  
  pinMode(27,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(31,OUTPUT);
  
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(36,OUTPUT);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  pinMode(42,INPUT);
  pinMode(43,INPUT);
  pinMode(44,INPUT);
  pinMode(45,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Count = 0;
  if(!digitalRead(42)){
    Count++;
  }
  if(!digitalRead(43)){
    Count++;
  }
  if(!digitalRead(44)){
    Count++;
  }
  if(!digitalRead(45)){
    Count++;
  }
  char let=' ';
  if(Count == 0){
    let = 'a';
  }
  if(Count == 1){
    let = 'b';
  }
  if(Count == 2){
    let = 'c';
  }
  if(Count == 3){
    let = 'd';
  }
  if(Count == 4){
    let = 'e';
  }
  //22
  switch(let){
    case 'a':
    digitalWrite(22,LOW);
    digitalWrite(23,LOW);
    digitalWrite(24,HIGH);
    digitalWrite(25,HIGH);
    digitalWrite(26,HIGH);
    
    digitalWrite(27,LOW);
    digitalWrite(28,LOW);
    digitalWrite(29,HIGH);
    digitalWrite(30,HIGH);
    digitalWrite(31,HIGH);
    
    digitalWrite(32,HIGH);
    digitalWrite(33,HIGH);
    digitalWrite(34,HIGH);
    digitalWrite(35,LOW);
    digitalWrite(36,LOW);

    analogWrite(2,255);
    analogWrite(3,0);
    analogWrite(4,255);
    analogWrite(5,0);
    break;
    case 'b':
    digitalWrite(22,LOW);
    digitalWrite(23,LOW);
    digitalWrite(24,HIGH);
    digitalWrite(25,HIGH);
    digitalWrite(26,HIGH);
    
    digitalWrite(27,LOW);
    digitalWrite(28,LOW);
    digitalWrite(29,HIGH);
    digitalWrite(30,HIGH);
    digitalWrite(31,HIGH);
    
    digitalWrite(32,LOW);
    digitalWrite(33,LOW);
    digitalWrite(34,HIGH);
    digitalWrite(35,HIGH);
    digitalWrite(36,HIGH);

    analogWrite(2,200);
    analogWrite(3,50);
    analogWrite(4,200);
    analogWrite(5,50);
    break;
    case 'c':
    digitalWrite(22,HIGH);
    digitalWrite(23,LOW);
    digitalWrite(24,HIGH);
    digitalWrite(25,LOW);
    digitalWrite(26,HIGH);
    
    digitalWrite(27,HIGH);
    digitalWrite(28,LOW);
    digitalWrite(29,HIGH);
    digitalWrite(30,LOW);
    digitalWrite(31,HIGH);
    
    digitalWrite(32,LOW);
    digitalWrite(33,LOW);
    digitalWrite(34,HIGH);
    digitalWrite(35,HIGH);
    digitalWrite(36,HIGH);

    analogWrite(2,150);
    analogWrite(3,100);
    analogWrite(4,150);
    analogWrite(5,100);
    break;
    case 'd':
    digitalWrite(22,LOW);
    digitalWrite(23,HIGH);
    digitalWrite(24,HIGH);
    digitalWrite(25,HIGH);
    digitalWrite(26,LOW);
    
    digitalWrite(27,LOW);
    digitalWrite(28,HIGH);
    digitalWrite(29,HIGH);
    digitalWrite(30,HIGH);
    digitalWrite(31,LOW);
    
    digitalWrite(32,LOW);
    digitalWrite(33,LOW);
    digitalWrite(34,HIGH);
    digitalWrite(35,HIGH);
    digitalWrite(36,HIGH);

    analogWrite(2,75);
    analogWrite(3,175);
    analogWrite(4,75);
    analogWrite(5,175);
    break;
    case 'e':
    digitalWrite(22,HIGH);
    digitalWrite(23,HIGH);
    digitalWrite(24,HIGH);
    digitalWrite(25,LOW);
    digitalWrite(26,LOW);
    
    digitalWrite(27,HIGH);
    digitalWrite(28,HIGH);
    digitalWrite(29,HIGH);
    digitalWrite(30,LOW);
    digitalWrite(31,LOW);
    
    digitalWrite(32,LOW);
    digitalWrite(33,LOW);
    digitalWrite(34,HIGH);
    digitalWrite(35,HIGH);
    digitalWrite(36,HIGH);

    analogWrite(2,0);
    analogWrite(3,255);
    analogWrite(4,0);
    analogWrite(5,255);
    break;
  }
}
