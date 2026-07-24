/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00323df0
 * Function: Caver::ModelComponent::ModelComponent
 * Signature: undefined __thiscall ModelComponent(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::ModelComponent() */

void __thiscall Caver::ModelComponent::ModelComponent(ModelComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ModelComponent *pMVar4;
  undefined1 auVar5 [16];
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ModelComponent)0x0;
  puVar2 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  puVar3 = PTR_vtable_007e6b98;
  auVar5 = NEON_fmov(0x3f800000,4);
  puVar1 = PTR_vtable_007e6b98 + 0x10;
  *(undefined **)(this + 0x38) = puVar2 + 0x18;
  pMVar4 = this + 0x48;
  *(undefined8 *)pMVar4 = 0;
  *(undefined **)this = puVar1;
  *(long *)(this + 0xa8) = auVar5._8_8_;
  *(long *)(this + 0xa0) = auVar5._0_8_;
  *(ModelComponent **)(this + 0x58) = pMVar4;
  *(ModelComponent **)(this + 0x60) = pMVar4;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)(this + 0x70) = puVar2 + 0x18;
  *(undefined8 *)(this + 0x95) = 0;
  this[0xc0] = (ModelComponent)0x0;
  this[0x118] = (ModelComponent)0x0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xc4) = 0;
  *(undefined8 *)(this + 0xcc) = 0;
  *(undefined **)(this + 0x18) = puVar3 + 0x168;
  *(undefined **)(this + 0x10) = puVar3 + 0x128;
  *(undefined8 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined2 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x136) = 0xffffffffffffffff;
  this[0x13e] = (ModelComponent)0x0;
  return;
}


