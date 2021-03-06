
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_GIOP_CodeSetServiceContext__
#define __gnu_CORBA_GIOP_CodeSetServiceContext__

#pragma interface

#include <gnu/CORBA/GIOP/ServiceContext.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace CDR
      {
          class AbstractCdrInput;
          class AbstractCdrOutput;
      }
      namespace GIOP
      {
          class CodeSetServiceContext;
          class ServiceContext;
      }
        class IOR$CodeSets_profile;
        class IOR$CodeSets_profile$CodeSet_component;
    }
  }
}

class gnu::CORBA::GIOP::CodeSetServiceContext : public ::gnu::CORBA::GIOP::ServiceContext
{

public:
  CodeSetServiceContext();
  static ::gnu::CORBA::GIOP::CodeSetServiceContext * find(JArray< ::gnu::CORBA::GIOP::ServiceContext * > *);
  static ::gnu::CORBA::GIOP::CodeSetServiceContext * negotiate(::gnu::CORBA::IOR$CodeSets_profile *);
  virtual void readContext(::gnu::CORBA::CDR::AbstractCdrInput *);
  virtual ::java::lang::String * toString();
  virtual void write(::gnu::CORBA::CDR::AbstractCdrOutput *);
public: // actually protected
  static jint negotiate(::gnu::CORBA::IOR$CodeSets_profile$CodeSet_component *, jint, jint);
private:
  ::java::lang::String * name(jint);
public:
  static const jint ID = 1;
  static ::gnu::CORBA::GIOP::CodeSetServiceContext * STANDARD;
  jint __attribute__((aligned(__alignof__( ::gnu::CORBA::GIOP::ServiceContext)))) char_data;
  jint wide_char_data;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_GIOP_CodeSetServiceContext__
