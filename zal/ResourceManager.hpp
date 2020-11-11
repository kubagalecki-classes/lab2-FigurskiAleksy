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
      a= new Resource{*l.a};
    }//kopiowanie

    ResourceManager(ResourceManager$$ m)
    {
      a=m.a;
      m.a = nullptr;
    }//przenoszenie

    ResourceManager& operator=(ResourceManager&& m)
    {
      if(b != &m)
      {
        delete a;
        a=m.a;
        m.a=nullptr;
      }
      return *b;
    
    }//operator przenoszenie

    ResourceManager& operator=(const ResourceManager& m)
    {
      if(b!=&m)
      {
        delete a;
        a=new Resource{*m.a};
      }
      return *b;
    }//operator kopiujacy

    

    ~ResourceManager()
    {
      delete a;
    }//destruktor
    
    double get()
    {
      return a->get();
    }//get

  private:
  Resource* a = nullptr;
};
