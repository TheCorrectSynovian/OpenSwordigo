/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fac54
 * Function: Caver::Proto::MagicExplosionComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::MagicExplosionComponent::InitAsDefaultInstance(MagicExplosionComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


