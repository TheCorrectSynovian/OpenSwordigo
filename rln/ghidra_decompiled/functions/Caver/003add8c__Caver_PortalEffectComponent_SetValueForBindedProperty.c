/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003add8c
 * Function: Caver::PortalEffectComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(PortalEffectComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::PortalEffectComponent::SetValueForBindedProperty
          (PortalEffectComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0x67) {
    BindingValue::Vector3Value();
    *(undefined8 *)(this + 200) = local_38;
    *(undefined4 *)(this + 0xd0) = uStack_30;
  }
  else if (param_1 == 0x66) {
    BindingValue::FloatColorValue();
    *(ulong *)(this + 0xc0) = CONCAT44(uStack_2c,uStack_30);
    *(undefined8 *)(this + 0xb8) = local_38;
    CreateVertices(this);
  }
  else {
    GlowComponent::SetValueForBindedProperty((GlowComponent *)this,param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


