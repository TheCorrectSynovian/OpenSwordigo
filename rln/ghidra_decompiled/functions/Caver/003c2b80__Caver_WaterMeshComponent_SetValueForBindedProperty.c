/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c2b80
 * Function: Caver::WaterMeshComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(WaterMeshComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::WaterMeshComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::WaterMeshComponent::SetValueForBindedProperty
          (WaterMeshComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 == 3) {
    BindingValue::FloatColorValue();
    *(undefined8 *)(this + 0xb8) = uStack_40;
    *(undefined8 *)(this + 0xb0) = local_48;
  }
  else if (param_1 == 2) {
    BindingValue::FloatColorValue();
    *(undefined8 *)(this + 0xa8) = uStack_40;
    *(undefined8 *)(this + 0xa0) = local_48;
  }
  else {
    Component::SetValueForBindedProperty((Component *)(this + -0x10),param_1,param_2);
    if (param_1 == 1) {
      CreateMesh(this + -0x10);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


