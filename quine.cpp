#include <iostream>

const char q = 34;

std::string data[] = {
"	#include <iostream> ",

"	const char q = 34; ", 

"	std::string data[] = { ",
"	}; ",

"	int main() { ", 
"		for (int i=0; i<3; i++) ",
"			std::cout << data[i] << std::endl; ",
"		for (int j=0; j<17; j++) { ",
"			std::cout << q + data[j] + q; ",
"			if (j < 16) ", 
"				std::cout << ',' << std::endl; ",
"			else ", 
"				std::cout << data[3] << std::endl;", 
"		} ",  
"		for (int k=4; k<17; k++) ",
"			std::cout << data[k] << std::endl; ",
"	}"
};

int main() {
	for (int i=0; i<3; i++) 
		std::cout << data[i] << std::endl;
	for (int j=0; j<17; j++) { 
		std::cout << q + data[j] + q;
		if (j < 16)
			std::cout << ',' << std::endl;
		else
			std::cout << data[3] << std::endl;
	}
	for (int k=4; k<17; k++) 
		std::cout << data[k] << std::endl;
}