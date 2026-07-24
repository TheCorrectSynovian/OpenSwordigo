/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dfeac
 * Function: Caver::Proto::Item::Clear
 * Signature: undefined __thiscall Clear(Item * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::Clear() */

void __thiscall Caver::Proto::Item::Clear(Item *this)

{
  long *plVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x40);
  if ((uVar2 & 0xff) != 0) {
    *(undefined4 *)(this + 0xc) = 1;
    if (((uVar2 >> 1 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_name__007e6888)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x40);
    }
    if (((uVar2 >> 2 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x18), plVar1 != (long *)PTR__default_title__007e4fd8)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x40);
    }
    if (((uVar2 >> 3 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x20), plVar1 != (long *)PTR__default_short_description__007e6118
       )) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x40);
    }
    if (((uVar2 >> 4 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x28), plVar1 != (long *)PTR__default_description__007e7e10)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x40);
    }
    this[0x30] = (Item)0x0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  if ((uVar2 & 0xff00) != 0) {
    *(undefined4 *)(this + 0x3c) = 0;
  }
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


