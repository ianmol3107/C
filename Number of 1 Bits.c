int hammingWeight(uint32_t n) {
    int count=0;
    while (n != 0){
        if(1 & n)
            count++;
        n /=2;
        
    }return count;
}
