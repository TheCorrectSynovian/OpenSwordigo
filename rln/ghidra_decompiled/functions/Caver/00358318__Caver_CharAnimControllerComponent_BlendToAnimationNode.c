/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00358318
 * Function: Caver::CharAnimControllerComponent::BlendToAnimationNode
 * Signature: undefined __thiscall BlendToAnimationNode(CharAnimControllerComponent * this, intrusive_ptr * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode>
   const&, float) */

void __thiscall
Caver::CharAnimControllerComponent::BlendToAnimationNode
          (CharAnimControllerComponent *this,intrusive_ptr *param_1,float param_2)

{
  int iVar1;
  long lVar2;
  AnimBlendNode *this_00;
  long *plVar3;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x178) == 0) {
    local_50 = *(long **)(this + 0x158);
  }
  else {
    local_50 = *(long **)(*(long *)(this + 0x178) + 0x18);
  }
  if ((local_50 != (long *)0x0) &&
     (*(int *)(local_50 + 1) = (int)local_50[1] + 1, *(long **)param_1 != local_50)) {
    this_00 = operator_new(0x30);
    AnimBlendNode::AnimBlendNode(this_00,(intrusive_ptr *)&local_50,param_1,param_2,-1.0);
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    plVar3 = *(long **)(this + 0x178);
    *(AnimBlendNode **)(this + 0x178) = this_00;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
      this_00 = *(AnimBlendNode **)(this + 0x178);
    }
    this_00[0x2d] = (AnimBlendNode)0x1;
  }
  if ((local_50 != (long *)0x0) &&
     (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


