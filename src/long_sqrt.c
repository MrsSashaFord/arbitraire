#include "internal.h"
/*
	This function is under construction.


               75.29
            ________
          \/ 5669.00
             49
             _______
7*20 = 145  | 769
         -    725
             _______
75*20= 1502 |  44 00
          -    30 04
              _______
752*20=15049 | 13 9600
           -   13 5441
                _________
7529*20=150582 |  315900
             -

            23.8
          _______
        \/5 69.00
          4
         _______       44 * 4 = 176
     43 | 1 69         43 * 3 = 129
          1 29
          ______       469 * 9 = 4221
     468 |  40.00      468 * 8 = 3744
            37.44

        * Get the first number set
        * attempt to find the square of the number set using multiplication
        * push the discovered number onto the answer
        * perform a subtraction and carry down 2 digits from the number that is being squared
        * multiply the answer by 20 and put into temp
        * find how many times temp can go into the carried down sub and its two digits


	* if the number has an even length you can get two digits but if the length
	 *  is odd then you'll need to start with the first three

        while (1)
        {
                if ( num * num == num1 )
                {
                        break;
                } else if (num * num > num1 ) {
                        --num;
                        break;
                }
                ++num;


        }

	this style of loop should work for figuring out the squares

*/
fxdpnt *long_sqrt(fxdpnt *a, int base, size_t scale)
{
	a = a;
	base = base;
	scale = scale;

	
	fxdpnt *ret = NULL;
	return ret;
}
