#include <windows.h>
#include <iostream>
#include <sapi.h>

#include "mainwnd.h"


using namespace std;
using namespace 表白小程序;

[STAThreadAttribute]
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Application::EnableVisualStyles();  //启用可视化界面
	Application::Run(gcnew mainwnd()); //启动用户登入模块

}
