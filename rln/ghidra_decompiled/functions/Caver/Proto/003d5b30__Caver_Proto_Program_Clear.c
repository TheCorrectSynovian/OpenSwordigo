/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5b30
 * Function: Caver::Proto::Program::Clear
 * Signature: undefined __thiscall Clear(Program * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::Clear() */

void __thiscall Caver::Proto::Program::Clear(Program *this)

{
  Program PVar1;
  long *plVar2;
  uint uVar3;
  
  PVar1 = this[0x28];
  uVar3 = (uint)(byte)PVar1;
  if (PVar1 != (Program)0x0) {
    if ((((byte)PVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e7d20)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x28);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_string__007e54d8)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x28);
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x20), plVar2 != (long *)PTR__default_bytes__007e7070)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


