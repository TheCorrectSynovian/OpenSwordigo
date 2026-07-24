/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422abc
 * Function: Caver::Proto::ParticleObjectComponent::~ParticleObjectComponent
 * Signature: undefined __thiscall ~ParticleObjectComponent(ParticleObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::~ParticleObjectComponent() */

void __thiscall
Caver::Proto::ParticleObjectComponent::~ParticleObjectComponent(ParticleObjectComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6080 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


