
#include <iostream>
using namespace std;


main()
{

	
	char op;
	float num1, num2;
	
	cin >> op;
	
	cin >> num1 >> num2;
	
	switch (op) {
		case '+':
			cout << num1 + num2;
			break;
	
		case '-':
			cout << num1 - num2;
				break;
				
		case '*':
			cout << num1 * num2;
				break;
						
		case '/':
			cout << num1 / num2;
				break;
		default:
		cout <<"Wrong Input Bitch";
		break;
						
	
	
	
	
	
	
	
	
	
	
	}
	
	
	return 0;
}
