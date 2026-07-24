/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00386d40
 * Function: Caver::MagicExplosionComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(MagicExplosionComponent * this, MagicExplosionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::InitWithComponent(Caver::MagicExplosionComponent const*) */

void __thiscall
Caver::MagicExplosionComponent::InitWithComponent
          (MagicExplosionComponent *this,MagicExplosionComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xb0) = uVar1;
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  return;
}


