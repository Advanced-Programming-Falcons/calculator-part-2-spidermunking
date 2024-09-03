#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double num = 0;
double num2 = 0;
double ans = 0;
int number = 0;
int number2 = 0;
int answer = 0;
char op = 0;
int loop = 1;
string h = "";

int calculation(void);

int main(void){
    while(loop == 1){
        cout << "Please enter a calculation.(opperators ( +, -, *, /, ^, <)\n";
        cin >> num;
        cin >> op;
        cin >> num2;
        switch(op){
            case '+':
                ans = num + num2;
            break;
            case '-':
                ans = num - num2;
            break;
            case '*':
                ans = num * num2;
            break;
            case '/':
                ans = num / num2;
            break;
            case '^':
                ans = pow(num,num2);
            break;
            case '<':
                ans = pow(num, (1 / num2));
            break;
            case '=':
                loop = 0;
                cout << "Yur dun!" << endl;
            break;
            case 'h': case 'H':
                cout << h << endl;
                op = 0;
            break;
        }
        cout << num << op << num2 << "=" << ans << endl;

        /* this next part changes 
        some variables to integers 
        for the sake of ease. idk */
        number = num;
        number2 = num2;
        answer = ans;

        h = h + to_string(number)+ op + to_string(number2)+ "=" + to_string(answer)+ "\n";
    }

    return 0;
}

int calculation(){
/*
this is where i'm going to use a function to do the math
for the calculator. 

the following is the code I am planning on using

switch(op){
            case '+':
                ans = num + num2;
            break;
            case '-':
                ans = num - num2;
            break;
            case '*':
                ans = num * num2;
            break;
            case '/':
                ans = num / num2;
            break;
            case '^':
                ans = pow(num,num2);
            break;
            case '<':
                ans = pow(num, (1 / num2));
            break;
            case '=':
                loop = 0;
                cout << "Yur dun!" << endl;
            break;
            case 'h': case 'H':
                cout << h << endl;
                op = 0;
            break;
        }
*/
    return 0;
}
