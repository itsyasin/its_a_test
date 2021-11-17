#include<iostream>
#include<iomanip>
#include<new>
#include"classes.hpp"

using namespace std;



int main()
{
	USER_ID * user = new(nothrow) USER_ID[1];
	string command;
	int user_num = 0;
	
	while(1)
	{
		cout << "Enter your command : " ;
		getline(cin,command);

		if( command.find("create") == 0)
		{
			try
			{
				user = create_newuser(user , &user_num);
				cout << "its ok" << endl;
				user_num++;
			}
			catch(bad_alloc & e)
			{
				cerr << "Error , " << e.what() << endl;
			}
			
			for (size_t i = 0; i < user_num ; i++)
			{
				cout << "username[" << i << "] : " <<user[i].username << endl;
			}
			
			
			continue;
		}
		else if( command.find("exit") == 0)
		{
			cout << "Exit" << endl;
			return 0;
		}
		
		cout << "invalid command!!!" << endl;
		
	}
}