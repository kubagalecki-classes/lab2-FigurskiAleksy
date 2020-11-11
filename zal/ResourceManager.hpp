#pragma once

#include "Resource.hpp"

class ResourceManager
{
   public:

    Resource* a;

    ResourceManager()
    {
      a=new Resource;
    };
};
