#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <cstdlib> 
#include <ctime> 

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
int i;

bool check();
void calc();
void random();

int main(void){
    while(loop == 1){
        cout << "Please enter a calculation.(opperators ( +, -, *, /, ^, <, =)\n";
        getline(cin, input);
        random();

        if (check()){
        cout << "Seems to be working\n";
        }
        else{
            switch(i){
                    case 1:
                    cout << "Doesnt work bru\n";
                    break;
                    case 2:
                    cout << "C'mon broseph, enter something that will work.\n";
                    break;
                    case 3:
                    cout << "Wow buddy boy, you be playing games with me.\n";
                    break;
                    case 4:
                    cout << "DENIED!!\n";
                    break;
                    case 5:
                    cout << "Francis Cooper!!!\n";
                    break;
                    case 6:
                    cout << "(╯°□°）╯︵ ┻━┻\n";
                    break;
                }
        }

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
                cout << h;
                loop = 0;
            break;
        }
}

void random(){
    srand((unsigned)time(0)); 
    i = (rand()%6)+1; 
}
