/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418f90
 * Function: Caver::Proto::BreakableObjectComponent::~BreakableObjectComponent
 * Signature: undefined __thiscall ~BreakableObjectComponent(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::~BreakableObjectComponent() */

void __thiscall
Caver::Proto::BreakableObjectComponent::~BreakableObjectComponent(BreakableObjectComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7a60 + 0x10;
  if ((*(BreakableObjectComponent **)PTR_default_instance__007e6f48 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


