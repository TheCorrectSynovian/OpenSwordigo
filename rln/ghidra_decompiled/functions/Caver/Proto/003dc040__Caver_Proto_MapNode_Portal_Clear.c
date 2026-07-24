/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dc040
 * Function: Caver::Proto::MapNode_Portal::Clear
 * Signature: undefined __thiscall Clear(MapNode_Portal * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode_Portal::Clear() */

void __thiscall Caver::Proto::MapNode_Portal::Clear(MapNode_Portal *this)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (this[0x24] != (MapNode_Portal)0x0) {
    if ((((byte)this[0x24] & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_destination_name__007e6b58)
       ) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
    uVar1 = DAT_00689bc8;
    this[0x20] = (MapNode_Portal)0x0;
    *(undefined8 *)(this + 0x18) = uVar1;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


