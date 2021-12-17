//
//  main.cpp
//  Url
//
//  Created by Kerima Hussen on 12/16/21.
//
#include <iostream>
#include "Url.h"


int main()
{
        URL u("http://example.com/");
        std::cout<<"Scheme: "<<u.getScheme()<<std::endl;
        std::cout<<"Authority: "<<u.getAuthority()<<std::endl;
        std::cout<<"Path: "<<u.getPath()<<std::endl;
        std::cout<<"Complete URL: "<<u.getCompleteURL()<<std::endl;
        
        return 0;
    return 0;
}






