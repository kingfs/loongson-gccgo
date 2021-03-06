
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_ForwardRequestHelper__
#define __org_omg_PortableInterceptor_ForwardRequestHelper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableInterceptor
      {
          class ForwardRequest;
          class ForwardRequestHelper;
      }
    }
  }
}

class org::omg::PortableInterceptor::ForwardRequestHelper : public ::java::lang::Object
{

public:
  ForwardRequestHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::PortableInterceptor::ForwardRequest *);
  static ::org::omg::PortableInterceptor::ForwardRequest * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::PortableInterceptor::ForwardRequest * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::PortableInterceptor::ForwardRequest *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableInterceptor_ForwardRequestHelper__
