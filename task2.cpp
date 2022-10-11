#include <iostream>

int main(){
        int n;
        std::cout << "Input n: ";
        std::cin >> n;
	int spaces = n;
        for (int i = spaces, j = 1; i > 0, j < n; --i, j++){
		for (int h = 0; h < i; ++h)
			std::cout << ' ';
		for (int h = 0; h < 2*j - 1; ++h)
			std::cout << '*';
	std::cout << std::endl;
	}
}
