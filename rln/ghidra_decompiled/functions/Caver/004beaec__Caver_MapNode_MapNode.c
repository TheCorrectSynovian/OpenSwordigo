/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004beaec
 * Function: Caver::MapNode::MapNode
 * Signature: undefined __thiscall MapNode(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::MapNode() */

void __thiscall Caver::MapNode::MapNode(MapNode *this)

{
  undefined *puVar1;
  
  *(undefined8 *)(this + 8) = 0;
  puVar1 = PTR_DAT_007e5de8;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  puVar1 = puVar1 + 0x18;
  this[0x5c] = (MapNode)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x48] = (MapNode)0x0;
  this[0x68] = (MapNode)0x0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined **)(this + 0x60) = puVar1;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar1;
  this[0x70] = (MapNode)0x0;
  return;
}


