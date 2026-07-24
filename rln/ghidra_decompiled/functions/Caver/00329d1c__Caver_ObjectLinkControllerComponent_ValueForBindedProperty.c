/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00329d1c
 * Function: Caver::ObjectLinkControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(ObjectLinkControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::ObjectLinkControllerComponent::ValueForBindedProperty
          (ObjectLinkControllerComponent *this,int param_1)

{
  long lVar1;
  ObjectLinkControllerComponent *this_00;
  Vector3 *pVVar2;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  pVVar2 = (Vector3 *)(ulong)(uint)param_1;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(pVVar2) {
  case (Vector3 *)0x0:
    this_00 = this + 0x70;
    if (*(long *)(this + 0x78) != 0) {
      this_00 = (ObjectLinkControllerComponent *)(*(long *)(this + 0x78) + 0x50);
    }
    goto LAB_00329dc4;
  case (Vector3 *)0x1:
    this_00 = this + 0x90;
LAB_00329dc4:
    BindingValue::ValueWithString((BindingValue *)this_00,(string *)pVVar2);
    break;
  case (Vector3 *)0x2:
    BindingValue::ValueWithVector3((BindingValue *)(this + 0xec),pVVar2);
    break;
  case (Vector3 *)0x3:
    local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xf8) >> 0x20) * 57.295776,
                        (float)*(undefined8 *)(this + 0xf8) * 57.295776);
    local_30 = *(float *)(this + 0x100) * DAT_00684000;
    BindingValue::ValueWithVector3((BindingValue *)&local_38,pVVar2);
    break;
  case (Vector3 *)0x4:
    BindingValue::ValueWithVector3((BindingValue *)(this + 0x104),pVVar2);
    break;
  default:
    Component::ValueForBindedProperty((int)this);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


