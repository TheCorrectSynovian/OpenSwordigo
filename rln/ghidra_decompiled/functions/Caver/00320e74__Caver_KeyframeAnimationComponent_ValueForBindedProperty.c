/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00320e74
 * Function: Caver::KeyframeAnimationComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(KeyframeAnimationComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::KeyframeAnimationComponent::ValueForBindedProperty
          (KeyframeAnimationComponent *this,int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  KeyframeAnimationComponent *pKVar5;
  int extraout_w1;
  long lVar6;
  long lVar7;
  float fVar8;
  long *local_40;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  pKVar5 = this;
  switch(param_1) {
  case 100:
    local_40 = *(long **)(this + 0x80);
    if (local_40 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      local_40 = *(long **)(this + 0x80);
      if (local_40 != (long *)0x0) goto LAB_00320fb0;
    }
    else {
LAB_00320fb0:
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    }
    Component::ValueForBindedOutlet((intrusive_ptr *)this);
    if ((local_40 != (long *)0x0) &&
       (iVar3 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*local_40 + 8))();
    }
    break;
  case 0x65:
    BindingValue::ValueWithString((BindingValue *)(this + 0x88),(string *)(ulong)(uint)param_1);
    break;
  case 0x66:
    lVar6 = *(long *)(*(long *)(this + 0x90) + 0x18);
    if (lVar6 == 0) {
      LoadAnimation(this);
      lVar6 = *(long *)(*(long *)(this + 0x90) + 0x18);
      param_1 = extraout_w1;
      if (lVar6 != 0) goto LAB_00320ef8;
      uVar1 = 0;
    }
    else {
LAB_00320ef8:
      uVar1 = *(uint *)(lVar6 + 8);
    }
    BindingValue::ValueWithInt((BindingValue *)(ulong)uVar1,param_1);
    break;
  case 0x67:
    lVar6 = *(long *)(*(long *)(this + 0x90) + 0x18);
    if (lVar6 == 0) {
      pKVar5 = (KeyframeAnimationComponent *)LoadAnimation(this);
      lVar6 = *(long *)(*(long *)(this + 0x90) + 0x18);
      if (lVar6 == 0) {
        fVar8 = 0.0;
        goto LAB_00320f6c;
      }
    }
    fVar8 = *(float *)(lVar6 + 0x20);
    goto LAB_00320f6c;
  case 0x68:
    bVar2 = *(byte *)(*(long *)(this + 0x90) + 0x2c);
    goto LAB_00320f58;
  case 0x69:
    bVar2 = *(byte *)(*(long *)(this + 0x90) + 0x38);
LAB_00320f58:
    BindingValue::ValueWithBool((BindingValue *)(ulong)bVar2,SUB41(param_1,0));
    break;
  case 0x6a:
    fVar8 = *(float *)(*(long *)(this + 0x90) + 0x30);
LAB_00320f6c:
    BindingValue::ValueWithFloat((BindingValue *)pKVar5,fVar8);
    break;
  default:
    Component::ValueForBindedProperty((int)this);
  }
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


