#pragma warning(disable:4996)
#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"

enum { INPUT = 1, SHOWALL, SEARCH, DELETE, CHANGE, QUIT };

int main(void)
{
	int inputMenr = 0;
	
	LoadDataFromFile();

	while (1)
	{
		ShowMenu();
		fputs("선택하세요 : ", stdout);
		scanf("%d", &inputMenr);
		fflush(stdin);
		switch (inputMenr)
		{
		case INPUT: InputPhoneData();
			break;
		case SHOWALL: ShowAllData();
			break;
		case SEARCH: SearchPhoneData();
			break;
		case DELETE:DeletePhoneData();
			break;
		case CHANGE: ChangePhoneData();
			break;
		default:
			break;
		}
		if (inputMenr == QUIT) {
			// StoreDataToFile();
			puts("이용해 주셔서 감사합니다.");
			break;
		}
	}
	return 0;
}