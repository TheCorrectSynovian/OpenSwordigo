/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313200
 * Function: Caver::AnimKeysNode::~AnimKeysNode
 * Signature: undefined __thiscall ~AnimKeysNode(AnimKeysNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::~AnimKeysNode() */

void __thiscall Caver::AnimKeysNode::~AnimKeysNode(AnimKeysNode *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_007e5ef0 + 0x10;
  FloatDataBuffer::~FloatDataBuffer((FloatDataBuffer *)(this + 0x40));
  plVar2 = *(long **)(this + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  return;
}


