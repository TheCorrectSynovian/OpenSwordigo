/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b08bc
 * Function: Caver::SimpleGlowComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SimpleGlowComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SimpleGlowComponent::SetValueForBindedProperty
          (SimpleGlowComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  switch(param_1) {
  case 100:
    BindingValue::FloatColorValue();
    *(undefined8 *)(this + 0xac) = uStack_30;
    *(undefined8 *)(this + 0xa4) = local_38;
    goto LAB_003b0960;
  case 0x65:
    *(undefined4 *)(this + 0xb4) = **(undefined4 **)(param_2 + 8);
    goto LAB_003b0960;
  case 0x66:
    *(undefined4 *)(this + 0xb8) = **(undefined4 **)(param_2 + 8);
LAB_003b0960:
    CreateVertexData();
    break;
  case 0x67:
    *(undefined4 *)(this + 0xc4) = **(undefined4 **)(param_2 + 8);
    break;
  case 0x68:
    *(undefined4 *)(this + 0xbc) = **(undefined4 **)(param_2 + 8);
    break;
  case 0x69:
    *(undefined4 *)(this + 0xc0) = **(undefined4 **)(param_2 + 8);
    break;
  case 0x6a:
    *(undefined4 *)(this + 0xcc) = **(undefined4 **)(param_2 + 8);
    break;
  case 0x6b:
    *(undefined4 *)(this + 0xd0) = **(undefined4 **)(param_2 + 8);
    break;
  default:
    GlowComponent::SetValueForBindedProperty((GlowComponent *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


