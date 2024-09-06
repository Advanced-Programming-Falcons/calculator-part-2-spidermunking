#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

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
string input;

bool check();
void calc();

int main(void){
    while(loop == 1){
        cout << "Please enter a calculation.(opperators ( +, -, *, /, ^, <)\n";
        getline(cin, input);

        if (check()){
        cout << "Seems to be working\n";
        } else { cout << "doesnt work bru\n";}

        calc();
        cout << num << op << num2 << "=" << ans << endl;
        
    }

    return 0;
}

bool check(){
    istringstream iss(input);
    if (iss >> num >> op >> num2) {
            cout << op;
            number = num;
            number2 = num2;
            answer = ans;

            h = h + to_string(number)+ op + to_string(number2)+ "=" + to_string(answer)+ "\n";
            return true;
    }
    return false;
}

void calc(){
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
            case 'h': case 'H':
                cout << h << endl;
            break;
            case '=':
                cout << "Yur Dun Bud...\n";
            break;
            default:
                cout << "doesnt work bru\n";
            break;
        }
}
