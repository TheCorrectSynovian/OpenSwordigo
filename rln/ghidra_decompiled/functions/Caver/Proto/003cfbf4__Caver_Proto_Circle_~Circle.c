/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cfbf4
 * Function: Caver::Proto::Circle::~Circle
 * Signature: undefined __thiscall ~Circle(Circle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::~Circle() */

void __thiscall Caver::Proto::Circle::~Circle(Circle *this)

{
  *(undefined **)this = PTR_vtable_007e6be0 + 0x10;
  if ((*(Circle **)PTR_default_instance__007e76b0 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


