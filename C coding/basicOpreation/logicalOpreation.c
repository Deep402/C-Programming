#include <stdio.h>
#include <math.h>
int main()
{
       printf("%d",4>3 && 5!=4);
    return 0;
}
/*  Logical Operaters

    1).  && - AND function both statements must be true then only the output will be true;
    eg- 3>=3 && 5!=7 -------> output - 1
        4=6 && 5!=9  -------> output - 0 (In short it follows truth table of AND function
                                                    t+t=t
                                                    f+t=f
                                                    t+f=f
                                                    f+f=f)
    2). || - OR function 
        3>=3 && 5!=7 -------> output - 1
        4=6 && 5!=9  -------> output - 1 (In short it follows truth table of OR function
                                                    t+t=t
                                                    f+t=t
                                                    t+f=t
                                                    f+f=f)
    3). ! - NOT function it inverts the result of the output
        printf("%d", !(3>2)); ------> output - 0(here ouput should be true(1) but its false(0)
                                                 because of the use of NOT function). 

    4). += Add AND assignment operator. 
    C += A is equivalent to C = C + A.
*/