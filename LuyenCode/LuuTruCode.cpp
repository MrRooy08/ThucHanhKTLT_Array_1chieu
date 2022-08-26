#include <iostream>
using namespace std;
const int NLD = 50;
struct Day_So
{
	int list[NLD];
	int n;
};

void Nhap_ds(Day_So& a)
{
	cout << "\n Nhap So Phan Tu: ";
	cin >> a.n;
	for (int i = 0; i < a.n; i++)
	{
		cout << "a[" << i << "]=";
		cin>> a.list[i];
	}
}

void Xuat_ds(Day_So a)
{
	for (int i = 0; i < a.n; i++)
	{
		cout <<"  "<< a.list[i] << endl;
	}
}
int Dem_Am(Day_So a)
{
	int dem = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (a.list[i] < 0)
		dem++;
	}
	return dem;
}

int Max_Chan_Duong(Day_So a)
{
	int max = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (a.list[i] > 0 && a.list[i] % 2 == 0)
			max = a.list[i];
	}
	return max;
}

int main()
{
	Day_So(a);
	Nhap_ds(a);
	cout << "  Cac So Vua Nhap: " << endl;
	Xuat_ds(a);
	cout << " Dem Cac So Am: " << Dem_Am(a) << endl;
	cout << " So chan duong lon nhat: " << Max_Chan_Duong(a) << endl;
}


