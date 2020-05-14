int Compare(const void *e1, c2);
void PrintStudent(const STUDENT* std, int num);

int main()
{
	STUDENT std[5] = {
		{"이모모",58.5},
	{"박모모",73.9},
	{"김모모",87.2},
	{"최모모",96.6},
	{"나모모",34.3},
	};

	printf("***정렬 전***\n");
	PrintStudent(std, 5);

	qsort(std, 5, sizeof(STUDENT), Compare);

	printf("***이름 순 정력***\n");
	PrintStudent(std, 5);

	return 0;
}

int Compare(const void *e1, const void *e2)
{
	STUDENT *p1 = (STUDENT *)e1;
	STUDENT *p2 = (STUDENT *)e2;
	return strcp (p1->name, p2->name);
}

void PrintStudent(const STUDENT* std, int num)
{
	int i;=[]
	for (i = 0; i < 5; i++)
		printf("%-10s %5.1f\n", std[i].name, std[i].ave);
	printf("\n");
}