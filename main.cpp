#include <iostream>
#include "s7_client.h"

using namespace std;

//http://snap7.sourceforge.net/



int main()
{
	unsigned char MyDB32[256]={}; // byte is a portable type of snap7.h

	TSnap7Client *Client = new TSnap7Client();

	int ret = Client->ConnectTo("10.85.12.153",0,0);

	if (ret==0) 
	{
		cout << "Connected" << endl;
	}
	else 
	{
		cout << "Error: " << ret << endl;
		return 0;
	}
	byte result[1000] = {};
	union {
		byte by[4];
		word w;
		float f;
	} a;
	float f1;
	byte by1;
	float fP1, fP2, fP3, fP4, fP5, fP6, fP7;
	float fG1, fG2;
	float fT1, fT2, fT3, fT4, fT5, fT6, fT7;
	float fF1, fF2, fF3;
	float fValve1, fValve2;
	byte byPump1, byPump2, byPump3;
	int iI1, iI2, iI3;




	Client->ReadArea(S7AreaDB, 2, 0, 800, S7WLByte, &result);

	memcpy(&a,&result[20], 4);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fP1 = a.f;
	cout << "fP1 = " << fP1 << endl;



	Client->ReadArea(S7AreaDB, 2, 20, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fP1 = a.f;
	cout << "fP1 = " << fP1 << endl;

	Client->ReadArea(S7AreaDB, 2, 36, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fP2 = a.f;
	cout << "fP2 = " << fP2 << endl;

	Client->ReadArea(S7AreaDB, 2, 52, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fP3 = a.f;
	cout << "fP3 = " << fP1 << endl;

	Client->ReadArea(S7AreaDB, 2, 68, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fP4 = a.f;
	cout << "fP4 = " << fP1 << endl;

	Client->ReadArea(S7AreaDB, 2, 84, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fP5 = a.f;
	cout << "fP5 = " << fP5 << endl;

	Client->ReadArea(S7AreaDB, 2, 100, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fP6 = a.f;
	cout << "fP6 = " << fP6 << endl;

	Client->ReadArea(S7AreaDB, 2, 116, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fP7 = a.f;
	cout << "fP7 = " << fP7 << endl;

	Client->ReadArea(S7AreaDB, 2, 132, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fG1 = a.f;
	cout << "fG1 = " << fG1 << endl;

	Client->ReadArea(S7AreaDB, 2, 148, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fG2 = a.f;
	cout << "fG2 = " << fG2 << endl;

	Client->ReadArea(S7AreaDB, 2, 164, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fT1 = a.f;
	cout << "fT1 = " << fT1 << endl;

	Client->ReadArea(S7AreaDB, 2, 180, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fT2 = a.f;
	cout << "fT2 = " << fT2 << endl;

	Client->ReadArea(S7AreaDB, 2, 196, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fT3 = a.f;
	cout << "fT3 = " << fT3 << endl;

	Client->ReadArea(S7AreaDB, 2, 212, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fT4 = a.f;
	cout << "fT4 = " << fT4 << endl;

	Client->ReadArea(S7AreaDB, 2, 228, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fT5 = a.f;
	cout << "fT5 = " << fT5 << endl;

	Client->ReadArea(S7AreaDB, 2, 244, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fT6 = a.f;
	cout << "fT6 = " << fT6 << endl;

	Client->ReadArea(S7AreaDB, 2, 260, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fT7 = a.f;
	cout << "fT7 = " << fT7 << endl;

	Client->ReadArea(S7AreaDB, 2, 326, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fF1 = a.f;
	cout << "fF1 = " << fF1 << endl;

	Client->ReadArea(S7AreaDB, 2, 364, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fF2 = a.f;
	cout << "fF2 = " << fF2 << endl;

	Client->ReadArea(S7AreaDB, 2, 402, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fF3 = a.f;
	cout << "fF3 = " << fF3 << endl;

	Client->ReadArea(S7AreaDB, 2, 438, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fValve1 = a.f;
	cout << "fValve1  = " << fValve1 << endl;

	Client->ReadArea(S7AreaDB, 2, 452, S7WLReal, 4, &a);
	by1 = a.by[0]; a.by[0] = a.by[3]; a.by[3] = by1;
	by1 = a.by[1]; a.by[1] = a.by[2]; a.by[2] = by1;
	fValve2 = a.f;
	cout << "fValve2  = " << fValve2 << endl;

	Client->ReadArea(S7AreaDB, 2, 322, S7WLByte, 1, &byPump1);
	Client->ReadArea(S7AreaDB, 2, 360, S7WLByte, 1, &byPump2);
	Client->ReadArea(S7AreaDB, 2, 398, S7WLByte, 1, &byPump3);

	Client->ReadArea(S7AreaDB, 2, 354, S7WLInt, 4, &iI1);
	Client->ReadArea(S7AreaDB, 2, 392, S7WLInt, 4, &iI2);
	Client->ReadArea(S7AreaDB, 2, 430, S7WLInt, 4, &iI3);

	delete Client;


	return 0;
}
