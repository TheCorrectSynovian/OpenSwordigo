/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422fd4
 * Function: Caver::Proto::OrbitControllerComponent::~OrbitControllerComponent
 * Signature: undefined __thiscall ~OrbitControllerComponent(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::~OrbitControllerComponent() */

void __thiscall
Caver::Proto::OrbitControllerComponent::~OrbitControllerComponent(OrbitControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6548 + 0x10;
  if ((*(OrbitControllerComponent **)PTR_default_instance__007e68f8 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


