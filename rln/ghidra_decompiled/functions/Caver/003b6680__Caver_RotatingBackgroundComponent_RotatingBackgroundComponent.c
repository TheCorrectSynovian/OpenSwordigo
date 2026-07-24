/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b6680
 * Function: Caver::RotatingBackgroundComponent::RotatingBackgroundComponent
 * Signature: undefined __thiscall RotatingBackgroundComponent(RotatingBackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RotatingBackgroundComponent::RotatingBackgroundComponent() */

void __thiscall
Caver::RotatingBackgroundComponent::RotatingBackgroundComponent(RotatingBackgroundComponent *this)

{
  undefined *puVar1;
  
  BackgroundComponent::BackgroundComponent((BackgroundComponent *)this);
  puVar1 = PTR_vtable_007e7330;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar1 + 0x170;
  *(undefined **)(this + 0x10) = puVar1 + 0x130;
  return;
}


