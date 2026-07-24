/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dbb4c
 * Function: Caver::Proto::MapNode_Portal::MapNode_Portal
 * Signature: undefined __thiscall MapNode_Portal(MapNode_Portal * this, MapNode_Portal * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode_Portal::MapNode_Portal(Caver::Proto::MapNode_Portal const&) */

void __thiscall
Caver::Proto::MapNode_Portal::MapNode_Portal(MapNode_Portal *this,MapNode_Portal *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_vtable_007e78c0;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_destination_name__007e6b58;
  uVar1 = DAT_00689bc8;
  this[0x20] = (MapNode_Portal)0x0;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x24) = 0;
  MergeFrom(this,param_1);
  return;
}


