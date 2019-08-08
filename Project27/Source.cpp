# include <iostream>
using namespace std;
struct fraction
{
	float a;
	float b;
};
float fadd(float, float);
float fsub(float, float);
float fmul(float, float);
float fdiv(float, float);

int main()
{
	fraction d1;
	cout << "Please! Enter first number: ";
	cin >> d1.a;
	cout << "Please! Enter sing: ";
	char ch;
	cin >> ch;
	cout << "Please! Enter second number: ";
	cin >> d1.b;
	switch (ch)
	{
	case '+': fadd(d1.a, d1.b); cout << fadd(d1.a, d1.b) << endl;	break;
	case '-': fsub(d1.a, d1.b); cout << fsub(d1.a, d1.b) << endl;	break;
	case '/': fmul(d1.a, d1.b); cout << fmul(d1.a, d1.b) << endl;	break;
	case '*': fdiv(d1.a, d1.b); cout << fdiv(d1.a, d1.b) << endl;	break;
		
	}
	system("pause");
		return 0;
}
float fadd(float a, float b)
{
	return a + b;
}
float fsub(float a, float b)
{
	return a - b;
}
float fmul(float a, float b)
{
	return a / b;
}
float fdiv(float a, float b)
{
	return a * b;
}