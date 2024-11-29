#include <vector>
#include <iostream>
using namespace std;
template <typename C>
class Sv {
public:
    vector<C> mas;

    void add(C temp) {
        for (int i = 0; i < mas.size(); ++i) {
            if (temp == mas[i]) {
                return;
            }
        }
        mas.push_back(temp);
    }

    void del(C temp) {
        for (auto it = mas.begin(); it != mas.end(); ++it) {
            if (temp == *it) {
                mas.erase(it);
                return;
            }
        }
    }
};
