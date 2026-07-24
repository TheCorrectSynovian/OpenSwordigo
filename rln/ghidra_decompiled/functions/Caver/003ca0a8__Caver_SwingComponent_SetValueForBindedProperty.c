/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ca0a8
 * Function: Caver::SwingComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(SwingComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::SwingComponent::SetValueForBindedProperty
          (SwingComponent *this,int param_1,BindingValue *param_2)

{
  long lVar1;
  KeyframeAnimationComponent *pKVar2;
  float fVar3;
  float fVar4;
  
  switch(param_1) {
  case 1:
    this[0x90] = **(SwingComponent **)(param_2 + 8);
    break;
  case 2:
    this[0x91] = **(SwingComponent **)(param_2 + 8);
    break;
  case 3:
    pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
    if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
      if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
        return;
      }
    }
    if ((*(long *)(*(long *)(pKVar2 + 0x90) + 0x18) != 0) ||
       (KeyframeAnimationComponent::LoadAnimation(pKVar2),
       *(long *)(*(long *)(pKVar2 + 0x90) + 0x18) != 0)) {
      pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
      if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
      }
      lVar1 = *(long *)(*(long *)(pKVar2 + 0x90) + 0x18);
      if (lVar1 == 0) {
        KeyframeAnimationComponent::LoadAnimation(pKVar2);
        lVar1 = *(long *)(*(long *)(pKVar2 + 0x90) + 0x18);
      }
      fVar3 = **(float **)(param_2 + 8);
      fVar4 = fVar3;
      if (fVar3 <= 0.0) {
        fVar4 = 0.0;
      }
      if (fVar4 <= (float)*(int *)(lVar1 + 8)) {
        fVar4 = 0.0;
        if (0.0 <= fVar3) {
          fVar4 = fVar3;
        }
        *(float *)(this + 0x88) = fVar4;
      }
      else {
        pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
        if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
        }
        lVar1 = *(long *)(*(long *)(pKVar2 + 0x90) + 0x18);
        if (lVar1 == 0) {
          KeyframeAnimationComponent::LoadAnimation(pKVar2);
          lVar1 = *(long *)(*(long *)(pKVar2 + 0x90) + 0x18);
        }
        *(float *)(this + 0x88) = (float)*(int *)(lVar1 + 8);
      }
    }
    break;
  case 4:
    pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
    if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
      if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
        return;
      }
    }
    if ((*(long *)(*(long *)(pKVar2 + 0x90) + 0x18) == 0) &&
       (KeyframeAnimationComponent::LoadAnimation(pKVar2),
       *(long *)(*(long *)(pKVar2 + 0x90) + 0x18) == 0)) {
      return;
    }
    pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
    if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
    }
    lVar1 = *(long *)(*(long *)(pKVar2 + 0x90) + 0x18);
    if (lVar1 == 0) {
      KeyframeAnimationComponent::LoadAnimation(pKVar2);
      lVar1 = *(long *)(*(long *)(pKVar2 + 0x90) + 0x18);
    }
    fVar3 = **(float **)(param_2 + 8);
    fVar4 = fVar3;
    if (fVar3 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar4 <= (float)*(int *)(lVar1 + 8)) {
      fVar4 = 0.0;
      if (0.0 <= fVar3) {
        fVar4 = fVar3;
      }
      *(float *)(this + 0x8c) = fVar4;
      return;
    }
    pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
joined_r0x003ca14c:
    if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
    }
    lVar1 = *(long *)(*(long *)(pKVar2 + 0x90) + 0x18);
    if (lVar1 == 0) {
      KeyframeAnimationComponent::LoadAnimation(pKVar2);
      lVar1 = *(long *)(*(long *)(pKVar2 + 0x90) + 0x18);
    }
    *(float *)(this + 0x8c) = (float)*(int *)(lVar1 + 8);
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
    if (param_1 != 0) {
      return;
    }
    pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
    if (pKVar2 == (KeyframeAnimationComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
      if (pKVar2 != (KeyframeAnimationComponent *)0x0) goto LAB_003ca124;
    }
    else {
LAB_003ca124:
      if ((*(long *)(*(long *)(pKVar2 + 0x90) + 0x18) != 0) ||
         (KeyframeAnimationComponent::LoadAnimation(pKVar2),
         *(long *)(*(long *)(pKVar2 + 0x90) + 0x18) != 0)) {
        pKVar2 = *(KeyframeAnimationComponent **)(this + 0x80);
        *(undefined4 *)(this + 0x88) = 0;
        goto joined_r0x003ca14c;
      }
    }
    *(undefined8 *)(this + 0x88) = 0;
  }
  return;
}


