/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312804
 * Function: Caver::AnimBlendNode::AnimBlendNode
 * Signature: undefined __thiscall AnimBlendNode(AnimBlendNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimBlendNode::AnimBlendNode() */

void __thiscall Caver::AnimBlendNode::AnimBlendNode(AnimBlendNode *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR_vtable_007e4f68;
  uVar1 = DAT_00683728;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0x24) = uVar1;
  *(undefined2 *)(this + 0x2c) = 0;
  return;
}


