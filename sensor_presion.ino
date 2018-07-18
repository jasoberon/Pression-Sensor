//código Arduino para sensor SKU237545

void setup()
{
  Serial.begin(9600);
 }
 
void loop()
{
 int sensorVal=analogRead(A1);   //variable guarda lectura analógica
 Serial.print("Sensor Value: ");
 Serial.print(sensorVal);
 float voltage = (sensorVal*5.0)/1024.0;
 Serial.print("Volts: ");
 Serial.print(voltage);
 float pressure_pascal = (3.0*((float)voltage-0.47))*1000000.0;  //cambio a pascales
 float pressure_bar = pressure_pascal/10e5;                      //cambio a bares
 Serial.print("Pressure = ");
 Serial.print(pressure_bar);
 Serial.println(" bars");
 Serial.print("Pressure = ");
 delay(100);
 }
