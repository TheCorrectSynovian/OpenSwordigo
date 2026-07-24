/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00327ecc
 * Function: Caver::ModelTransformControllerComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ModelTransformControllerComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::SetValueForBindedProperty(int, Caver::BindingValue
   const&) */

void __thiscall
Caver::ModelTransformControllerComponent::SetValueForBindedProperty
          (ModelTransformControllerComponent *this,int param_1,BindingValue *param_2)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  fVar3 = DAT_00684004;
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  switch(param_1) {
  case 1:
    uVar1 = **(undefined4 **)(param_2 + 8);
    this[0x88] = (ModelTransformControllerComponent)0x1;
    *(undefined4 *)(this + 0x8c) = uVar1;
    break;
  case 2:
    uVar1 = **(undefined4 **)(param_2 + 8);
    this[0x88] = (ModelTransformControllerComponent)0x1;
    *(undefined4 *)(this + 0x90) = uVar1;
    break;
  case 3:
    uVar1 = **(undefined4 **)(param_2 + 8);
    this[0x88] = (ModelTransformControllerComponent)0x1;
    *(undefined4 *)(this + 0x94) = uVar1;
    break;
  case 4:
    local_38 = **(undefined4 **)(param_2 + 8);
    uStack_34 = (undefined4)*(undefined8 *)(this + 0x9c);
    local_30 = (undefined4)((ulong)*(undefined8 *)(this + 0x9c) >> 0x20);
    goto LAB_00327fc4;
  case 5:
    local_38 = *(undefined4 *)(this + 0x98);
    local_30 = *(undefined4 *)(this + 0xa0);
    uStack_34 = **(undefined4 **)(param_2 + 8);
    goto LAB_00327fc4;
  case 6:
    local_30 = **(undefined4 **)(param_2 + 8);
    local_38 = (undefined4)*(undefined8 *)(this + 0x98);
    uStack_34 = (undefined4)((ulong)*(undefined8 *)(this + 0x98) >> 0x20);
LAB_00327fc4:
    Vector3::Normalize((Vector3 *)&local_38);
    *(ulong *)(this + 0x98) = CONCAT44(uStack_34,local_38);
    this[0x88] = (ModelTransformControllerComponent)0x1;
    *(undefined4 *)(this + 0xa0) = local_30;
    break;
  case 7:
    fVar4 = **(float **)(param_2 + 8);
    this[0x88] = (ModelTransformControllerComponent)0x1;
    *(float *)(this + 0xa4) = fVar4 * fVar3;
    break;
  case 8:
    *(float *)(this + 0xa8) = **(float **)(param_2 + 8) * DAT_00684004;
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


