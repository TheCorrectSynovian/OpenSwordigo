/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410e40
 * Function: Caver::Proto::SoundEffectComponent::SoundEffectComponent
 * Signature: undefined __thiscall SoundEffectComponent(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::SoundEffectComponent::SoundEffectComponent() */

void __thiscall Caver::Proto::SoundEffectComponent::SoundEffectComponent(SoundEffectComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_vtable_007e64a8;
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_name__007e7518;
  uVar1 = _DAT_00683948;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x10) = puVar3;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


