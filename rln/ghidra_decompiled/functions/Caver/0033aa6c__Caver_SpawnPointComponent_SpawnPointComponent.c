/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033aa6c
 * Function: Caver::SpawnPointComponent::SpawnPointComponent
 * Signature: undefined __thiscall SpawnPointComponent(SpawnPointComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpawnPointComponent::SpawnPointComponent() */

void __thiscall Caver::SpawnPointComponent::SpawnPointComponent(SpawnPointComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  SpawnPointComponent *pSVar3;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (SpawnPointComponent)0x0;
  puVar2 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x50) = 0;
  puVar1 = PTR_vtable_007e4f48;
  *(undefined **)(this + 0x38) = puVar2 + 0x18;
  pSVar3 = this + 0x48;
  *(undefined8 *)pSVar3 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(SpawnPointComponent **)(this + 0x60) = pSVar3;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 1;
  *(undefined4 *)(this + 0x74) = 0;
  *(SpawnPointComponent **)(this + 0x58) = pSVar3;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  *(undefined8 *)(this + 0x78) = 0;
  return;
}


