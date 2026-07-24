/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312834
 * Function: Caver::AnimBlendNode::AnimBlendNode
 * Signature: undefined __thiscall AnimBlendNode(AnimBlendNode * this, intrusive_ptr * param_1, intrusive_ptr * param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,
   boost::intrusive_ptr<Caver::AnimNode> const&, float, float) */

void __thiscall
Caver::AnimBlendNode::AnimBlendNode
          (AnimBlendNode *this,intrusive_ptr *param_1,intrusive_ptr *param_2,float param_3,
          float param_4)

{
  undefined *puVar1;
  long lVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR_vtable_007e4f68;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x10) = 0;
  *(float *)(this + 0x24) = param_3;
  *(float *)(this + 0x28) = param_4;
  *(undefined2 *)(this + 0x2c) = 0;
  lVar2 = *(long *)param_1;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(long *)(this + 0x10) = lVar2;
  lVar2 = *(long *)param_2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(long *)(this + 0x18) = lVar2;
  return;
}


