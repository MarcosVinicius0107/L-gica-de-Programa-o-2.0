// C++ code
// Exibir do 0 ao 100 de 5 em 5

//variavel
int contador;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 for(int contador = 0; contador <=100; contador+= 5){
     Serial.println("Contador do numero: " + String(contador));
  }
  delay(1200);
}