#include "Fraction.h"

Fraction::Fraction(){
	this->_num = 0;
	this->_den = 1;
}
Fraction::Fraction(int num, int den) {
	this->_num = num;
	this->_den = den;
}
Fraction Fraction::operator=(const Fraction & other) {
	this->_num = other._num;
	this->_den = other._den;
	return *this;
}

string Fraction::ToString() {
	stringstream writer;
	writer << this->_num << "/" << this->_den;
	return writer.str();
}
Fraction* Fraction::parse(string s) {
	string seperator = "/";
	vector<string> v = Tokenizer::Parse(s, seperator);
	// 3/4
	Fraction * ans = new Fraction( stoi(v[0].c_str()), stoi(v[1].c_str()) );
	return ans;
}
Fraction::~Fraction(){

}
