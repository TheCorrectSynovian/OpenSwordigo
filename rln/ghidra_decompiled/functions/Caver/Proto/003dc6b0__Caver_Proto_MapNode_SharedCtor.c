/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dc6b0
 * Function: Caver::Proto::MapNode::SharedCtor
 * Signature: undefined __thiscall SharedCtor(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::SharedCtor() */

void __thiscall Caver::Proto::MapNode::SharedCtor(MapNode *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_level_name__007e5878;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)(this + 0x70) = PTR__default_music__007e7748;
  puVar2 = PTR__default_title__007e6348;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (MapNode)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x78] = (MapNode)0x0;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x80] = (MapNode)0x0;
  *(undefined **)(this + 0x20) = puVar2;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined4 *)(this + 0x84) = 0;
  return;
}


