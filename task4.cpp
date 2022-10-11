#include <iostream>

int main(){
        int n;
        std::cout << "Input n: ";
        std::cin >> n;
        int spaces = n;
        for (int i = spaces, j = 1; i > 0, j < n; --i, j++){
	for (int k = 0; k < n; ++k){
                for (int h = 0; h < i-2; ++h)
                        std::cout << ' ';
                for (int h = 0; h < 2*j - 1; ++h)
                        std::cout << '*';
		for (int h = 0; h < i-2; ++h)
                        std::cout << ' ';
	}
        std::cout << std::endl;
	}
        for (int i = 2, j = n-1; i < spaces-1, j > 0; ++i, --j){
	for (int k = 0; k < n; ++k){
                for (int h = i+1; h > 2; --h)
                        std::cout << ' ';
                for (int h = 2*j-2; h > 1; --h)
                        std::cout << '*';
		for (int h = i+1; h > 2; --h)
                        std::cout << ' ';
	}
        std::cout << std::endl;
	}

}

