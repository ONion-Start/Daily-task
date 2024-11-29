#include <iostream>
#include <vector>
#include  "Sv.h"
using namespace std;



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