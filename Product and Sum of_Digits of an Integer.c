

int subtractProductAndSum(int n){
    int sum=0;
    int product=1;
    int r;
    while(n){
            r=n%10;
            sum=sum+r;
            product= product*r;
            n=n/10;
        }return product-sum;
}
