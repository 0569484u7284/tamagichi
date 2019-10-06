#include <iostream>
#include "ScreenWork.h"
#include "Authorization.h"

#include <string>




int main()
{
//	setlocale(LC_ALL, "ru");
	Authorization auth("test.txt");
	//auth.addNew("MaryArter", "FuckMemore");
	std::cout << auth.loginToUser("MaryArter", "Fuck");
	/*std::string temp = Crypt::XOR("MaryArgvr4e3hoiuelgtnjhiuwr4tbhgm9juertobter", "FUCKFUCfvgrnuesbgmhtjnisuervsureilgv,hjlaorueis,gvbjstivo,jbmniovrtuhnmolitrhmvortd,.bmhoisrtioc.hshtvKFUCK");
	std::cout << temp << std::endl;
	std::cout << Crypt::XOR("MaryArter",temp) << std::endl;

*/
	system("pause");
}
