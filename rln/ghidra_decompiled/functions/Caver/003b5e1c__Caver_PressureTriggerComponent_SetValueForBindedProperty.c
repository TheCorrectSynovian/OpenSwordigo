/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b5e1c
 * Function: Caver::PressureTriggerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(PressureTriggerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::PressureTriggerComponent::SetValueForBindedProperty
          (PressureTriggerComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Program aPStack_60 [8];
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch(param_1) {
  case 0:
    *(undefined4 *)(this + 0x78) = **(undefined4 **)(param_2 + 8);
    break;
  case 1:
    this[0xd8] = **(PressureTriggerComponent **)(param_2 + 8);
    break;
  case 2:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0x88,aPStack_60);
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0x98);
    *(undefined8 *)(this + 0x90) = local_58;
    *(long *)(this + 0x98) = lStack_50;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    if (lStack_40 != 0) {
      *(long *)(lStack_40 + 8) = *(long *)(lStack_40 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0xa8);
    *(undefined8 *)(this + 0xa0) = local_48;
    *(long *)(this + 0xa8) = lStack_40;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    goto LAB_003b6024;
  case 3:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0xb0,aPStack_60);
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0xc0);
    *(undefined8 *)(this + 0xb8) = local_58;
    *(long *)(this + 0xc0) = lStack_50;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    if (lStack_40 != 0) {
      *(long *)(lStack_40 + 8) = *(long *)(lStack_40 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0xd0);
    *(undefined8 *)(this + 200) = local_48;
    *(long *)(this + 0xd0) = lStack_40;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
LAB_003b6024:
    Program::~Program(aPStack_60);
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


