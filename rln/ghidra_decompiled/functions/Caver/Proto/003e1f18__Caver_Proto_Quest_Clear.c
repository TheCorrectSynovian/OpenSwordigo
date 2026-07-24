/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1f18
 * Function: Caver::Proto::Quest::Clear
 * Signature: undefined __thiscall Clear(Quest * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::Clear() */

void __thiscall Caver::Proto::Quest::Clear(Quest *this)

{
  Quest QVar1;
  long *plVar2;
  uint uVar3;
  
  QVar1 = this[0x30];
  uVar3 = (uint)(byte)QVar1;
  if (QVar1 != (Quest)0x0) {
    if ((((byte)QVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e5e30)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x30);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_title__007e6d70)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x30);
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x20), plVar2 != (long *)PTR__default_follow_up_quest__007e5bb8))
    {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x30);
    }
    if (((uVar3 >> 3 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x28), plVar2 != (long *)PTR__default_map_location__007e4c80)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
  }
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


