/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e3c98
 * Function: Caver::Proto::GuideTarget::GuideTarget
 * Signature: undefined __thiscall GuideTarget(GuideTarget * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget::GuideTarget() */

void __thiscall Caver::Proto::GuideTarget::GuideTarget(GuideTarget *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  *(GuideTarget **)(this + 0x38) = this + 0x50;
  *(undefined4 *)(this + 0x48) = 4;
  puVar4 = PTR__default_object_identifier__007e7520;
  puVar2 = PTR__default_name__007e4fe0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = PTR_vtable_007e5c88 + 0x10;
  puVar3 = PTR__default_level_name__007e6788;
  puVar1 = PTR__default_carry_object_identifier__007e49b0;
  this[0x30] = (GuideTarget)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined **)(this + 0x28) = puVar1;
  *(undefined **)(this + 0x20) = puVar4;
  return;
}


