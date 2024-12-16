#include<iostream>
#include<vector>
void swap(int &a,int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}
void magic_sort(std::vector<int>& temp) {
	for(int i=0;i<temp.size();i++){
		for (int j = 0; j < temp.size()-1;j++) {
			if (temp[j]>temp[j+1]) {
				swap(temp[j],temp[j+1]);
				for (int& el : temp) {
					std::cout << el << " ";
				}
				std::cout << "\n";
			}
		}
	}
	
}
void counter_magic_sort(std::vector<int>& temp) {
	for (int i = 0; i < temp.size(); i++) {
		for (int j = 0; j < temp.size() - 1; j++) {
			if (temp[j] < temp[j + 1]) {
				swap(temp[j], temp[j + 1]);
				for (int& el : temp) {
					std::cout << el << " ";
				}
				std::cout << "\n";
			}
		}
	}

}
int main() {

	int num, el;
	std::cout << "Enter number of days\n";
	std::cin >> num;
	std::vector<int>days(num);
	for (int& el : days) {
		std::cin >> el;
	}
	magic_sort(days);
	std::cout << "End...";
	std::cout << "Counter sort\n";
	counter_magic_sort(days);
}