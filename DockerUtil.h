//
// Created by Thomas Kleist on 12/07/2021.
//

#ifndef DS_DOCKERUTIL_H
#define DS_DOCKERUTIL_H
#include "strings.h"

class DockerUtil {
public:
    bool Build(char tag, char tag_version);
    bool DeleteAllImages();
    DockerUtil();

};


#endif //DS_DOCKERUTIL_H
