/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422ad4
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
                    /* catch() { ... } // from try @ 00422aa8 with catch @ 00422ad4 */
                    /* catch() { ... } // from try @ 004229d4 with catch @ 00422ad8 */
  *(undefined **)this = PTR_vtable_007e6080 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 00422afc to 00522b23 has its CatchHandler @ 00422b80 */
  operator_delete(this);
  return;
}


