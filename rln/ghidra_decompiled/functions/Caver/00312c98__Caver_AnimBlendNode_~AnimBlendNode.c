/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312c98
 * Function: Caver::AnimBlendNode::~AnimBlendNode
 * Signature: undefined __thiscall ~AnimBlendNode(AnimBlendNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimBlendNode::~AnimBlendNode() */

void __thiscall Caver::AnimBlendNode::~AnimBlendNode(AnimBlendNode *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  *(undefined **)this = PTR_vtable_007e4f68 + 0x10;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x10);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  operator_delete(this);
  return;
}


