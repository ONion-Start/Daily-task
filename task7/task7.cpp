#include <iostream>
#include <fstream>
class Complex {
private:
	int Real;
	int Imaginary;
public:
	Complex(int a, int b) {
		this->Real = a;
		this->Imaginary = b;
	}
	Complex() {
		this->Real = 0;
		this->Imaginary = 0;
	}
	~Complex(){}
	friend std::ostream& operator<<(std::ostream& out, const Complex& num);
	Complex operator +(const Complex& other) {
		Complex temp;
		temp.Real = this->Real + other.Real;
		temp.Imaginary = this->Imaginary + other.Imaginary;
		return temp;
	}
	Complex operator *(const Complex& other) {
		Complex temp;
		temp.Real = this->Real * other.Real;
		temp.Imaginary = this->Imaginary * other.Imaginary;
		return temp;
	}
	Complex operator -(const Complex& other) {
		Complex temp;
		temp.Real = this->Real - other.Real;
		temp.Imaginary = this->Imaginary - other.Imaginary;
		return temp;
	}
	Complex operator /(const Complex& other) {
		Complex temp;
		temp.Real = this->Real / other.Real;
		temp.Imaginary = this->Imaginary / other.Imaginary;
		return temp;
	}
};

std::ostream& operator<<(std::ostream& out, const Complex& num) {

	out << num.Real<< "+" << num.Imaginary<<"i";
	return out;
}
int main() {
	int r, i,r2,i2;
	std::cout << ">>Real >>IMaginary"<<std::endl;
	std::cin >> r >> i;
	std::cout << ">>Real2 >>Imaginary2"<<std::endl;
	std::cin >> r2 >> i2;
	Complex num1(r,i);
	Complex num2(r2, i2);
	std::cout <<"num1*num2= " << num1 * num2 <<std::endl;
	std::cout << "num1+num2= " << num1 + num2 << std::endl;
	std::cout << "num1-num2= " << num1 - num2 << std::endl;
	std::cout << "num1/num2= " << num1 / num2 << std::endl;
}
