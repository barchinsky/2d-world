#include <iostream>
#include <stdio.h>
#include <dirent.h>

int main()
{
   DIR *dir = opendir("./");
   struct dirent* ent;
   if(dir)
   {
   }
   else perror("Cannot open directory");

   while( (ent = readdir(dir)) != NULL )
   {
       std::cout<< ent->d_name << '\n';
   }
    
    return 0;
}
