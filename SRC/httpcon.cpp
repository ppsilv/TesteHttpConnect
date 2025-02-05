#include <iostream>
#include <string>
#include <sstream>

#include "Exception.hpp"
#include "HTTPSimple.hpp"


	int main()
	{
		HTTPSimple http;
		std::string page;
		try
		{
			page = http.GET("http://www.speedtest.net/speedtest-config.php");
			page = http.GET("http://ooklavptelecom.alcloud.com.br:8080");
			//page = http.GET("ooklavptelecom.alcloud.com.br");
            
			if (http.getCode() != 200)
			{
				//TODO: exception NOT OK
			}
            std::cout << "Paulo o fodão atacou de novo" << std::endl;
            std::cout << http.getCode()  << std::endl;
		}
		catch (Exception &e)
		{
            std::cout << "\n***********ERRO***********ERRO****************\n";
			std::cout << "Não conectou " << e.what() << std::endl;
		}
        return(0);
	}
