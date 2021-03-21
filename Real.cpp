#include "Real.h"
#include <iostream>

using namespace std;

Real::Number::Number()
{
	x1 = 0;
	x2 = 0;
}
Real::Number::Number(float dodanok1, float dodanok2)
{
	x1 = dodanok1;
	x2 = dodanok2;
}
istream& operator >>(istream& in, Real::Number& n)
{
	cout << "vvedit pershyi dodanok:"; in >> n.x1;
	cout << "vvedit druhyi dodanok:"; in >> n.x2;
	return in;
}
ostream& operator <<(ostream& out, const Real::Number& n)
{
	out << string(n) << endl;
	return out;
}
Real::Number::operator string() const
{
	stringstream sout;
	sout << "pershyi dodanok: " << x1 << endl;
	sout << "druhyi dodanok: " << x2 << endl;
	return sout.str();
}
void Real::Number::Sum()
{
	cout << "suma dvokh dodankiv: " << x1 + x2 << endl;
}
void Real::Number::Div_x1_x2()   //метод ділення першого на другий
{
	cout << "dilennia pershoho na druhyi: " << x1 / x2 << endl;
}
void Real::Number::Div_x2_x1() //метод ділення другого на перший
{
	cout << "dilennia druhoho na pershyi: " << x2 / x1 << endl;
}
Real::Real()
{
	y1 = 0;
	y2 = 0;
}
Real::Real(double stepin1, double stepin2)
{
	y1 = stepin1;
	y2 = stepin2;
}
istream& operator >>(istream& in, Real& p)
{
	cout << "vvedit stepin do yakoho treba pidnesty pershe chyslo:"; in >> p.y1;
	cout << "vvedit stepin do yakoho treba pidnesty druhe chyslo:"; in >> p.y2;
	return in;
}
ostream& operator <<(ostream& out, const Real& p)
{
	out << string(p) << endl;
	return out;
}
Real::operator string() const
{
	stringstream sout;
	sout << "stepin dlia pershoho chysla: " << y1 << endl;
	sout << "stepin dlia druhoho chysla: " << y2 << endl;
	return sout.str();
}
void Real::Step1()
{
	cout << "rezultat pidnesennia do stepenia pershoho chysla: " << pow(l.getDodanok1(), y1) << endl;
}
void Real::Step2()
{
	cout << "rezultat pidnesennia do stepenia druhoho chysla: " << pow(l.getDodanok2(), y2) << endl;
}
void Real::Log1()
{
	cout << "rezultat logaryfmuvannia pershoho chysla: " << log10(l.getDodanok1()) << endl;;
}
void Real::Log2()
{
	cout << "rezultat logaryfmuvannia druhoho chysla: " << log10(l.getDodanok2()) << endl;
}