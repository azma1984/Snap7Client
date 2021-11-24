#include <iostream>
#include "s7_client.h"

using namespace std;

//http://snap7.sourceforge.net/



int main()
{
	unsigned char MyDB32[256]={}; // byte is a portable type of snap7.h

	TSnap7Client *Client = new TSnap7Client();

	int ret = Client->ConnectTo("10.85.12.153",0,2);

	if (ret==0) 
	{
		cout << "Connected" << endl;
	}
	else 
	{
		cout << "Error: " << ret << endl;
		return 0;
	}


	Client->DBRead(32, 0, 16, &MyDB32);

	delete Client;


	return 0;
}
