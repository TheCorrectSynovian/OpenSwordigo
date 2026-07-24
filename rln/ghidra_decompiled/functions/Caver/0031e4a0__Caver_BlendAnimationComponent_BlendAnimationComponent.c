/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e4a0
 * Function: Caver::BlendAnimationComponent::BlendAnimationComponent
 * Signature: undefined __thiscall BlendAnimationComponent(BlendAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::BlendAnimationComponent() */

void __thiscall
Caver::BlendAnimationComponent::BlendAnimationComponent(BlendAnimationComponent *this)

{
  int iVar1;
  undefined *puVar2;
  AnimBlendNode *this_00;
  long *plVar3;
  BlendAnimationComponent *pBVar4;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (BlendAnimationComponent)0x0;
  puVar2 = PTR_vtable_007e69a0;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pBVar4 = this + 0x48;
  *(undefined8 *)pBVar4 = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(BlendAnimationComponent **)(this + 0x58) = pBVar4;
  *(BlendAnimationComponent **)(this + 0x60) = pBVar4;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (BlendAnimationComponent)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined **)(this + 0x18) = puVar2 + 0x170;
  *(undefined **)(this + 0x10) = puVar2 + 0x130;
  *(undefined8 *)(this + 0x98) = 0;
  this_00 = operator_new(0x30);
  AnimBlendNode::AnimBlendNode(this_00);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar3 = *(long **)(this + 0x78);
  *(AnimBlendNode **)(this + 0x78) = this_00;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  return;
}


