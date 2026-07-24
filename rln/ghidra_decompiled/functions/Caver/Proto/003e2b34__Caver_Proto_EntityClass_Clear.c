/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e2b34
 * Function: Caver::Proto::EntityClass::Clear
 * Signature: undefined __thiscall Clear(EntityClass * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::Clear() */

void __thiscall Caver::Proto::EntityClass::Clear(EntityClass *this)

{
  EntityClass EVar1;
  long *plVar2;
  uint uVar3;
  
  EVar1 = this[0x2c];
  uVar3 = (uint)(byte)EVar1;
  if (EVar1 != (EntityClass)0x0) {
    if ((((byte)EVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_name__007e5c18)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x2c);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_title__007e56f8)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x20) = 0x1010100;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


