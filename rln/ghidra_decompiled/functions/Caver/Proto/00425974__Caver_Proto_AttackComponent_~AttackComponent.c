/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00425974
 * Function: Caver::Proto::AttackComponent::~AttackComponent
 * Signature: undefined __thiscall ~AttackComponent(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::~AttackComponent() */

void __thiscall Caver::Proto::AttackComponent::~AttackComponent(AttackComponent *this)

{
  *(undefined **)this = PTR_vtable_007e66a0 + 0x10;
  if ((*(AttackComponent **)PTR_default_instance__007e7ad0 != this) &&
     (*(long **)(this + 0x20) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


