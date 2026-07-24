/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dc700
 * Function: Caver::Proto::MapNode::MapNode
 * Signature: undefined __thiscall MapNode(MapNode * this, MapNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&) */

void __thiscall Caver::Proto::MapNode::MapNode(MapNode *this,MapNode *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__default_level_name__007e5878;
  *(undefined4 *)(this + 0x38) = 4;
  puVar3 = PTR__default_music__007e7748;
  puVar1 = PTR_vtable_007e68a0 + 0x10;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x70) = puVar3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1;
  puVar1 = PTR__default_title__007e6348;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (MapNode)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x78] = (MapNode)0x0;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x80] = (MapNode)0x0;
  *(MapNode **)(this + 0x28) = this + 0x40;
  *(undefined **)(this + 0x20) = puVar1;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined4 *)(this + 0x84) = 0;
  MergeFrom(this,param_1);
  return;
}


