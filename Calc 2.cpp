#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void history();

double num = 0;
double num2 = 0;
float ans = 0;
char op = 0;
int loop = 1;
string h = "";

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
            op = ' ' ;
        break;
        }
        cout << num << op << num2 << "=" << ans << endl;
        h = h + to_string(num)+ op + to_string(num2)+ "=" + to_string(ans)+ "\n";
        
    }

    return 0;
}

