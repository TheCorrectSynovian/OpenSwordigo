/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d75ec
 * Function: Caver::Proto::SoundEffect::SharedCtor
 * Signature: undefined __thiscall SharedCtor(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::SharedCtor() */

void __thiscall Caver::Proto::SoundEffect::SharedCtor(SoundEffect *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e7200;
  puVar1 = PTR__default_resource_name__007e66e8;
  *(undefined8 *)(this + 0x20) = DAT_0068a310;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar2;
  return;
}


