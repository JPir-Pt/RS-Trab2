/*
 * This Source Code File is subject to the terms of the
 * GPL-3.0 Licence. If you want to distribute this code,
 * a copy of the licence must be included
 *
 * Author: Jorge Leiria Pires
 *
 ************************************************************/

// Comment next line for debugging purposes
//#define NDEBUG
//
#include <iostream>
#include <cassert>

//void CaesarEncrypt(int offst, std::string source, std::string &result);
//void CaesarDecrypt(int offst, std::string source, std::string &result);
#include "..\code\Cyphers.cpp"


///
/// Test application
///--
///
int main(int argc, char** argv) {
	std::string plain, cypher;
	int key;
	int op;

	plain = "The quick brown fox jumps over the lazy dog!!!";
	
	std::cout << "Choose test to run:\n"
			  << "1 - Normal encryption (key = 3)\n"
			  << "2 - Normal encryption (key = 333)\n"
			  << "3 - Invalid key (-3) to encript\n"
			  << "4 - Invalid key (-3) to decrypt\n";
	std::cin >> op;
	
	switch(op){
		case 1:{
			key = 3;
			break;
		}
		case 2:{
			key = 333;
			break;
		}
		case 3:{ // encrypt function test fails
			key = -3;
			break;
		}
		case 4:{ // decrypt function test fails
			key = -3;
			break;
		}
	}
	std::cout << "\nEncrypting...\n";
	std::cout << plain << std::endl;
	CaesarEncrypt( ( (op==4)? -key : key ), plain, cypher );

	std::cout << "\nEncrypted string...\n";
	std::cout << cypher << std::endl;

	std::cout << "\nDecrypting...\n";
	CaesarDecrypt( key, cypher, plain );

	std::cout << "\nDecrypted string...\n";
	std::cout << plain << std::endl;
	
	std::cout << "\nTest finished\n";
	return 0;
}
