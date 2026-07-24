/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033e180
 * Function: Caver::TextureMappingComponent::TextureMappingComponent
 * Signature: undefined __thiscall TextureMappingComponent(TextureMappingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMappingComponent::TextureMappingComponent() */

void __thiscall
Caver::TextureMappingComponent::TextureMappingComponent(TextureMappingComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  TextureMappingComponent *pTVar6;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (TextureMappingComponent)0x0;
  puVar5 = PTR_vtable_007e5960;
  puVar1 = PTR_vtable_007e5960 + 0x128;
  puVar2 = PTR_vtable_007e5960 + 0x168;
  puVar3 = PTR_DAT_007e5de8 + 0x18;
  *(undefined **)(this + 0x38) = puVar3;
  pTVar6 = this + 0x48;
  *(undefined8 *)pTVar6 = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  uVar4 = DAT_00684a10;
  *(undefined8 *)(this + 0x50) = 0;
  *(TextureMappingComponent **)(this + 0x58) = pTVar6;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar3;
  *(undefined **)this = puVar5 + 0x10;
  *(undefined8 *)(this + 0x78) = 0;
  *(TextureMappingComponent **)(this + 0x60) = pTVar6;
  *(undefined8 *)(this + 0x80) = uVar4;
  *(undefined4 *)(this + 0x88) = 0;
  return;
}


