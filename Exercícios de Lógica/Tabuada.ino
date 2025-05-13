// C++ code
//variaveis
int numero1 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("|-----------------------------|"); 
  Serial.println("|     Seja Bem Vindo          |");
  Serial.println("|Digite uma tabuada qualquer: |"); 
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();
  while (!Serial.available());
  numero1 = Serial.parseInt();

  Serial.println("|---------------------------------|"); 
  Serial.println("|A tabuada do numero escolhido eh:|");
  Serial.println("|---------------------------------|"); 
  
  for (int contador = 1; contador <= 10; contador++) {
    Serial.println(String(numero1) + " x " + String(contador) + " = " + String(numero1 * contador));
  
  
  }
   
  delay(12000); // Espera 12 segundos antes de permitir nova entrada
}
