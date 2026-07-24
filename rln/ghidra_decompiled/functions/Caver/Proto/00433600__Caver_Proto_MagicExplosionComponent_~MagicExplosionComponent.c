/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433600
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
                    /* try { // try from 00433620 to 005336e7 has its CatchHandler @ 00433718 */
  if ((*(MagicExplosionComponent **)PTR_default_instance__007e5e18 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


