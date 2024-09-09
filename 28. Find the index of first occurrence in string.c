int strStr(char* haystack, char* needle) {
    int d=strlen(haystack)-strlen(needle);
    int count=0;
    
    if(d<0){
        return -1;
    }
    
  for(int i=0;i<=d ;i++){
        if(needle[0]==haystack[i]){
            int h=i;
            count=0;
            for(int j=0;needle[j] != '\0';j++){
                if(needle[j]==haystack[h]){
                    h++;
                    count++;
                }
                else{
                    break;
                }
            }
            if(count == strlen(needle)){
                return h-count;
            }
        }
  }
  return -1;

}
