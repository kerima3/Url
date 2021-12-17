//
//  Url.cpp
//  Url
//
//  Created by Kerima Hussen on 12/16/21.
//

#include <stdio.h>
#include "Url.h"

URL::URL(std::string url) {
                        int firstColonIndex = url.find(":");
                        scheme = url.substr(0, firstColonIndex);
                        std::string restUrl = url.substr(firstColonIndex+3, url.length());
                        int thirdSlashIndex = restUrl.find("/");
                        authority = url.substr(firstColonIndex+3, thirdSlashIndex);
                        path = restUrl.substr(thirdSlashIndex, url.length());
                }
std::string URL::getScheme() {
                        return scheme;
                }
std::string URL::getAuthority() {
                        return authority;
                }
std::string URL::getPath() {
                        return path;
                }
std::string URL::getCompleteURL() {
                        return scheme+"://"+authority+path;
                }
