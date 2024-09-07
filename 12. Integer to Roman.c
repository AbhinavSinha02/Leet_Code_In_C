char* intToRoman(int num) {
    struct roman{
        int val;
        const char* symbol;
    }Romannumber[]={{1000, "M"},{900,  "CM"},{500,  "D"},{400,  "CD"},{100,  "C"},{90,   "XC"},{50,   "L"},
    {40,   "XL"},{10,   "X"},{9,    "IX"},{5,    "V"},{4,    "IV"},{1,    "I"}
    };
    int i=0;
    char* result=(char*)malloc(20* sizeof(char));
    if (result == NULL) {
        
        exit(1);  // Exit if memory allocation fails
    }
    result[0]='\0';
    while(num>0){
        while(num>=Romannumber[i].val){
            strcat(result,Romannumber[i].symbol);
            num-=Romannumber[i].val;
            
        }
        i++;
    }
   return result;
}
