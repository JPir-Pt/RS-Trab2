/* This Source Code File is subject to the terms of the
 * GPL-3.0 Licence. If you want to distribute this code,
 * a copy of the licence must be included
 *
 * Author: Jorge Leiria Pires
 *
 */

#include <iostream>

/**************************************************************
	This functions are mented to help students to understand
	the basics of cryptography.
	
***************************************************************/


/*--------------------------------------------------------------
	Function: CaesarEncrypt()
	Parameters:
		offst -> number of times to rotate clockwise
		source -> string to encrypt
		result -> string to decrypt
	Description: Encryption function that uses Caesar cypher.
		This kind of cypher rotates the alphabet a designated
		number of letters.
		If the displacemente is 3, 'A' becomes 'D',
		'B' becomes 'E' and so on.
		It only works with letters.
		The remaining symbols are unaffected
----------------------------------------------------------------*/
void CaesarEncrypt(int offst, std::string source, std::string &result){
	// offset must be in range 0..25
	offst %= 26;
	result ="";
	
	// convert only letters
	for(int i=0; i<source.length(); i++){
		if( source[i]>='A' && source[i]<='Z' )
			result += ((source[i]-'A' + offst ) % 26 ) + 'A';
		else if( source[i]>='a' && source[i]<='z')
			result += ((source[i]-'a' + offst ) % 26 ) + 'a';
		else result += source[i];
	}
}

/*--------------------------------------------------------------
	Function: CaesarDecrypt()
	Parameters:
		offst -> number of times to rotate counterclockwise
		source -> string to decrypt
		result -> decrypted string
	Description: Decryption function that uses Caesar cypher.
		It only works with letters.
		The remaining symbols are unaffected
----------------------------------------------------------------*/
void CaesarDecrypt(int offst, std::string source, std::string &result){
	// offset must be in range 0..25
	offst %= 26;

	// modular arithmetic
	// must add 26 to be always positive
	offst = 26 - offst;
	
	result = "";
	
	// convert only letters
	for(int i=0; i<source.length(); i++){
		if( source[i]>='A' && source[i]<='Z' )
			result += ((source[i]-'A' + offst ) % 26 ) + 'A';
		else if( source[i]>='a' && source[i]<='z')
			result += ((source[i]-'a' + offst ) % 26 ) + 'a';
		else result += source[i];
	}
}

// Test application
int main(int argc, char** argv) {
	std::string plain, cypher, decrypted;
	int key;

	std::cout << "Enter plain text: ";
	std::getline( std::cin, plain );
	
	std::cout << "Enter key (displacment): ";
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
