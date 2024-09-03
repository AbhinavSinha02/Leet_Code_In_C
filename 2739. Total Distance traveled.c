int distanceTraveled(int mainTank, int additionalTank){
    int count=0;
    while(mainTank>=5){
        mainTank-=5;
        count+=5*10;
        if(additionalTank>=1){
            mainTank+=1;
            additionalTank-=1;
        }
    }
    count+=mainTank*10;

    return count;
  
    
}
