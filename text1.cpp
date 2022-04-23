#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name,password,agpassword;
	cout<<"µÇÂ¼"<<endl; 
	cout<<"Èç¹ûÃ»ÓÐÕËºÅ,ÇëÏÈ×¢²á"<<endl;
	cout<<"ÇëÊäÈëÓÃ»§Ãû/ÓÊÏä:";
	cin>>name;
	cout<<"ÇëÊäÈëÃÜÂë:";	
	cin>>password;
	cout<<"È·ÈÏÃÜÂë:";
	cin>>agpassword;

	if(password==agpassword)
	{
		cout<<"×¢²á³É¹¦"<<endl;
		cout<<"ÇëµÇÂ¼";
		string username,password1;
		cout<<"ÇëÊäÈëÓÃ»§Ãû/ÓÊÏä:";
		cin>>username;
		cout<<"ÇëÊäÈëÃÜÂë:";
		cin>>password1;
		if(username==name and password1==password)
		{
			cout<<"µÇÂ½³É¹¦";
		}
		else
		{
			cout<<"µÇÂ¼Ê§°Ü";
		} 
	}
	else
	{
		cout<<"µÚ¶þ´ÎÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë"<<endl;
	}
    return 0;
}
