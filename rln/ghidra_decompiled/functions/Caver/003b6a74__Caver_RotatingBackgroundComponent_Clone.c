/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b6a74
 * Function: Caver::RotatingBackgroundComponent::Clone
 * Signature: undefined __thiscall Clone(RotatingBackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RotatingBackgroundComponent::Clone() const */

BackgroundComponent * __thiscall
Caver::RotatingBackgroundComponent::Clone(RotatingBackgroundComponent *this)

{
  undefined *puVar1;
  BackgroundComponent *this_00;
  
  this_00 = operator_new(0x98);
  BackgroundComponent::BackgroundComponent(this_00);
  puVar1 = PTR_vtable_007e7330;
  *(undefined4 *)(this_00 + 0x90) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x18) = puVar1 + 0x170;
  *(undefined **)(this_00 + 0x10) = puVar1 + 0x130;
  BackgroundComponent::InitWithComponent(this_00,(BackgroundComponent *)this);
  return this_00;
}


