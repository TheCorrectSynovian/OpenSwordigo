/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037bb28
 * Function: Caver::MonsterEntityComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(MonsterEntityComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::MonsterEntityComponent::SetValueForBindedProperty
          (MonsterEntityComponent *this,int param_1,BindingValue *param_2)

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
  case 100:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0x130,aPStack_60);
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0x140);
    *(undefined8 *)(this + 0x138) = local_58;
    *(long *)(this + 0x140) = lStack_50;
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
    plVar3 = *(long **)(this + 0x150);
    *(undefined8 *)(this + 0x148) = local_48;
    *(long *)(this + 0x150) = lStack_40;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    goto LAB_0037bd40;
  case 0x65:
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0x158,aPStack_60);
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0x168);
    *(undefined8 *)(this + 0x160) = local_58;
    *(long *)(this + 0x168) = lStack_50;
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
    plVar3 = *(long **)(this + 0x178);
    *(undefined8 *)(this + 0x170) = local_48;
    *(long *)(this + 0x178) = lStack_40;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
LAB_0037bd40:
    Program::~Program(aPStack_60);
    break;
  case 0x66:
    this[0x198] = **(MonsterEntityComponent **)(param_2 + 8);
    break;
  case 0x67:
    this[0x19a] = **(MonsterEntityComponent **)(param_2 + 8);
    break;
  default:
    EntityComponent::SetValueForBindedProperty((EntityComponent *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


