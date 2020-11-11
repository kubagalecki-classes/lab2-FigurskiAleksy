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
      if(&l==b)
      return *b;
      delete a;
      a=l.a;
      l.a = nullptr;
      return *b;
    }//operator przenoszenie

    ResourceManager& operator=(const ResourceManager& l)
    {
      if(b!=&l)
      {
        *a=*(l.a);
      }
      return *b;
    }//operator kopiujacy

    double get()
    {
      return a->get();
    };//get

};
