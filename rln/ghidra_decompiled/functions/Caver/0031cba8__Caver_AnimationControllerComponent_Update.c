/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031cba8
 * Function: Caver::AnimationControllerComponent::Update
 * Signature: undefined __thiscall Update(AnimationControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::Update(float) */

void __thiscall
Caver::AnimationControllerComponent::Update(AnimationControllerComponent *this,float param_1)

{
  int iVar1;
  long *plVar2;
  ModelInstance *pMVar3;
  
  plVar2 = *(long **)(this + 0x80);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar2 = *(long **)(this + 0x80);
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  pMVar3 = *(ModelInstance **)(this + 0xb0);
  if (pMVar3 == (ModelInstance *)0x0) {
    pMVar3 = *(ModelInstance **)(this + 0xa0);
    if (pMVar3 != (ModelInstance *)0x0) {
      if (plVar2[0x11] == 0) {
        (**(code **)(*plVar2 + 0x40))(plVar2);
      }
      AnimNode::UpdateWithModelInstance(param_1,pMVar3);
      return;
    }
  }
  else {
    if (plVar2[0x11] == 0) {
      (**(code **)(*plVar2 + 0x40))(plVar2);
    }
    AnimNode::UpdateWithModelInstance(param_1,pMVar3);
    plVar2 = *(long **)(this + 0xb0);
    if (((DAT_00683730 < *(float *)(plVar2 + 4)) &&
        (*(undefined8 *)(this + 0xb0) = 0, plVar2 != (long *)0x0)) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0031cc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


