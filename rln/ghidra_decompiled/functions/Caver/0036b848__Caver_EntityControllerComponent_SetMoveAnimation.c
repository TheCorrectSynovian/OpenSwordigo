/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036b848
 * Function: Caver::EntityControllerComponent::SetMoveAnimation
 * Signature: undefined __thiscall SetMoveAnimation(EntityControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityControllerComponent::SetMoveAnimation(boost::intrusive_ptr<Caver::AnimKeysNode>
   const&) */

void __thiscall
Caver::EntityControllerComponent::SetMoveAnimation
          (EntityControllerComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)param_1;
  plVar7 = *(long **)(this + 0x100);
  if (plVar3 == plVar7) goto LAB_0036ba88;
  if (plVar7 != (long *)0x0) {
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  }
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  *(long **)(this + 0x100) = plVar3;
  if ((plVar7 != (long *)0x0) &&
     (iVar1 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7);
    plVar3 = *(long **)(this + 0x100);
  }
  if ((plVar3 != (long *)0x0) && (DAT_00683944 < *(float *)(this + 0x10c))) {
    *(float *)((long)plVar3 + 0x34) =
         *(float *)(this + 0x10c) / (*(float *)(*(long *)(this + 0x28) + 0x8c) * _DAT_0068782c);
  }
  plVar3 = *(long **)(this + 0x98);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar3 = *(long **)(this + 0x98);
    if (plVar3 != (long *)0x0) goto LAB_0036b918;
  }
  else {
LAB_0036b918:
    plVar4 = (long *)plVar3[0x14];
    if (plVar4 == (long *)0x0) {
      plVar4 = *(long **)(this + 0x100);
      if (plVar4 != (long *)0x0) {
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 2;
      }
      plVar6 = (long *)plVar3[0x14];
      plVar3[0x14] = (long)plVar4;
      if ((plVar6 != (long *)0x0) &&
         (iVar1 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    else {
      if ((int)plVar4[1] == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        plVar3 = *(long **)(this + 0x98);
        if (plVar3 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          plVar3 = *(long **)(this + 0x98);
        }
      }
      plVar4 = (long *)plVar3[0x14];
      if (plVar4 == (long *)0x0) {
        if (plVar7 == (long *)0x0) goto joined_r0x0036b9a4;
      }
      else {
        if ((int)plVar4[1] == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        if (plVar4 == plVar7) {
          plVar3 = *(long **)(this + 0x98);
joined_r0x0036b9a4:
          if (plVar3 == (long *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
            plVar3 = *(long **)(this + 0x98);
          }
          local_40 = *(long **)(this + 0x100);
          pcVar5 = *(code **)(*plVar3 + 0x108);
          if (local_40 != (long *)0x0) {
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          }
          (*pcVar5)(_DAT_00683c38,plVar3,&local_40);
          if ((local_40 != (long *)0x0) &&
             (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
            (**(code **)(*local_40 + 8))();
          }
        }
      }
    }
  }
  if ((plVar7 != (long *)0x0) &&
     (iVar1 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
LAB_0036ba88:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


