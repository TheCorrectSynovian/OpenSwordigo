/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003397f4
 * Function: Caver::SoundEffectComponent::SoundEffectComponent
 * Signature: undefined __thiscall SoundEffectComponent(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::SoundEffectComponent() */

void __thiscall Caver::SoundEffectComponent::SoundEffectComponent(SoundEffectComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  SoundEffectComponent *pSVar3;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (SoundEffectComponent)0x0;
  puVar2 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x50) = 0;
  puVar1 = PTR_vtable_007e54d0;
  *(undefined **)(this + 0x38) = puVar2 + 0x18;
  pSVar3 = this + 0x48;
  *(undefined8 *)pSVar3 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x78) = puVar2 + 0x18;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar1 + 400;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  *(SoundEffectComponent **)(this + 0x58) = pSVar3;
  *(SoundEffectComponent **)(this + 0x60) = pSVar3;
  *(undefined **)(this + 0x18) = puVar1 + 0x170;
  *(undefined **)(this + 0x10) = puVar1 + 0x130;
  *(undefined8 *)(this + 0x8c) = 0;
  return;
}


