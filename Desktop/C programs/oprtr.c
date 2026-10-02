#include<stdio.h>
int main()
    /* types of operators in c */
    // operators precedence in c ("()  →  * / %  →  + -  →  < <= > >=  →  == !=  →  &&  →  ||  →  =" )
    //  arithmetic operators in c
    // relational operators in c
    // logical operators in c
    // bitwise operators in c
    // assignment operators in c
    //ternary operator in c;

/* example of operators with explanation */
// arithmetic operators in c
{int a = 2;
    int b = 3 ; 
    int d = a + b ;// addition operator in c
    printf("%d\n",d);
    int g = 1.999999;// float in c if we assign a float value to an int variable it will take only the integer part and ignore the decimal part
    int h = 1;
    int i=g*h;// multiplication operator in c
    printf("%d\n",i);
    int j = 10.000000;
    int k = 3;
    int l = j * k;// float IN C if we assign a float value to an int variable it will take only the integer part and ignore the decimal part
    printf("%f\n",l);// operator in c
    int baunty = 20;
    int monty = 2 ;
    int result = baunty / monty ;// division operator in c
    printf("%d\n",result);
    // boadmas rule in c
    int x = 10;
    int y = 5;  
    int z = 2;
    int p = x + y * z ;// multiplication operator has higher precedence than addition
    printf("%d\n",p);
    int q = (int) 1.999999;
    printf("%d\n",q);
    // relational operators in c
    int e=8;
    int f=8;
    int v = e==f; // equality operator in c it will return 1 if the condition is true and 0 if the condition is false
    int m = e    !=f ;// not equal operator in c it will return 1 if the condition is true and 0 if the condition is false
    printf("%d\n",v);
    printf("%d\n",m);
    int  n = e > f ;// greater than operator in c it will return 1 if the condition is true and 0 if the condition is false
    int o = e  < f ;// less than operator in c it will return 1 if 
    int r = k >= f ;// greater than or equal to operator in c it will return 1 if the condition is true and 0 if the condition is false
    int s = k <= f ;// less than or equal to operator in c it will return 1 if the condition is true and 0 if the condition is false
    printf("%d\n",r);// greater than or equal to operator in c
    printf("%d\n",s);// less than or equal to operator in c
    // logical operators in c
    int t = e > f && k < f ;// logical AND operator in c it will return 1 if both conditions are true and 0 if any of the condition is false
    int u = e > f || k < f ;// logical OR operator in c it will return 1 if any of the condition is true and 0 if both conditions are false
    int w = !t ;// logical NOT operator in c it will return 1 if the condition is false and 0 if the condition is true
    printf("%d\n",t);       
    printf("%d\n",u);
    printf("%d\n",w);
    // asignment operators in c
    int ba = 10;
    int mn=8;
    ba += mn  ;// addition assignment operator in c it is equivalent to ba = ba + u
    printf("%d\n",ba);
    // -= operator in c it is equivalent to ba = ba - u
    ba -= mn ;
    printf("%d\n",ba);
    // *= operator in c it is equivalent to ba = ba * u
    ba *= mn ;
    printf("%d\n",ba);
    // /= operator in c it is equivalent to ba = ba / u
    ba /= mn ;  
    printf("%d\n",ba);
    // %= operator in c it is equivalent to ba = ba % u
    ba %= mn ;
    printf("%d\n",ba);
    return 0 ;
    }