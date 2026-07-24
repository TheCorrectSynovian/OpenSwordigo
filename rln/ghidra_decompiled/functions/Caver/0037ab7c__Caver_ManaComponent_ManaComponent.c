/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ab7c
 * Function: Caver::ManaComponent::ManaComponent
 * Signature: undefined __thiscall ManaComponent(ManaComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaComponent::ManaComponent() */

void __thiscall Caver::ManaComponent::ManaComponent(ManaComponent *this)

{
  undefined *puVar1;
  ManaComponent *pMVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ManaComponent)0x0;
  puVar1 = PTR_vtable_007e4aa0;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pMVar2 = this + 0x48;
  *(undefined8 *)pMVar2 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(ManaComponent **)(this + 0x58) = pMVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(ManaComponent **)(this + 0x60) = pMVar2;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}


