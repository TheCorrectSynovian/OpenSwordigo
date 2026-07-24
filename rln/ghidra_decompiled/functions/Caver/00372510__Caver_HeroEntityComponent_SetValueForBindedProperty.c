/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00372510
 * Function: Caver::HeroEntityComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(HeroEntityComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::HeroEntityComponent::SetValueForBindedProperty
          (HeroEntityComponent *this,int param_1,BindingValue *param_2)

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
  if (param_1 == 100) {
    BindingValue::ProgramValue();
    FUN_0066a6a8(this + 0x150,aPStack_60);
    if (lStack_50 != 0) {
      *(long *)(lStack_50 + 8) = *(long *)(lStack_50 + 8) + 1;
    }
    plVar3 = *(long **)(this + 0x160);
    *(undefined8 *)(this + 0x158) = local_58;
    *(long *)(this + 0x160) = lStack_50;
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
    plVar3 = *(long **)(this + 0x170);
    *(undefined8 *)(this + 0x168) = local_48;
    *(long *)(this + 0x170) = lStack_40;
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    Program::~Program(aPStack_60);
  }
  else {
    EntityComponent::SetValueForBindedProperty((EntityComponent *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


