/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ca834
 * Function: Caver::WeaponGlowComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(WeaponGlowComponent * this, WeaponGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::InitWithComponent(Caver::WeaponGlowComponent const*) */

void __thiscall
Caver::WeaponGlowComponent::InitWithComponent
          (WeaponGlowComponent *this,WeaponGlowComponent *param_1)

{
  undefined8 uVar1;
  
  GlowComponent::InitWithComponent((GlowComponent *)this,(GlowComponent *)param_1);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  uVar1 = *(undefined8 *)(param_1 + 0xa4);
  *(undefined8 *)(this + 0xac) = *(undefined8 *)(param_1 + 0xac);
  *(undefined8 *)(this + 0xa4) = uVar1;
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  return;
}


