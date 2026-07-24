/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416e60
 * Function: Caver::Proto::ProgramComponent::~ProgramComponent
 * Signature: undefined __thiscall ~ProgramComponent(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::~ProgramComponent() */

void __thiscall Caver::Proto::ProgramComponent::~ProgramComponent(ProgramComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7708 + 0x10;
  if ((*(ProgramComponent **)PTR_default_instance__007e56e8 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


