/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f310
 * Function: Caver::PhysicsObjectComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(PhysicsObjectComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::PhysicsObjectComponent::SetValueForBindedProperty
          (PhysicsObjectComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(param_1) {
  case 0:
    this[0x70] = **(PhysicsObjectComponent **)(param_2 + 8);
    break;
  case 1:
    *(float *)(this + 0xe8) = **(float **)(param_2 + 8) * DAT_0068796c;
    break;
  case 2:
    uStack_2c = *(undefined4 *)(this + 0xe4);
    local_30 = **(undefined4 **)(param_2 + 8);
    goto LAB_0037f394;
  case 3:
    local_30 = *(undefined4 *)(this + 0xe0);
    uStack_2c = **(undefined4 **)(param_2 + 8);
LAB_0037f394:
    Vector2::Normalize((Vector2 *)&local_30);
    *(ulong *)(this + 0xe0) = CONCAT44(uStack_2c,local_30);
    break;
  case 4:
    *(undefined4 *)(this + 0x10c) = **(undefined4 **)(param_2 + 8);
    break;
  case 5:
    *(undefined4 *)(this + 0x110) = **(undefined4 **)(param_2 + 8);
    break;
  case 6:
    *(undefined4 *)(this + 0xac) = **(undefined4 **)(param_2 + 8);
    break;
  case 7:
    this[0xed] = **(PhysicsObjectComponent **)(param_2 + 8);
    break;
  case 8:
    *(undefined4 *)(this + 0xf0) = **(undefined4 **)(param_2 + 8);
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


