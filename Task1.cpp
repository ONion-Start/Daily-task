#include <iostream>
#include <vector>
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

int main() {
    Sv<double> mas1;
    mas1.add(5.13);
    mas1.add(4.99);
    mas1.add(3.00);
    mas1.del(5.13);

    for (const auto& i : mas1.mas) {
        cout << i << " ";
    }

    return 0;
}
