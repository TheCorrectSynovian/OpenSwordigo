/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fbe60
 * Function: Caver::Proto::ObjectTemplate::~ObjectTemplate
 * Signature: undefined __thiscall ~ObjectTemplate(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::~ObjectTemplate() */

void __thiscall Caver::Proto::ObjectTemplate::~ObjectTemplate(ObjectTemplate *this)

{
  *(undefined **)this = PTR_vtable_007e5e80 + 0x10;
  if ((*(ObjectTemplate **)PTR_default_instance__007e4a98 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


