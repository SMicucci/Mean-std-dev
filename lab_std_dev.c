#include<stdio.h>
#include<math.h>

float stddev(float value[],int number_of_value);
float mean(float value[],int number_of_value);

void main(){
    int i=0,k;
    printf("Insert the number of misures taken\n\t-\t");
    scanf("%d",&k);
    float value[k]; float devstd,mean1;
    printf("Insert the misuration value:\n");
    /*for (i = 0; i < k; i++)
    {
        printf("\t-\t");
        scanf("%f",value[i]);
    }*/
    do
    {
        printf("\t-\t");
        scanf("%f",&value[i]);
        i++;
    } while (i<k);
    devstd = stddev(value,k);
    mean1 = mean(value,k);
    printf("\nStandard Deviation of the mean\t%f\nMean value\t\t\t%f\n\n",devstd,mean1);
    return;
}

float stddev(float value[],int number_of_value){
    float mean , sum = 0.0 , delta = 0.0 , res ; int i;
    // Calculation of the mean for n value
    for (i = 0; i < number_of_value; i++){
        //simple sum of value
        sum = sum + value[i];
    }
    mean = sum / number_of_value;
    /*Calculation of the standard deviation using the mean self calculated
    Using the formula square root( sum( delta(xi-mean)^2)) / number_of_value )*/
    for ( i = 0; i < number_of_value; i++){
        //sum of the square of delta between value and mean
        delta = delta + pow(value[i] - mean,2);
    }
    res = pow( delta / (number_of_value * (number_of_value - 1)) , 0.5); //cool way to say square root
    return res;    
}

float mean(float value[],int number_of_value){
    float mean , sum = 0.0 ; int i;
    // Calculation of the mean for n value
    for (i = 0; i < number_of_value; i++){
        //simple sum of value
        sum = sum + value[i];
    }
    mean = sum / number_of_value;
    return mean;
}