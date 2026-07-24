/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dba4c
 * Function: Caver::Proto::MapNode::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::InitAsDefaultInstance() */

void __thiscall Caver::Proto::MapNode::InitAsDefaultInstance(MapNode *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


