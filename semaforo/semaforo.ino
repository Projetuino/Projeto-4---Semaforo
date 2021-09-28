int verde1 = 13;
int verde2 = 8;
int amarelo1 = 12;
int amarelo2 = 7;
int vermelho1 = 10;
int vermelho2 = 5;
int tempoVerde = 3500; //tempo em milisegundos
int tempoAmarelo = 1500; //tempo em milisegundos

void setup(){
  pinMode(verde1, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(vermelho1, OUTPUT);
  pinMode(vermelho2, OUTPUT);
}

void loop(){
  desligaTodos();
  digitalWrite(verde1, HIGH);
  digitalWrite(vermelho2, HIGH);
  delay(tempoVerde);
  desligaTodos();
  digitalWrite(amarelo1, HIGH);
  digitalWrite(vermelho2, HIGH);
  delay(tempoAmarelo);
  desligaTodos();
  digitalWrite(verde2, HIGH);
  digitalWrite(vermelho1, HIGH);
  delay(tempoVerde);
  desligaTodos();
  digitalWrite(amarelo2, HIGH);
  digitalWrite(vermelho1, HIGH);
  delay(tempoAmarelo);
}

void desligaTodos(){
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo1, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho1, LOW);
  digitalWrite(vermelho2, LOW);
}
