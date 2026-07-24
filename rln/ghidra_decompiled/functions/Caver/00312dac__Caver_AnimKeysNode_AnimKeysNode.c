/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312dac
 * Function: Caver::AnimKeysNode::AnimKeysNode
 * Signature: undefined __thiscall AnimKeysNode(AnimKeysNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::AnimKeysNode() */

void __thiscall Caver::AnimKeysNode::AnimKeysNode(AnimKeysNode *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x2c] = (AnimKeysNode)0x1;
  *(undefined2 *)(this + 0x38) = 1;
  puVar1 = PTR_vtable_007e5ef0;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


