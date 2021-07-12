//
// Created by Thomas Kleist on 12/07/2021.
//

#include "DockerUtil.h"

#include <strings.h>
#include <iostream>
DockerUtil::DockerUtil() {

}

bool DockerUtil::Build(char tag, char tag_version) {
  std::string cmd;
  cmd.append("RUN Docker build ");
  cmd.append(" -t ");
  cmd.append(" tag");
  cmd.append(":");
  cmd.append(tag_version);

    system(cmd)
}

bool DockerUtil::DeleteAllImages() {

}