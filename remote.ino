#include <IRremote.h>
#include <IRremoteInt.h>

int RECV_PIN =3;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
Serial.begin(9600);
irrecv.enableIRIn(); //start the recieer
}

void loop()
{
 if(irrecv.decode(&results))
 {
   Serial.println(results.value, HEX);
   irrecv.resume();
   delay(500);
 }

}
