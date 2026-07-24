/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a34ac
 * Function: Caver::GlowComponent::GlowComponent
 * Signature: undefined __thiscall GlowComponent(GlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GlowComponent::GlowComponent() */

void __thiscall Caver::GlowComponent::GlowComponent(GlowComponent *this)

{
  undefined *puVar1;
  GlowComponent *pGVar2;
  undefined1 auVar3 [16];
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (GlowComponent)0x0;
  puVar1 = PTR_vtable_007e4910;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pGVar2 = this + 0x48;
  *(undefined8 *)pGVar2 = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x178;
  *(undefined **)(this + 0x10) = puVar1 + 0x138;
  auVar3 = NEON_fmov(0x3f800000,4);
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(GlowComponent **)(this + 0x58) = pGVar2;
  *(GlowComponent **)(this + 0x60) = pGVar2;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (GlowComponent)0x1;
  *(long *)(this + 0x7c) = auVar3._8_8_;
  *(long *)(this + 0x74) = auVar3._0_8_;
  return;
}


