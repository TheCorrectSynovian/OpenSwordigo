/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7620
 * Function: Caver::Proto::SoundEffect::SoundEffect
 * Signature: undefined __thiscall SoundEffect(SoundEffect * this, SoundEffect * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::SoundEffect(Caver::Proto::SoundEffect const&) */

void __thiscall Caver::Proto::SoundEffect::SoundEffect(SoundEffect *this,SoundEffect *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_vtable_007e5368;
  *(undefined4 *)(this + 8) = 0;
  puVar4 = PTR__default_name__007e7200;
  puVar3 = PTR__default_resource_name__007e66e8;
  uVar1 = DAT_0068a310;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar4;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}


