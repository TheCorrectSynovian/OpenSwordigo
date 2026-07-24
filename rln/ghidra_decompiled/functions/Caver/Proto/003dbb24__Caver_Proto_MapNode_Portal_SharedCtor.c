/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dbb24
 * Function: Caver::Proto::MapNode_Portal::SharedCtor
 * Signature: undefined __thiscall SharedCtor(MapNode_Portal * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode_Portal::SharedCtor() */

void __thiscall Caver::Proto::MapNode_Portal::SharedCtor(MapNode_Portal *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_destination_name__007e6b58;
  uVar1 = DAT_00689bc8;
  this[0x20] = (MapNode_Portal)0x0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  return;
}


