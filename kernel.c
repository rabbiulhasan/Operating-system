#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/substr.h"
kmain()
{
       clearScreen();
	   
       print("Welcome to my operating system!\nUser login\n");
	   string username = "cse";
	   string password = "123";
	   
	   string inp = 0;
	   while (1) {
		   uint8 uOK = 0, pOK = 0;
		   
		   print("username: ");
		   inp = readStr();
		   if (strEql(inp, username)) uOK = 1;
		   
		   print("password: ");
		   inp = readStr();
		   if (strEql(inp, password)) pOK = 1;
		   
		   if (uOK && pOK) {
			   print("Login Done!\n");
			   break;
		   }
		   print("Wrong info. Try again\n");
	   }
	   
       while (1)
       {
			print("cse> ");
			inp = readStr();
			if(strEql(inp,"cmd"))
			{
					print("You are allready in cmd\n");
			}
			else if(strEql(inp,"clear"))
			{
					clearScreen();
			}
			else if(strEql(inp,"substr"))
			{
				print("Enter string: ");
				inp = readStr();
				screen_substr(inp);
			}
			else if(strEql(inp,"shutdown"))
			{
					print("Turning off my OS!\n");
					break;
			}
			else
			{
					print("Bad command!\n");
			}
       }
}
