#include <iostream>
//using namespace std;
/**************************************************************
	This functions are mented to help students to understand
	the basics of cryptography.
	
***************************************************************/

/*--------------------------------------------------------------
	Function: CaesarEncrypt()
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
	// be shure result has space for the string
	result.resize( source.length() );
	
	// convert only letters
	for(int i=0; i<source.length(); i++){
		if( source[i]>='A' && source[i]<='Z' )
			result[i] = ((source[i]-'A' + offst ) % 26 ) + 'A';
		else if( source[i]>='a' && source[i]<='z')
			result[i] = ((source[i]-'a' + offst ) % 26 ) + 'a';
		else result[i] = source[i];
	}
	offst +=0; //testes
}

int main(int argc, char** argv) {
	std::string plain, cypher;
	int key;
	
	std::cout << "Enter plain text: ";
	std::getline( std::cin, plain );
	
	std::cout << "Enter key (displacment): ";
	std::cin >> key;
	
	CaesarEncrypt( key, plain, cypher );
	
	std::cout << "Chypher text: " << cypher;
	
	return 0;
}
