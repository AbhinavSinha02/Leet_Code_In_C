int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int a=0;int b=0;
    for(int i=0;i<commandsSize;i++){
            if(commands[i][0]=='U'){
                a-=1;
            }
            else if(commands[i][0]=='D'){
                a+=1;
            }
            else if(commands[i][0]=='R'){
                b+=1;
            }
            else if(commands[i][0]=='L'){
                b-=1;
            }
    }
    return (a*n)+b;
}
