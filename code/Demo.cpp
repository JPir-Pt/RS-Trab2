/*
 * This Source Code File is subject to the terms of the
 * GPL-3.0 Licence. If you want to distribute this code,
 * a copy of the licence must be included
 *
 * Author: Jorge Leiria Pires
 *
 ************************************************************/

// Comment next line for debugging purposes
#define NDEBUG
//
#include <iostream>
#include <cassert>

//void CaesarEncrypt(int offst, std::string source, std::string &result);
//void CaesarDecrypt(int offst, std::string source, std::string &result);
#include "Cyphers.cpp"


///
/// Demo application
///--
///
int main(int argc, char** argv) {
	std::string plain, cypher, decrypted;
	int key;
	
	std::cout << "\n----------------- encrypting --------------\n";
	std::cout << "Enter plain text: ";
	std::getline( std::cin, plain );
	
	std::cout << "Enter key (displacement): ";
	std::cin >> key;
	
	CaesarEncrypt( key, plain, cypher );
	
	std::cout << "Chypher text: " << cypher;
	
	std::cout << "\n----------------- decrypting --------------\n";
	std::cout << "Enter key: ";
	std::cin >> key;

	CaesarDecrypt( key, cypher, decrypted );
	std::cout << "Decrypted: " << decrypted;
	
	return 0;
}
