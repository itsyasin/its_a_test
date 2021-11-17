#include"classes.hpp"


string USER_ID::get_username()
{
	string name;
	
	cout << "please enter username : " ;
	getline(cin , name);

	return name;
}

void USER_ID::set_username(string name)
{
	if(isdigit(name[0]) == isdigit('1') )
	{
		throw(invalid_argument("begining of name cant be a number!!!") );
	} 
	for(int i = 0 ; i < name.length() ; i++)
	{
		cout << "name[" << i << "] : " << isalnum(name[i]) << endl;
		if(isalnum(name[i]) != isalnum('a') )
		{
			throw(invalid_argument("a username has to be make by alphabet and number"));
		}
	}

	username = name;

	cout << "username : " << username << endl;
}



USER_ID * create_newuser(USER_ID * user , int * user_num)
{
	string name;
	/*string cart;
	string date;
	string number;*/

	if (user_num > 0)
	{
		user = add_user(user , user_num);
	}
	
	
	do
	{
		name = user[(*user_num)].get_username();
		try
		{
			user[(*user_num)].set_username(name);
			break;
		}
		catch(invalid_argument &p)
		{
			cout << "Error , " << p.what() << endl;
		}

	}while(1);

	return user;
}

 
USER_ID * add_user(USER_ID * user , int * user_num)
{
	USER_ID * user2 = new(nothrow) USER_ID[ *(user_num) + 2 ];
	if (!user2)
	{
		cerr << "Error in memmory allocation!!!" << endl;
		return user;
	}
	

	for (size_t i = 0; i <= *user_num ; i++)
	{
		user2[i] = user[i];
	}


	delete[] user;
	
	return user2;
}