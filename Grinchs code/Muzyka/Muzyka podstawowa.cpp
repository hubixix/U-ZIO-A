#include "pch.h"
#include <iostream>
#include <windows.h>

int main()
{
	int n;
	n = 0;
    std::cout <<R"(
    ____          _              _                   
   /  ___\  _ _  (_)_ __    ___ | |___    
   | | __  | '_\ | | '_ \  / __||  __ \   
   | ||_ | | |   | | | | || (__ | | | |
   \_____/ |_|   |_|_| |_| \___||_| |_|
)";
	do {
		Beep(493, 400);
		Beep(493, 400);
		Beep(740, 400);
		Beep(740, 400);
		Beep(659, 400);
		Beep(587, 400);
		Beep(554, 400);
		Beep(493, 400);
		Beep(440, 400);
		Beep(493, 400);
		Beep(554, 400);
		Beep(587, 400);
		Beep(659, 400);
		Beep(740, 675);
		Beep(123, 400);
		Beep(123, 400);
		Beep(185, 400);
		Beep(185, 400);
		Beep(164, 400);
		Beep(146, 400);
		Beep(138, 400);
		Beep(123, 400);
		Beep(110, 400);
		Beep(123, 400);
		Beep(138, 400);
		Beep(146, 400);
		Beep(164, 400);
		Beep(185, 675);
	} while (n == 0);



}
