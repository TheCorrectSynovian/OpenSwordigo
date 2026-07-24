/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043506c
 * Function: Caver::Proto::FireBreathComponent::~FireBreathComponent
 * Signature: undefined __thiscall ~FireBreathComponent(FireBreathComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::~FireBreathComponent() */

void __thiscall Caver::Proto::FireBreathComponent::~FireBreathComponent(FireBreathComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6388 + 0x10;
  if ((*(FireBreathComponent **)PTR_default_instance__007e77e8 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


