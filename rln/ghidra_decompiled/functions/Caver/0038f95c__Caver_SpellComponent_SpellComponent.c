/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038f95c
 * Function: Caver::SpellComponent::SpellComponent
 * Signature: undefined __thiscall SpellComponent(SpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpellComponent::SpellComponent() */

void __thiscall Caver::SpellComponent::SpellComponent(SpellComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  SpellComponent *pSVar5;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x30] = (SpellComponent)0x0;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  puVar2 = PTR_vtable_007e4868 + 0x148;
  puVar3 = PTR_vtable_007e4868 + 0x10;
  puVar4 = PTR_vtable_007e4868 + 0x188;
  *(undefined **)(this + 0x38) = puVar1;
  pSVar5 = this + 0x48;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)pSVar5 = 0;
  *(undefined **)this = puVar3;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined **)(this + 0x90) = puVar1;
  this[0xb8] = (SpellComponent)0x0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(SpellComponent **)(this + 0x58) = pSVar5;
  *(SpellComponent **)(this + 0x60) = pSVar5;
  *(undefined **)(this + 0x18) = puVar4;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  return;
}


