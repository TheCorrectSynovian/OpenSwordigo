/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040cd94
 * Function: Caver::Proto::DamageComponent::~DamageComponent
 * Signature: undefined __thiscall ~DamageComponent(DamageComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::~DamageComponent() */

void __thiscall Caver::Proto::DamageComponent::~DamageComponent(DamageComponent *this)

{
  *(undefined **)this = PTR_vtable_007e7a18 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


