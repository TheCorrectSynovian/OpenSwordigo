/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423730
 * Function: Caver::Proto::ParticleFieldComponent::~ParticleFieldComponent
 * Signature: undefined __thiscall ~ParticleFieldComponent(ParticleFieldComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleFieldComponent::~ParticleFieldComponent() */

void __thiscall
Caver::Proto::ParticleFieldComponent::~ParticleFieldComponent(ParticleFieldComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6b68 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


