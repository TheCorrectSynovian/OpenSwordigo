/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321a4c
 * Function: Caver::LightComponent::LightComponent
 * Signature: undefined __thiscall LightComponent(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LightComponent::LightComponent() */

void __thiscall Caver::LightComponent::LightComponent(LightComponent *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  LightComponent *pLVar4;
  undefined1 auVar5 [16];
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (LightComponent)0x0;
  puVar3 = PTR_vtable_007e5ed0;
  uVar1 = DAT_00683ee8;
  auVar5 = NEON_fmov(0x3f800000,4);
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pLVar4 = this + 0x48;
  *(undefined8 *)pLVar4 = 0;
  *(long *)(this + 0x7c) = auVar5._8_8_;
  *(long *)(this + 0x74) = auVar5._0_8_;
  *(undefined8 *)(this + 0x94) = uVar1;
  uVar2 = _UNK_00683f08;
  uVar1 = _DAT_00683f00;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined4 *)(this + 0x84) = 0x3f800000;
  *(undefined **)(this + 0x18) = puVar3 + 0x168;
  *(undefined **)(this + 0x10) = puVar3 + 0x128;
  *(undefined8 *)(this + 0x50) = 0;
  *(LightComponent **)(this + 0x58) = pLVar4;
  *(LightComponent **)(this + 0x60) = pLVar4;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x90] = (LightComponent)0x0;
  *(undefined8 *)(this + 0xa4) = uVar2;
  *(undefined8 *)(this + 0x9c) = uVar1;
  *(undefined4 *)(this + 0xac) = 0xffffffff;
  return;
}


