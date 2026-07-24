/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003831fc
 * Function: Caver::HookshotTrailComponent::HookshotTrailComponent
 * Signature: undefined __thiscall HookshotTrailComponent(HookshotTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HookshotTrailComponent::HookshotTrailComponent() */

void __thiscall Caver::HookshotTrailComponent::HookshotTrailComponent(HookshotTrailComponent *this)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  GlowComponent::GlowComponent((GlowComponent *)this);
  puVar1 = PTR_vtable_007e7798;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar1 + 0x178;
  *(undefined **)(this + 0x10) = puVar1 + 0x138;
  *(long *)(this + 0xbc) = auVar2._8_8_;
  *(long *)(this + 0xb4) = auVar2._0_8_;
  return;
}


