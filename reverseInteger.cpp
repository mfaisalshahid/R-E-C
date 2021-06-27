int reverse(int n) {
    long int remainder = 0, reversedNumber = 0;
    while(n != 0) {
    remainder = n%10;
    reversedNumber = reversedNumber*10 + remainder;
    n /= 10;   
    }
    int min = INT_MIN;
    int max = INT_MAX;
    if(reversedNumber >= max || reversedNumber <= min){
        return 0;
    }
    return reversedNumber;
}
