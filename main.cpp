#include <iostream>
#include "s7_client.h"

using namespace std;

//http://snap7.sourceforge.net/



int main()
{
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
		int i;
		word w;
		float f;
	} a;
	float f1;
	byte by1;
	int iRegim, iRabota, iPozhar, iAvar;
	float fP1, fP2, fP3, fP4, fP5, fP6, fP7;
	float fG1, fG2;
	float fT1, fT2, fT3, fT4, fT5, fT6, fT7;
	float fF1, fF2, fF3;
	float fValve1, fValve2;
	float fUstP;
	int iPump1, iPump2, iPump3;
	int iI1, iI2, iI3;
	int iSt1, iSt2, iSt3;
	int iStValve1, iStValve2;
	int iAvar1, iAvar2;

	Client->ReadArea(S7AreaDB, 2, 0, 600, S7WLByte, &result);

	a.by[0] = result[23]; a.by[1] = result[22]; a.by[2] = result[21]; a.by[3] = result[20];
	fP1 = a.f; cout << "fP1 = " << fP1 << endl;

	a.by[0] = result[39]; a.by[1] = result[38]; a.by[2] = result[37]; a.by[3] = result[36];
	fP2 = a.f; cout << "fP2 = " << fP2 << endl;
	a.by[0] = result[39]; a.by[1] = result[38]; a.by[2] = result[37]; a.by[3] = result[36];

	a.by[0] = result[55]; a.by[1] = result[54]; a.by[2] = result[53]; a.by[3] = result[52];
	fP3 = a.f; cout << "fP3 = " << fP3 << endl;

	a.by[0] = result[71]; a.by[1] = result[70]; a.by[2] = result[69]; a.by[3] = result[68];
	fP4 = a.f; cout << "fP4 = " << fP4 << endl;

	a.by[0] = result[87]; a.by[1] = result[86]; a.by[2] = result[85]; a.by[3] = result[84];
	fP5 = a.f; cout << "fP5 = " << fP5 << endl;

	a.by[0] = result[103]; a.by[1] = result[102]; a.by[2] = result[101]; a.by[3] = result[100];
	fP6 = a.f; cout << "fP6 = " << fP6 << endl;

	a.by[0] = result[119]; a.by[1] = result[118]; a.by[2] = result[117]; a.by[3] = result[116];
	fP7 = a.f; cout << "fP7 = " << fP7 << endl;

	a.by[0] = result[135]; a.by[1] = result[134]; a.by[2] = result[133]; a.by[3] = result[132];
	fG1 = a.f; cout << "fG1 = " << fG1 << endl;

	a.by[0] = result[151]; a.by[1] = result[150]; a.by[2] = result[149]; a.by[3] = result[148];
	fG2 = a.f; cout << "fG2 = " << fG2 << endl;

	a.by[0] = result[167]; a.by[1] = result[166]; a.by[2] = result[165]; a.by[3] = result[164];
	fT1 = a.f; cout << "fT1 = " << fT1 << endl;

	a.by[0] = result[183]; a.by[1] = result[182]; a.by[2] = result[181]; a.by[3] = result[180];
	fT2 = a.f; cout << "fT2 = " << fT2 << endl;

	a.by[0] = result[199]; a.by[1] = result[198]; a.by[2] = result[197]; a.by[3] = result[196];
	fT3 = a.f; cout << "fT3 = " << fT3 << endl;

	a.by[0] = result[215]; a.by[1] = result[214]; a.by[2] = result[213]; a.by[3] = result[212];
	fT4 = a.f; cout << "fT4 = " << fT4 << endl;

	a.by[0] = result[231]; a.by[1] = result[230]; a.by[2] = result[229]; a.by[3] = result[228];
	fT5 = a.f; cout << "fT5 = " << fT5 << endl;

	a.by[0] = result[247]; a.by[1] = result[246]; a.by[2] = result[245]; a.by[3] = result[244];
	fT6 = a.f; cout << "fT6 = " << fT6 << endl;

	a.by[0] = result[263]; a.by[1] = result[262]; a.by[2] = result[261]; a.by[3] = result[260];
	fT7 = a.f; cout << "fT7 = " << fT7 << endl;

	a.by[0] = result[329]; a.by[1] = result[328]; a.by[2] = result[327]; a.by[3] = result[326];
	fF1 = a.f; cout << "fF1 = " << fF1 << endl;

	a.by[0] = result[367]; a.by[1] = result[366]; a.by[2] = result[365]; a.by[3] = result[364];
	fF2 = a.f; cout << "fF2 = " << fF2 << endl;

	a.by[0] = result[405]; a.by[1] = result[404]; a.by[2] = result[403]; a.by[3] = result[402];
	fF3 = a.f; cout << "fF3 = " << fF3 << endl;

	iStValve1 = result[447]; cout << "iStValve1 = " << iStValve1 << endl;
	a.by[0] = result[441]; a.by[1] = result[440]; a.by[2] = result[439]; a.by[3] = result[438];
	fValve1 = a.f; cout << "fValve1 = " << fValve1 << endl;

	iStValve2 = result[461]; cout << "iStValve2 = " << iStValve2 << endl;
	a.by[0] = result[455]; a.by[1] = result[454]; a.by[2] = result[453]; a.by[3] = result[452];
	fValve2 = a.f; cout << "fValve2 = " << fValve2 << endl;

	iSt1 = result[322]; cout << "iSt1 = " << iSt1 << endl;
	iPump1 = result[337]; cout << "iPump1 = " << iPump1 << endl;
	a.by[0] = result[357]; a.by[1] = result[356]; a.by[2] = result[355]; a.by[3] = result[354];
	iI1 = a.i; cout << "iI1 = " << iI1 << endl;

	iSt2 = result[360]; cout << "iSt2 = " << iSt2 << endl;
	iPump2 = result[375]; cout << "iPump2 = " << iPump2 << endl;
	a.by[0] = result[395]; a.by[1] = result[394]; a.by[2] = result[393]; a.by[3] = result[392];
	iI2 = a.i; cout << "iI2 = " << iI2 << endl;

	iSt3 = result[398]; cout << "iSt3 = " << iSt3 << endl;
	iPump3 = result[413]; cout << "iPump3 = " << iPump3 << endl;
	a.by[0] = result[433]; a.by[1] = result[432]; a.by[2] = result[431]; a.by[3] = result[430];
	iI3 = a.i; cout << "iI3 = " << iI3 << endl;

	a.by[0] = result[509]; a.by[1] = result[508]; a.by[2] = result[507]; a.by[3] = result[506];
	fUstP = a.f; cout << "fUstP = " << fUstP << endl;

	iRegim = result[1]; cout << "iRegim = " << iRegim << endl;
	iPozhar = result[3]; cout << "iPozhar = " << iPozhar << endl;
	iRabota = result[5]; cout << "iRabota = " << iRabota << endl;
	iAvar = result[7]; cout << "iAvar = " << iAvar << endl;

	iAvar1 = result[560]; cout << "iAvar1 = " << iAvar1 << endl;
	iAvar2 = result[561]; cout << "iAvar2 = " << iAvar2 << endl;

	delete Client;


	return 0;
}
