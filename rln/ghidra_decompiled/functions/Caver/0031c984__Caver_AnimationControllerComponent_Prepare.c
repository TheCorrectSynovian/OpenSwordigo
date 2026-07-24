/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031c984
 * Function: Caver::AnimationControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::Prepare() */

void __thiscall Caver::AnimationControllerComponent::Prepare(AnimationControllerComponent *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  RegisterLibrary(this);
  plVar2 = *(long **)(this + 0x98);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar2 = *(long **)(this + 0x98);
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x108))();
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
  }
  plVar3 = *(long **)(this + 0xa0);
  *(long **)(this + 0xa0) = plVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0031ca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


