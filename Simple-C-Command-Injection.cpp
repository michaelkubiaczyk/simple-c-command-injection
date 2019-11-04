//============================================================================
// Name        : Simple-C-Command-Injection.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "runner.h"
using namespace std;

int main(int argc, char *argv[] ) {
	cout << "Simple command runner" << endl;
	if ( argc == 0 ) {
		cout << "No command received" << endl;
		return 0;
	}
	cout << "Received command: " << argv[0] << endl;

	Runner r;
	r.runCommand( argv[0] );

	return 0;
}
