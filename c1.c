#include<stdio.h>
int main(){
    float d,m,feet,inches,centi;
    printf("enter distance in kg: ");
    scanf("%f",&d);
    m=1000*d;
    printf("distance in meters=%f\n",m);
    feet=3280.8*d;
    printf("distance in feet=%f\n",feet);
    inches=39370*d;
    printf("distance in inches=%f\n",inches);
    centi=100000*d;
    printf("distance in centi=%f\n",centi);
return 0;
}
