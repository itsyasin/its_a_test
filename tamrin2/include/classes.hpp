#ifndef BANK
#define BANK
	
	#include<iostream>
	#include<iomanip>
	#include<new>
	using namespace std;

	/*string get_username();
	void set_username(string);
	string get_cart_number();
	void set_cart_number(string);
	void change_money();
	string get_efteth();
	void set_date(string);
	string get_phone_number();
	void set_phone_number(string);*/
	

	class USER_ID
	{
		public:
			string get_username();
			void set_username(string);
			string get_cart_number();
			void set_cart_number(string);
			void change_money();
			string get_efteth();
			void set_date(string);
			string get_phone_number();
			void set_phone_number(string);

			string username;
		private:
			
			string cart_number;
			int money = 0;
			string eftetah;
			string engheza;
			string * ip_list;
			string * trakonesh_list;
			string phone_number;
	};

	USER_ID * create_newuser(USER_ID * user , int * user_num);
	USER_ID * add_user(USER_ID * user , int * user_num);


#endif