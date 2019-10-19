#include <iostream>
	
int main() {
    float distance = 0;
    float shipSpeed = 0;
    float waterSpeed = 0;

    std::cin >> distance >> shipSpeed >> waterSpeed;    
    
    if (shipSpeed != waterSpeed) {
        float time = distance / (shipSpeed + waterSpeed);
        std::cout << time << std::endl;
    } else {
        std::cout << "Never" << std::endl;    
    }

    return 0;
}
