/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031ccb8
 * Function: Caver::AnimationControllerComponent::BlendToAnimationNode
 * Signature: undefined __thiscall BlendToAnimationNode(AnimationControllerComponent * this, intrusive_ptr * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode>
   const&, float) */

void __thiscall
Caver::AnimationControllerComponent::BlendToAnimationNode
          (AnimationControllerComponent *this,intrusive_ptr *param_1,float param_2)

{
  int iVar1;
  AnimBlendNode *this_00;
  long *plVar2;
  long lVar3;
  intrusive_ptr *piVar4;
  
  piVar4 = (intrusive_ptr *)(this + 0xa0);
  if (*(long *)piVar4 != 0) {
    this_00 = operator_new(0x30);
    AnimBlendNode::AnimBlendNode(this_00,piVar4,param_1,param_2,param_2);
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    plVar2 = *(long **)(this + 0xb0);
    *(AnimBlendNode **)(this + 0xb0) = this_00;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
      this_00 = *(AnimBlendNode **)(this + 0xb0);
    }
    this_00[0x2d] = (AnimBlendNode)0x1;
  }
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)piVar4;
  *(long *)piVar4 = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0031cda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


