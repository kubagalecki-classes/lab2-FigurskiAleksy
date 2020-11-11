#pragma once

#include "Resource.hpp"

class ResourceManager
{
   public:

    Resource* a;

    ResourceManager()
    {
      a=new Resource;
    };//domyslny
    

    ResourceManager(const ResourceManager& l)
    {
      a= new Resource(*l.a));
    }//kopiowanie

    ResourceManager(ResourceManager$$ l):a(l.a)
    {
      l.a=nullptr;
    }//przenoszenie

    ResourceManager& operator=(ResourceManager&& l)
    {
      i
    }

};
