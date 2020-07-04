class account{
	protected:
	int acno;
	char name[50];
	int deposit;
	char type;
		
	public:
		void create_account(); 
        void show_account(); 
        void modify();  
        void dep(int);  
        void draw(int); 
	    int dispacnt();
	    char dispname;
	    int dispbal();
	    void accountinfo();
	    void list();
};


class user{
	protected:
	char name[50];
	int ch;
	int pin;
	public:	
		void intro();
		
};

class accountholder : public user{
		public:
		void login(account b);
		void menu(account a1);
	
};


class banker : public accountholder {
		public:
	     int loginb();
		void menub();
	
};


class run : public banker,account{
	   int acn;
	   
	   public:
	   void runn();
};

