//********************** Floating point exception **********************//
// Remember: this is do while, there will come a time when c will become 0
// it is simmiliar as 0/0

int main(){
    int c = 5, no = 10;
    do {
        no /= c;
    }while(c--);
    return 0;
}

// OP: 
// Floating-point exception (SIGFPE)
// timeout: the monitored command dumped core
// /bin/bash: line 1:    30 Floating point exception

//********************** Problem on range **********************//
int main(){
    short i;
    for (i=1; i>0; i++)
        cout << i << " ";
    return 0;
}

// OP: It will display all the elements less than 32768 as the range of short is till 32767, and then i will become -32768 causing the loop to break.