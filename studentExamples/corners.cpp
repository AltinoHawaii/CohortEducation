
/*

Compliments of Juanito from Sunday's training...the Sunday group was asked to code their cars to make a square and turn on the right or left side LEDs as the car make the turn but turn off the LEDs when the car goes straight again
 */

#include "Altino.h"

#include <stdio.h>

 

int main()

{

  Open(szPort);

 

  int s = 500;

  int t1 = 3000;

  int t2 = 1250;

  int i = 0;

 

  Steering(2);

  Sleep(t1);

 

  while(i<3)

    {

      Go(s,s);

      Sleep(t1);

 

      Led(0x000A);

      Steering(1);

      Sleep(t2);

      Steering(2);

      Led(0);

 

      i++;

    }

 

  Go(s,s);

  Sleep(t1);

  Go(0,0);

 

  Close();

  return 0;

}

