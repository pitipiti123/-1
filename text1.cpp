#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name,password,agpassword;
	cout<<"��¼"<<endl; 
	cout<<"���û���˺�,����ע��"<<endl;
	cout<<"�������û���/����:";
	cin>>name;
	cout<<"����������:";	
	cin>>password;
	cout<<"ȷ������:";
	cin>>agpassword;

	if(password==agpassword)
	{
		cout<<"ע��ɹ�"<<endl;
		cout<<"���¼";
		string username,password1;
		cout<<"�������û���/����:";
		cin>>username;
		cout<<"����������:";
		cin>>password1;
		if(username==name and password1==password)
		{
			cout<<"��½�ɹ�";
		}
		else
		{
			cout<<"��¼ʧ��";
		} 
	}
	else
	{
		cout<<"�ڶ��������������������"<<endl;
	}
    return 0;
}
