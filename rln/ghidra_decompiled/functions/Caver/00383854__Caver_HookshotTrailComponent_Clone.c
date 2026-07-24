/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00383854
 * Function: Caver::HookshotTrailComponent::Clone
 * Signature: undefined __thiscall Clone(HookshotTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HookshotTrailComponent::Clone() const */

GlowComponent * __thiscall Caver::HookshotTrailComponent::Clone(HookshotTrailComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  GlowComponent *this_00;
  undefined1 auVar4 [16];
  
  this_00 = operator_new(200);
  GlowComponent::GlowComponent(this_00);
  auVar4 = NEON_fmov(0x3f800000,4);
  puVar1 = PTR_vtable_007e7798 + 0x138;
  puVar2 = PTR_vtable_007e7798 + 0x10;
  puVar3 = PTR_vtable_007e7798 + 0x178;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined **)this_00 = puVar2;
  *(undefined **)(this_00 + 0x18) = puVar3;
  *(undefined **)(this_00 + 0x10) = puVar1;
  *(long *)(this_00 + 0xbc) = auVar4._8_8_;
  *(long *)(this_00 + 0xb4) = auVar4._0_8_;
  GlowComponent::InitWithComponent(this_00,(GlowComponent *)this);
  return this_00;
}


