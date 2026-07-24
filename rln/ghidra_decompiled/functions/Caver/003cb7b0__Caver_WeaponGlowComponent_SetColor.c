/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb7b0
 * Function: Caver::WeaponGlowComponent::SetColor
 * Signature: undefined __thiscall SetColor(WeaponGlowComponent * this, FloatColor * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::SetColor(Caver::FloatColor const&) */

void __thiscall Caver::WeaponGlowComponent::SetColor(WeaponGlowComponent *this,FloatColor *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x70] = (WeaponGlowComponent)0x1;
  this[0xa0] = (WeaponGlowComponent)0x1;
  *(undefined8 *)(this + 0xac) = uVar2;
  *(undefined8 *)(this + 0xa4) = uVar1;
  return;
}


