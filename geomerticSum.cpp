double geometricSum(int k) {
    double a =1;
    if(k==0){
        return 1;
    }
    // Write your code here
double b = geometricSum(k-1);
a +=(1/2.0*b);
return a;
} 
