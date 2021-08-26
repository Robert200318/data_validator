#include <iostream>
#include <regex>
#include <string>


std::string gmail()
{
    std::cout<<"Please enter your gmail"<<std::endl;

    std::string gmail;

    std::regex find (".*@gmail.com");

    std::cin>>gmail;

    std::string tmp1 = "No : Does not have";

    if(std::regex_match(gmail,find))
    {
        tmp1 = "Yes: It has" ;
        return tmp1;
    }

    return tmp1;
}

std::string url() 
{
    std::cout<<"Please enter your Website URL"<<std::endl;
    std::string url;
    std::cin>>url;
    std::regex find ("https://www\\.(.*).com");
    std::string tmp = "No : Does not have";
    if(std::regex_match(url,find))
    {
        tmp = "Yes: It has" ;
        return tmp;
    }
    return tmp;
}

std::string mobile_phone_number()
{   
    std::cout<<"Please enter your Mobile Phone Number"<<
    "\n+374********"<<std::endl;
    std::string phone_number;
    std::cout<<"+374";
    std::cin>>phone_number;
    std::cout<<std::endl;
    std::string tmp = "No : Does not have";
    if(phone_number.length() != 8)
    {
        return tmp;
    }
    for(int i = 0 ; i < phone_number.length() ; ++i)
    {
        if(!(phone_number[i]>=48 && phone_number[i]<=(char)57))
        {
            return tmp;
        }
    }
    tmp = "Yes: It has";
    return tmp;
}

std::string data()
{
    std::cout<<"Please enter your Mobile Phone Number"<<
    "\n** ** ****"<<std::endl;
    int day;
    int mounth;
    int year;
    int this_year = 2021;
    std::cin>>day>>mounth>>year;
    std::string tmp = "No : Does not have";

    if( day <= 31 && mounth <= 11 && year < this_year)
    {
        tmp = "Yes: It has";
    }
    return tmp;

}

 void number()
 {
        std::cout<<"Please enter Number";
        try {
            int a ;
            std::cin>>a;
            if(a)
            {
                std::cout<<"Yes: It has"<<std::endl;
            }
            else {
                 throw (a);
            }
        }
        catch (int a) 
        {
            std::cout << "No : Does not have"<<std::endl;
        }
}
std::string credit_card_number()
{
    std::cout<<"Please enter your Mobile Phone Number"<<
    "\n**** **** **** ****"<<std::endl;
    std::string credit_card;
    std::cin>> credit_card;
    std::string tmp = "No : Does not have";
    for(int i = 0; i <= credit_card.length();++i)
    {
        if( credit_card[i]>=(char)48 && credit_card[i]<=(char)57 || credit_card[i] == '.' )
        {
            tmp = "Yes: It has";
            return tmp;
        }
    }
    return tmp;
}


int main()
{

    std::cout<<"What kind of type do you want to analize"<<std::endl; 
    std::cout<<"1) Email "<<
    "\n2) Website URL "<<
    "\n3) Date"<<
    "\n4) Number "<<
    "\n5) Credit Card Number "<<
    "\n6) Mobile Phone Number"<<std::endl; 
    
    int if_number_is;
    std::cin>>if_number_is;
    if(if_number_is == 1 )
    {
        std::cout<< gmail() << std::endl;
    }

    else if(if_number_is == 2)
    {
        std::cout<< url() << std::endl; 
    }

    else if(if_number_is == 3)
    {
        std::cout<< data() << std::endl;
    }

    else if(if_number_is == 4)
    {
        number();
    }

    else if(if_number_is == 5)
    {
        std::cout<<credit_card_number()<<std::endl;
    }
    
    else if(if_number_is == 6)
    {
        std::cout<< mobile_phone_number() << std::endl; 
    }
    
    return 0;
}
