int myAtoi(char* s) {
     int sign = 1, num = 0, i = 0;

    
    while (s[i] == ' ') {
        i++;
    }

    
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        
        if (num > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        num = num * 10 + digit;
        i++;
    }

    return num * sign;
}
