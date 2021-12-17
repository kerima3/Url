//
//  Url.h
//  Url
//
//  Created by Kerima Hussen on 12/16/21.
//

#include <string>
class URL {
        private:
                std::string scheme;
                std::string authority;
                std::string path;
                
        public:
                URL(std::string url);
                
                std::string getScheme();
               
                
                std::string getAuthority();
                
                std::string getPath();
                
                std::string getCompleteURL() ;
};
