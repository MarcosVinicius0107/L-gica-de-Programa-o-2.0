// C++ code
//
void setup()
{
  Serial.begin(9600);
}
int numero = 0;
byte led1 = 2;
byte led2 = 4;

void loop()
{
  Serial.println("Digite o numero (1: acende o led vermelho;");
  Serial.println("2: acende o led verde; 0: desliga ambos os leds)");
  while(! Serial.available() ){}
  numero = Serial.parseInt ();
  
  if (numero == 1){
  digitalWrite(led1, HIGH);
  
  }
  if (numero == 2){
  digitalWrite(led2, HIGH);
  } 
  if (numero == 0){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  }
  if (numero != 0 && numero != 1 && numero != 2) {
  Serial.println("erro numero nao esta listado no comando");
  }}