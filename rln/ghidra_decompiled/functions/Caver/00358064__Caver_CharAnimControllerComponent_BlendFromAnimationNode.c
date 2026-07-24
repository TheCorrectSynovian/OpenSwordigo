/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00358064
 * Function: Caver::CharAnimControllerComponent::BlendFromAnimationNode
 * Signature: undefined __thiscall BlendFromAnimationNode(CharAnimControllerComponent * this, intrusive_ptr * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::BlendFromAnimationNode(boost::intrusive_ptr<Caver::AnimKeysNode>
   const&, float) */

void __thiscall
Caver::CharAnimControllerComponent::BlendFromAnimationNode
          (CharAnimControllerComponent *this,intrusive_ptr *param_1,float param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  AnimBlendNode *this_00;
  long *plVar4;
  long lVar5;
  float fVar6;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 0x168);
  if (plVar3 != (long *)0x0) {
    *(undefined8 *)(this + 0x168) = 0;
    iVar1 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  this_00 = operator_new(0x30);
  local_50 = *(long **)param_1;
  if (local_50 != (long *)0x0) {
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
  }
  local_58 = *(long **)(this + 0x158);
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
  AnimBlendNode::AnimBlendNode
            (this_00,(intrusive_ptr *)&local_50,(intrusive_ptr *)&local_58,param_2,-1.0);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar3 = *(long **)(this + 0x178);
  *(AnimBlendNode **)(this + 0x178) = this_00;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((local_58 != (long *)0x0) &&
     (iVar1 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((local_50 != (long *)0x0) &&
     (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  plVar3 = *(long **)param_1;
  lVar5 = *(long *)(this + 0x178);
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 2;
  }
  plVar4 = *(long **)(lVar5 + 0x10);
  *(long **)(lVar5 + 0x10) = plVar3;
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  *(undefined1 *)(*(long *)(this + 0x178) + 0x2d) = 0;
  fVar6 = (*(float *)(*(long *)param_1 + 0x28) - *(float *)(*(long *)param_1 + 0xc)) - param_2;
  if (fVar6 <= DAT_00683944) {
    fVar6 = DAT_00683944;
  }
  *(float *)(this + 0x180) = fVar6;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


