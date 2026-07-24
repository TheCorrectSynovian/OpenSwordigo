/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00355538
 * Function: Caver::BreakableObjectComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(BreakableObjectComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::BreakableObjectComponent::SetValueForBindedProperty
          (BreakableObjectComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Program aPStack_70 [8];
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  switch(param_1) {
  case 0:
    this[0x71] = **(BreakableObjectComponent **)(param_2 + 8);
    break;
  case 1:
    *(undefined4 *)(this + 0x74) = **(undefined4 **)(param_2 + 8);
    break;
  case 2:
    *(undefined4 *)(this + 0x78) = **(undefined4 **)(param_2 + 8);
    break;
  case 3:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0x80,aPStack_70);
    if (lStack_60 != 0) {
      *(long *)(lStack_60 + 8) = *(long *)(lStack_60 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0x90);
    *(undefined8 *)(this + 0x88) = local_68;
    *(long *)(this + 0x90) = lStack_60;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0xa0);
    *(undefined8 *)(this + 0x98) = local_58;
    *(long *)(this + 0xa0) = lStack_50;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    Program::~Program(aPStack_70);
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


