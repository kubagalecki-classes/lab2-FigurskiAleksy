#pragma once

#include "Resource.hpp"

class ResourceManager
{
   public:

    ResourceManager()
    {
      a=new Resource;
    }//domyslny
    

    ResourceManager(const ResourceManager& l)
    {
      a= new Resource(*l.a);
    }//kopiowanie

    ResourceManager(ResourceManager&& m)
    {
      a=m.a;
      m.a = nullptr;
    }//przenoszenie

    ResourceManager& operator=(ResourceManager&& m)
    {
      if(this != &m)
      {
        delete a;
        a=m.a;
        m.a=nullptr;
      }
      return *this;
    
    }//operator przenoszenie

    ResourceManager& operator=(const ResourceManager& m)
    {
      if(this !=&m)
      {
        delete a;
        a=new Resource(*m.a);
      }
      return *this;
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
