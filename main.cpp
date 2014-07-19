#include <stdlib.h>
#include "stdafx.h"
#include "list_test_task.h"

int _tmain(int argc, _TCHAR* argv[])
{
	system("CLS");
	List lst;
	lst.add(100);
	lst.add(200.3f);
	lst.add("ich bin");
	lst.add(888);
	lst.show_forward();
	lst.show_backward();
	lst.clean_list();
	lst.add(1);
	lst.add(222.3f);
	lst.add("i am");
	lst.add(000);
	lst.show_forward();
	lst.show_backward();
	lst.number_nodes();
	system("PAUSE");
	return 0;
}