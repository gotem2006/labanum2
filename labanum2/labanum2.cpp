
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите номер задания:";
	int a;
	cin >> a;
	if (a == 1)
	{
		char s, b;
		s = 'X';
		b = ' ';
		for (int i = 0; i < 21; i++)
		{
			int c;
			cout << string(21 - i, b);
			cout << string(i, s) << endl;
		}
		return main();
			
	}
		
	
	if (a == 2)
	{
	metka1:
		cout << "Введите значение факториала:";
		int fact, factres, fact2;
		cin >> fact;
		factres = fact;
		fact2 = factres;
		for (int i = 1; i < factres; i++)
		{
			fact2 = fact2 - 1;
			fact = fact * fact2;
		}
		cout << "Значение фактариала:" << fact << endl;
		cout << "Введите 0 если вы хотите завершить программу или любое число чтобы продолжить:";
		int zero1;
		cin >> zero1;
		if (zero1 == 0)
		{
			return main();
		}
		else
		{
			goto metka1;
		}
	}
	if (a == 3)
	{
		float summ, years, percents, money;
		cout << "Введите начальный вклад:";
		cin >> money;
		cout << "Введите число лет:";
		cin >> years;
		cout << "Введите процентную ставку:";
		cin >> percents;
		summ = money;
		int years2;
		years2 = 1;
		for (int i = 0; i < years; i++)
		{

			summ = summ + ((summ * percents) / 100);
			cout << "В конце " << years2 << "-го года вы получите " << summ << " долларов" << endl;
			years2 = years2 + 1;

		}
		cout << "Через " << years << " лет вы получите " << summ << " долларов" << endl;
		return  main();
	}

	if (a == 4)
	{
		float summ, percents, platezhi, years, platezhi1, viplata, vznos, vibor;
		cout << "Введите сумму ипотеки:";
		cin >> summ;
		cout << "Введите взнос ипотеки:";
		cin >> vznos;
		cout << "Введите процентную ставку:";
		cin >> percents;
		cout << "Введите срок выплаты ипотеки:";
		cin >> years;
		cout << "Выберите вид платежа дифференцированный(1) или аннуитетный(2):";
		cin >> vibor;
		if (vibor == 2)
		{
			summ = summ - vznos;
			float i, n, s, p, cof;
			p = percents / 100;
			i = p / 12;
			n = years * 12;
			s = pow(1 + i, n);
			cof = (i * s) / (s - 1);
			platezhi1 = cof * summ;
			viplata = platezhi1 * n;
			int god;
			god = 1;
			float viplata2;
			viplata2 = viplata / 3;
			for (int i = 0; i < years; i++)
			{
				cout << "Ваша выплата за " << god << " год составит " << viplata2 << "рублей" << endl;
				god += 1;
			}
			cout << "Ваша выплата за ипотеку составит " << viplata << " рублей" << endl;
			return main();
		}
		if (vibor == 1)
		{
			int n, b, y;
			percents = percents / 100;
			n = years * 12;
			summ = summ - vznos;
			b = 0;
			y = 0;
			float dr;
			float dr1;
			dr1 = 0;
			dr = 0;
			for(int g = 0; g < n; g++)
			{
				platezhi = (summ / n) + ((summ - ((summ / n) * b)) * (percents / 12));
				b += 1;
				dr += platezhi;
				dr1 += platezhi;
				if (b % 12 == 0)
				{
					y += 1;
					cout << "За " << y << " год выплата составит " << dr << " рублей" << endl;
					dr = 0;
				}
			}
			cout << setprecision(9) <<  "Сумма за все платежи составит " << dr1 << " рублей" << endl;
			return main();
		
		}


	}
	if (a == 5)
	{
	metka2:
		cout << "Введите первую сумму :";
		int funt, pens, shili;
		char stop;
		cin >> funt >> stop >> shili >> stop >> pens;
		int funt2, pens2, shili2;
		if (shili > 19)
		{
			cout << "Неверная запись числа шилинги не могут быть больше 19!" << endl;
			cout << "Если хотите попробовать снова нажмите 1 или любой знак что бы выйти в главное меню: " << endl;
			int as;
			cin >> as;
			if (as == 1)
			{
				goto metka2;
			}
			else
			{
				return main();
			}
		}
		if (pens > 11)
		{
			cout << "Неверная запись числа пенсы не могут быть больше 11!" << endl;
			cout << "Если хотите попробовать снова нажмите 1 или любой знак что бы выйти в главное меню: " << endl;
			int as;
			cin >> as;
			if (as == 1)
			{
				goto metka2;
			}
			else
			{
				return main();
			}
		}
		if ((shili > 19) and (pens > 11))
		{
			cout << "Неверная запись числа шилинги не могут быть больше 19 и пенсы не могут превышать 11!" << endl;
			cout << "Если хотите попробовать снова нажмите 1 или любой знак что бы выйти в главное меню: " << endl;
			int as;
			cin >> as;
			if (as == 1)
			{
				goto metka2;
			}
			else
			{
				return main();
			}
		}
		cout << "Введите вторую сумму :";
		cin >> funt2 >> stop >> shili2 >> stop >> pens2;
		if (shili2 > 19)
		{
			cout << "Неверная запись числа шилинги не могут быть больше 19!" << endl;
			cout << "Если хотите попробовать снова нажмите 1 или любой знак что бы выйти в главное меню: " << endl;
			int as;
			cin >> as;
			if (as == 1)
			{
				goto metka2;
			}
			else
			{
				return main();
			}
		}
		if (pens2 > 11)
		{
			cout << "Неверная запись числа пенсы не могут быть больше 11!" << endl;
			cout << "Если хотите попробовать снова нажмите 1 или любой знак что бы выйти в главное меню: " << endl;
			int as;
			cin >> as;
			if (as == 1)
			{
				goto metka2;
			}
			else
			{
				return main();
			}
		}
		if ((shili2 > 19) and (pens2 > 11))
		{
			cout << "Неверная запись числа шилинги не могут быть больше 19 и пенсы не могут превышать 11!" << endl;
			cout << "Если хотите попробовать снова нажмите 1 или любой знак что бы выйти в главное меню: " << endl;
			int as;
			cin >> as;
			if (as == 1)
			{
				goto metka2;
			}
			else
			{
				return main();
			}
		}
		int funt3, pens3, shili3;
		funt3 = funt + funt2;
		shili3 = shili + shili2;
		pens3 = pens + pens2;
		if (pens3 > 11)
		{
			shili3 += 1;
			pens3 -= 12;
		}
		if (shili3 > 19)
		{
			funt3 += 1;
			shili3 -= 20;
		}
		cout << "Сумма равна" << funt3 << stop << shili3 << stop << pens3 << endl;
		cout << "Продолжить (у/n):";
		string a;
		cin >> a;
		if (a == "y")
		{
			goto metka2;
		}
		else
		{
			return main();
		}


	}
}
