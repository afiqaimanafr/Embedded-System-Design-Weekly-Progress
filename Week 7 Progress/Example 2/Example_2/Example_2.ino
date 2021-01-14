volatile boolchanged;
unsigned char*sreg= (unsigned char*)0x5F;
unsigned char*pcicr= (unsigned char*)0x68;
unsigned char*pcmsk0 = (unsigned char*)0x6B;
intmain()
{
*sreg|= (1 <<7); //Enable interrupts in general
*pcicr=1; //Enable pin change interrupt 0
*pcmsk0 =255; //Enable pin change interrupt on all the Port B pin
Serial.begin(9600);
while(1)
{
if(changed)
{
Serial.println("Sensor values changed");
//Perform necessary investigation and subsequent operations
changed =0;
}
//Do other things or go back to sleep
Sleep(); //There is no such function called ‘Sleep’. Just for demo.
}
}
ISR(PCINT0_vect)
{
changed =1;
}
•Most of the time, there will not be any motion and there will not be any change in sensor values.
•The microcontroller can sleep to conserve power (or do other things) as long as the sensor values are static.
•As soon as there is a change in state in any of the port D pins, an interrupt will wake up the microcontroller and necessary operations can be performed
