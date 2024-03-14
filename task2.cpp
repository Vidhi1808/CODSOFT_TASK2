#include <iostream>
using namespace std;
int main()
{
  char op;
  float num1, num2;
  cout << "Enter operator either +  or - or * or / :";
  cin >> op;
  cout << "Enter two operands:";
  cin >> num1 >> num2;
  switch (op)
  {
  case '+':
  {
    cout << num1 + num2;
    break;
  }
  case '-':
  {
    cout << num1 - num2;
    break;
  }
  case '*':
  {
    cout << num1 * num2;
    break;
  }
  case '/':
  {
    cout << num1 / num2;
    break;
  }
  default:
    // if the perator is other tahn +,-,* or /, error msg. is shown
    cout << "Enter operator is not correct";
    break;
  }
  return 0;
}