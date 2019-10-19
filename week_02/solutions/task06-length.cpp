#include <iostream>
#include <cmath>
	
int main() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    std::cin >> x1 >> y1;    
    std::cin >> x2 >> y2;    

    if (x1 == x2) {
        std::cout << "|| Oy" << std::endl;
    }

    if (y1 == y2) {
        std::cout << "|| Ox" << std::endl;
    }

    double length = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));  

    std::cout << length << std::endl;

    return 0;
}
