#include <windows.h>
#include <iostream>
#include <sapi.h>

#include "mainwnd.h"


using namespace std;
using namespace ���С����;

[STAThreadAttribute]
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Application::EnableVisualStyles();  //���ÿ��ӻ�����
	Application::Run(gcnew mainwnd()); //�����û�����ģ��

}
