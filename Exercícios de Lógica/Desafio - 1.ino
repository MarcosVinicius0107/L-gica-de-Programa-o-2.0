// C++ code
//Exibir do 5 ao 1

void setup()
{
  Serial.begin(9600);
   for(int contador = 5; contador >= 1; contador -- ){
     Serial.println(contador);
  }
}

void loop()
{

}
