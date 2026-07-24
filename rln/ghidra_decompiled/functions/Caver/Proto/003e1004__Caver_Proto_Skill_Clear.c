/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1004
 * Function: Caver::Proto::Skill::Clear
 * Signature: undefined __thiscall Clear(Skill * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Skill::Clear() */

void __thiscall Caver::Proto::Skill::Clear(Skill *this)

{
  Skill SVar1;
  long *plVar2;
  uint uVar3;
  
  SVar1 = this[0x34];
  uVar3 = (uint)(byte)SVar1;
  if (SVar1 != (Skill)0x0) {
    if ((((byte)SVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e6d10)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x34);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_title__007e7328)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x34);
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x20), plVar2 != (long *)PTR__default_description__007e7dc0)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


