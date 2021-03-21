#pragma once
#include <string>
#include <sstream>
using namespace std;
class Real
{
public:
	double y1, y2;
	class Number
	{
	public:
		float x1, x2;
	public:
		float getDodanok1() const { return x1; }
		float getDodanok2() const { return x2; }

		void setDodanok1(float value) { x1 = value; }
		void setDodanok2(float value) { x2 = value; }

		Number();
		Number(float, float);
		operator string() const;     //виведення значень на екран

		friend ostream& operator << (ostream&, const Number&); //перевантаження функції виведення
		friend istream& operator >> (istream&, Number&); //перевантаження функції введення

		void Div_x1_x2();
		void Div_x2_x1();
		void Sum();

	};
	Number l;
public:
	double getStepin1() const { return y1; }
	double getStepin2() const { return y2; }
	Number get_l() const { return l; }

	void setStepin1(double value) { y1 = value; }
	void setStepin2(double value) { y2 = value; }
	void set_l(Number value) { l = value; }

	Real();
	Real(double, double);
	operator string() const;     //виведення значень на екран

	friend ostream& operator << (ostream&, const Real&); //перевантаження функції виведення
	friend istream& operator >> (istream&, Real&); //перевантаження функції введення

	void Step1();
	void Step2();
	void Log1();
	void Log2();
};


