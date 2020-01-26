#include"Tokenizer.h"

int main() {
	
	string line = "41,817,9371,157";
	string seperator = ",";

	vector<string> tokens = Tokenizer::Parse(line, seperator);
	
	vector<int> numbers;

	for (auto i = 0; i < tokens.size(); i++) {
		auto num = stoi(tokens[i]);
		numbers.push_back(num);
	}
	for (auto i = 0; i < tokens.size(); i++)
		cout << numbers[i] << " ";
	system("pause");
	return 0;
}
