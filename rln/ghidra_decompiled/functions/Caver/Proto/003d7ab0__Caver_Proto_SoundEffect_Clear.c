/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7ab0
 * Function: Caver::Proto::SoundEffect::Clear
 * Signature: undefined __thiscall Clear(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::Clear() */

void __thiscall Caver::Proto::SoundEffect::Clear(SoundEffect *this)

{
  SoundEffect SVar1;
  long *plVar2;
  uint uVar3;
  
  SVar1 = this[0x28];
  uVar3 = (uint)(byte)SVar1;
  if (SVar1 != (SoundEffect)0x0) {
    if ((((byte)SVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e7200)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x28);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_resource_name__007e66e8)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
    *(undefined8 *)(this + 0x20) = DAT_0068a310;
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


