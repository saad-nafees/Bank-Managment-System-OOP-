#include <iostream>
#include"Header.h"

using namespace std;
void account ::  list(){
	cout  << acno << "\t" << name << "\t" << type << "\t" << deposit << endl;
	
	
}

void account ::  accountinfo(){
	cout << "\n\n\tYou account number: " << acno;
	cout << "\n\n\tAccount holder`s name: " << name;
	cout << "\n\n\tAccount type: " << type;
}

int account ::  dispbal(){
	return deposit;
}


int account :: dispacnt(){
	return acno;
}

void account ::  create_account(){
	cout << "\n\n\tCreating a new account.........\n\n"
	<< "\n\n\tEnter account number: ";
	cin >> acno;
	cout << "\n\n\tEnter your name: ";
	cin >> name;
	lbl:
	cout << "\n\n\tEnter you account type Current(c) / Savings(s): ";
	cin  >> type;
	if(type == 'c'){     
		cout << "\n\n\tEnter The amount to deposit(>500): ";
	    cin >> deposit;
	    if(deposit < 500){
	    	cout << "\n\n\tAmount is less than 500!!!!\n\n";
	    	goto lbl;
		}
		    
	}
	else if (type == 's'){
	   cout << "\n\n\tEnter The amount to deposit(>1000): ";
	   cin >> deposit;
	   if(deposit < 1000){
	    	cout << "\n\n\tAmount is less than 1000!!!!\n\n";
	    	goto lbl;
		}
	}
	else{
	    cout << "\n\n\tInvalid type!!!!!!\n\n";
	     cout  << "\n\n\tEnter Again....\n\n";
	    goto lbl;
	   
	}
	
	cout << "\n\n\tAccount created......\n";
	
}

 
void account::show_account()
{
    cout<<"\n\n\tAccount No. : "<<acno;
    cout<<"\n\n\tAccount Holder Name : ";
    cout<<name;
    cout<<"\n\n\tType of Account : "<<type;
    cout<<"\n\n\tBalance amount : "<<deposit;
}
 
 
void account::modify()
{
    cout<<"\n\n\tAccount No. : "<<acno;
    cout<<"\n\n\tModify Account Holder Name : ";
    cin >> name;
    lbl:
	cout<<"\n\n\tModify Type of Account : ";
    cin>>type;
    	if(type == 'c'){     
		cout << "\n\n\tEnter The amount to deposit(>500): ";
	    cin >> deposit;
	    if(deposit < 500){
	    	cout << "\n\n\tAmount is less than 500!!!!\n\n";
	    	goto lbl;
		}
		    
	}
	else if (type == 's'){
	   cout << "\n\n\tEnter The amount to deposit(>1000): ";
	   cin >> deposit;
	   if(deposit < 1000){
	    	cout << "\n\n\tAmount is less than 1000!!!!\n\n";
	    	goto lbl;
		}
	}
	else{
	    cout << "\n\n\tInvalid type!!!!!!\n\n";
	     cout  << "\n\n\tEnter Again....\n\n";
	    goto lbl;
	   
	}
}
 
 
void account::dep(int x)
{
    deposit+=x;
}
 
void account::draw(int x)
{
    deposit-=x;
}	

void user :: intro()
{
    cout<<"\n\n\n\t\t  BANK";
    cout<<"\n\n\t\tMANAGEMENT";
    cout<<"\n\n\t\t  SYSTEM";
    cout<<"\n\n\n\nMADE BY: Saad Nafees and M.Hasnat Nasir";
    cout<<"\n\n\t\tCIIT WAH";
    cin.get();
}
void accountholder :: menu(account a1){
	 int num;
	 char c;
	 do
    {
        system("cls");
        cout<<"\n\n\n\tACCOUNT HOLDER MENU";
        cout<<"\n\n\t01. DEPOSIT AMOUNT";
        cout<<"\n\n\t02. WITHDRAW AMOUNT";
        cout<<"\n\n\t03. BALANCE ENQUIRY";
        cout<<"\n\n\t04. MODIFY AN ACCOUNT";
        cout<<"\n\n\t04. MODIFY AN ACCOUNT";
        cout<<"\n\n\t05. SHOW INFO OF ACCOUNT";
        cout<<"\n\n\t06. EXIT";
        cout<<"\n\n\tSelect Your Option (1-6) ";
        cin>>c;
         switch(c)
        {
        case '1':
            cout<<"\n\n\tYour Account No. : " << a1.dispacnt();
            cout << "\n\n\tEnter the amount you want to deposit: ";
            cin >> num;
			a1.dep(num);
			cin.ignore();
            cin.get();
            break;
        case '2':
            cout<<"\n\n\tYour Account No. : " << a1.dispacnt();     
            cout << "\n\n\tEnter the amount you want to withdraw: ";
            cin >> num;
            a1.draw(num);
            cin.ignore();
            cin.get();
            break;
        case '3':
        	cout<<"\n\n\tYour Account No. : " << a1.dispacnt();
        	cout << "\n\n\tYour Balance is  : " << a1.dispbal();
        	cin.ignore();
            cin.get();
		    break;
        case '4':
            cout<<"\n\n\tYour account No. : " << a1.dispacnt();
            a1.modify();
            cin.ignore();
            cin.get();
            break; 
        case '5':
        	a1.accountinfo();
            cin.ignore();
            cin.get();
			break;
       
	     case '6':
            cout<<"\n\n\tThanks for using bank managemnt system";
            cin.ignore();
            cin.get();
			break;
         default :
		 cout<<"\n\n\tInvalid operation";
         cin.ignore();
          cin.get();   
        }
        
		system("cls");
        
    }while(c!='6');
	return ;
	}
	
    void accountholder ::  login(account b){
		int pin1;
		cout << "\n\n\tEnter Your PIN: ";
		cin >> pin1;
		pin =  1234;
		if(pin1 == pin){
		   menu(b);
		
	}
}
	
	void banker ::  menub (){

       	system ("cls");
      cout << "\n\n\tBANKER`S MENU"
      << "\n\n\t01. LIST OF ALL ACCOUNT HOLDERS."
      << "\n\n\t02. ENTER ACCOUNT NUMBER TO HANDLE ACCOUNTS."
      << "\n\n\t03. EXIT."
      <<"\n\n\tSelect Your Option (1-3) ";
      
	  }
	
	int banker :: loginb(){
		int id, pas;
		cout << "\n\n\tEnter ID: ";
		cin>> id;
		cout << "\n\n\tEnter PIN: ";
		cin>> pas;
		if(id == 1236 && pas == 1218){
		return 2;	
		}
		else
		 return 3;
		
		
	}


void run :: runn(){
	 intro();
	 int i=0,j;
	 char c;
	 account a[100];
	 do{
	 system("cls");
	 cout << "\n\n\tMain Menu"
	 <<"\n\n\t01. User console."
	 <<"\n\n\t02. Banker`s Console."
	 <<"\n\n\t03. New Account."
	 <<"\n\n\t04. EXIT"
     <<"\n\n\tSelect Your Option (1-4) ";
	 cin >> c;
     switch(c){
     	case '1':
     		cout  << "\n\n\tEnter Account Number: ";
     		cin >> acn;
     		for(j= 0 ; j<=i ; j++){
     			int h = a[j].dispacnt();
     			if( h == acn){
     				 login(a[j]);
       
					 break;
				 }
			 }
			 break;
		
	   case'2':
	   	    int k;
			int cc;
			k= loginb();
		    lbl:
	   	    if (k==2){
	   	     menub();
			 cin >> cc;
             
			 if(cc==1){	 
      		cout << "Acc no\tNames\ttype\tBalance\n";
      		for(int n=0 ; n<i ; n++ ){
				  a[n].list();
			  }
      	    cin.ignore();
            cin.get();
			
		  }
      		else if(cc==2)
      		{
      		cout  << "\n\n\tEnter Account Number to check it: ";
     		cin >> acn;
     		cout << "\n\n\tPIN to access is 1234.";
     		for(j= 0 ; j<=i ; j++){
     			int h = a[j].dispacnt();
     			if( h == acn){
     				 login(a[j]);
       
					 break;
				 }
			 
			 }
			 break;
			}
      	 else if(cc==3){
      	 	
		  	cout<<"\n\n\tThanks for using bank managemnt system";
            cin.ignore();
            cin.get();
			break;
            
      }	 	
		goto lbl;	 }
	
		break;
			 
			 
	   case '3':
	     a[i].create_account();
		 i++;
	     break;	 
	    
		case '4':
      		cout<<"\n\n\tThanks for using bank managemnt system";
            cin.ignore();
            cin.get();
            break;
      
	   
	   default :
	   	cout << "\n\n\tInvalid option!!!!!";}
}while(c != '4');
  return;
}
