/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3adc
 * Function: Caver::OrbitControllerComponent::OrbitControllerComponent
 * Signature: undefined __thiscall OrbitControllerComponent(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OrbitControllerComponent::OrbitControllerComponent() */

void __thiscall
Caver::OrbitControllerComponent::OrbitControllerComponent(OrbitControllerComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  OrbitControllerComponent *pOVar6;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (OrbitControllerComponent)0x0;
  puVar5 = PTR_vtable_007e6428;
  puVar1 = PTR_vtable_007e6428 + 0x128;
  puVar2 = PTR_vtable_007e6428 + 0x168;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pOVar6 = this + 0x48;
  *(undefined8 *)pOVar6 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar4 = _UNK_00689658;
  uVar3 = _DAT_00689650;
  *(undefined8 *)(this + 0x50) = 0;
  *(OrbitControllerComponent **)(this + 0x58) = pOVar6;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined8 *)(this + 0x78) = 0;
  *(OrbitControllerComponent **)(this + 0x60) = pOVar6;
  *(undefined8 *)(this + 0x88) = uVar4;
  *(undefined8 *)(this + 0x80) = uVar3;
  *(undefined4 *)(this + 0x9c) = 0;
  return;
}


