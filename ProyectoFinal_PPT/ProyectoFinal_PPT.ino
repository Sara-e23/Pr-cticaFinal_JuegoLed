const int PIEDRA = 2;//rojo
const int PAPEL = 3;//azul
const int TIJERA = 4;//verde

const int BOTON = 5;
int azar = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIEDRA, OUTPUT);
  pinMode(PAPEL, OUTPUT);
  pinMode(TIJERA, OUTPUT);

  pinMode(BOTON, INPUT_PULLUP);
  randomSeed(analogRead(A0));
}

void loop() {
  
  // put your main code here, to run repeatedly:
  if(digitalRead(BOTON) == LOW){
    parpadeo();
    parpadeo();
    parpadeo();
    azar = random (1, 4);//hasta el 4 para que abarque del 1 al 3
    if(azar == 1){//rojo
      digitalWrite(PIEDRA, HIGH);
      delay (1000);
      digitalWrite(PIEDRA, LOW);
    }if(azar == 2){//azul
      digitalWrite(PAPEL, HIGH);
      delay (1000);
      digitalWrite(PAPEL, LOW);
    }if(azar == 3){//verde
      digitalWrite(TIJERA, HIGH);
      delay (1000);
      digitalWrite(TIJERA, LOW);
    }
  }
}
void parpadeo (){
  digitalWrite(PIEDRA, HIGH);
  digitalWrite(PAPEL, HIGH);
  digitalWrite(TIJERA, HIGH);
  delay(1000);
  digitalWrite(PIEDRA, LOW);
  digitalWrite(PAPEL, LOW);
  digitalWrite(TIJERA, LOW);
  delay(1000);
}
