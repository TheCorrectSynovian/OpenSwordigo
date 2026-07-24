/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c4e2c
 * Function: Caver::SwingableWeaponComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SwingableWeaponComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SwingableWeaponComponent::SetValueForBindedProperty
          (SwingableWeaponComponent *this,int param_1,BindingValue *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  switch(param_1) {
  case 2:
    fVar4 = *(float *)(this + 0x1a4);
    *(undefined4 *)(this + 0x19c) = **(undefined4 **)(param_2 + 8);
    break;
  case 3:
    fVar4 = *(float *)(this + 0x1a4);
    *(undefined4 *)(this + 0x1a0) = **(undefined4 **)(param_2 + 8);
    break;
  case 4:
    fVar4 = **(float **)(param_2 + 8);
    break;
  case 5:
    BindingValue::FloatColorValue();
    SetGlowColor(this,auStack_48);
    goto LAB_003c4f18;
  case 6:
    *(undefined4 *)(this + 0x1bc) = **(undefined4 **)(param_2 + 8);
    goto LAB_003c4f18;
  case 9:
    plVar3 = *(long **)(this + 0x168);
    *(undefined8 *)(this + 0x168) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
    goto LAB_003c4f18;
  }
  SetGlowIntensity(this,fVar4);
LAB_003c4f18:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


