/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433564
 * Function: Caver::Proto::MagicExplosionComponent::~MagicExplosionComponent
 * Signature: undefined __thiscall ~MagicExplosionComponent(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::~MagicExplosionComponent() */

void __thiscall
Caver::Proto::MagicExplosionComponent::~MagicExplosionComponent(MagicExplosionComponent *this)

{
  *(undefined **)this = PTR_vtable_007e58b0 + 0x10;
  if ((*(MagicExplosionComponent **)PTR_default_instance__007e5e18 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* catch() { ... } // from try @ 00433364 with catch @ 004335a0 */
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


