int countSeniors(char ** details, int detailsSize){
    int count=0;int age;
    for(int i=0;i<detailsSize;i++){
        age =(((int)details[i][11])*10) +((int)details[i][12]);
        if(age>60){
           count+=1;
        }
    }
    return count;
}
