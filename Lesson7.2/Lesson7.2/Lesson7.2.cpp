#include <iostream>
using namespace std;
int main()
{
	do
	{
		cout << "edded daxil edin - ";
		double num1;
		cin >> num1;
	
		cout << "edded daxil edin - ";
		double num2;
		cin >> num2;
		cout << "+,-,/,* daxil edin(eger kalkulyatoru qutarmaq isteyirsinizse onda ferqli seye basin) - ";
		char opp;
		cin >> opp;
		double total;
		if (opp == '+') {
			total = num1 + num2;
		}
		else if (opp == '-') {
			total = num1 - num2;
		}
		else if (opp == '*') {
			total = num1 * num2;

		}
		else if (opp == '/') {
			total = num1 / num2;
		}
		else {
			cout << "kalkulayator qutardi" << endl;
			break;
		}
		cout << " = " << total << endl;
	} while (true);







	do
	{
		double manat;
		cout << "manat elave edin - ";
		cin >> manat;
		unsigned short int cho;
		cout << "rubl(1),dollar(2), euro(3) ve ya funt(4) (eger 4 den cox ve 0 yazilsa praqram dayanacaq) - ";
		cin >> cho;
		if (cho==1)
		{
			double rubl;
			rubl = manat * 51.9;
			cout << "rubl = " << rubl << endl;
		}
		else if (cho == 2)
		{
			double dollar;
			dollar = manat / 1.7;
			cout << "dollar = " << dollar << endl;
		}
		else if (cho == 3)
		{
			double euro;
			euro = manat / 1.84;
			cout << "euro = " << euro << endl;
		}
		else if (cho == 4)
		{
			double funt;
			funt = manat / 2.19;
			cout << "funt = " << funt << endl;
		}
		else {
			cout << "proqram dayandi"<<endl;
			break;
		}
	

	} while (true);
	do
	{
		double mil;
		cout << "milli yazin (eger menfi olsa proqram dayanir) - ";
		cin >> mil;
		if (mil < 0)
		{
			cout << "proqram qutardi" << endl;
			break;
		}
		else {
			double km = mil * 1.609;
			cout << mil << " mill = " << km << " km" << endl;
		}
	} while (true);


	int i=0;
	int mus = 0;
	int menf = 0;
	int sifir = 0;
	do
	{
		int num;
		cout << "edded daxil edin - ";
		cin >> num;
		if (num >0)
		{
			mus++;
		}
		else if (num<0)
		{
			menf++;
		}
		else if (num == 0){
			sifir++;
		}
		i++;
	} while (i<10);
	double musf = mus *100/10;
	double menff = menf  * 100/10;
	double sifirf = sifir  * 100/10;

	cout << "musbetin faizi = " << musf<< endl;
	cout << "menfinin faizi = " << menff << endl;
	cout << "sifirin faizi = " << sifirf << endl;


}

