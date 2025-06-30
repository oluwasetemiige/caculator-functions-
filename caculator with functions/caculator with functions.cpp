#include<iostream>
using namespace std;

void multiplication();
void addition();
void subtraction();
void division();
int  choice;
double x, y;
  
int main() {
	do 
	{
		std::cout << "Please select an arithmetic " << std::endl;
		std::cout << "1. for multiplication" << std::endl;
		std::cout << "2. for Addition" << std::endl;
		std::cout << "3. for subtraction" << std::endl;
		std::cout << "4. for Divison" << std::endl;
		std::cout << "5. Quit" << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 1: multiplication();
			break;
		case 2:addition();
			break;
		case 3: subtraction();
			break;
		case 4:division();
			break;
		case 5: std::cout << "Thank you for using setemi caculator" << std::endl;
			break;
		default:std::cout << "Invalid input" << std::endl;
			break;

		}

	} while (choice != 5);

	

}
void multiplication()
{
	cout << "Please Enter the value you want to be multiplcated" << std::endl;
	//cout << "Interger 1: ";
	cin >> x;
	std::cout << "X" << std::endl;
	cin >> y;
	cout <<"Total: "<< x * y;
	cout << endl<<endl;

}
void addition()
{
	cout << "Please Enter the value you want to be Addition"<<std::endl;
	//cout << "Interger 1: ";
	cin >> x;
	std::cout << "+"<<std::endl;
	cin >> y;
	cout <<"Total: "<< x + y;
	cout << endl << endl;
}
void subtraction()
{
	cout << "Please Enter the value you want to be Subtracted" << std::endl;
	//cout << "Interger 1: ";
	cin >> x;
	cout << "-"<<std::endl;
	cin >> y;
	cout <<"Total: "<< x - y;
	cout << endl << endl;
}
void division()
{

	cout << "Please Enter the value you want to be Divided"<<std::endl;
	//cout << "Interger 1: ";
	cin >> x;
	std::cout << "/"<<std::endl;
	cin >> y;
	cout <<"Total: "<< x / y;
	cout << endl << endl;
}