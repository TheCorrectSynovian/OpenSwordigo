/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f2ec
 * Function: Caver::BlendAnimationComponent::ValueForBindedProperty
 * Signature: undefined __cdecl ValueForBindedProperty(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::ValueForBindedProperty(int) */

void Caver::BlendAnimationComponent::ValueForBindedProperty(int param_1)

{
  int iVar1;
  long lVar2;
  BindingValue *this;
  AnimationComponent *pAVar3;
  undefined4 in_w1;
  undefined4 *in_x8;
  long lVar4;
  long lVar5;
  float fVar6;
  long *local_40;
  
  this = (BindingValue *)(ulong)(uint)param_1;
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  switch(in_w1) {
  case 0:
    if ((this[0x70] == (BindingValue)0x0) && (*(SceneObject **)(this + 0x28) != (SceneObject *)0x0))
    {
      this[0x70] = (BindingValue)0x1;
      if (*(long *)(this + 0x88) == 0) {
        pAVar3 = (AnimationComponent *)
                 SceneObject::ComponentWithIdentifier
                           (*(SceneObject **)(this + 0x28),*(int *)(this + 0x80));
        setAnimation1((BlendAnimationComponent *)this,pAVar3);
      }
      if (*(long *)(this + 0x98) == 0) {
        pAVar3 = (AnimationComponent *)
                 SceneObject::ComponentWithIdentifier
                           (*(SceneObject **)(this + 0x28),*(int *)(this + 0x90));
        setAnimation2((BlendAnimationComponent *)this,pAVar3);
      }
    }
    local_40 = *(long **)(this + 0x88);
    if (local_40 != (long *)0x0) {
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    }
    Component::ValueForBindedOutlet((intrusive_ptr *)this);
    break;
  case 1:
    if ((this[0x70] == (BindingValue)0x0) && (*(SceneObject **)(this + 0x28) != (SceneObject *)0x0))
    {
      this[0x70] = (BindingValue)0x1;
      if (*(long *)(this + 0x88) == 0) {
        pAVar3 = (AnimationComponent *)
                 SceneObject::ComponentWithIdentifier
                           (*(SceneObject **)(this + 0x28),*(int *)(this + 0x80));
        setAnimation1((BlendAnimationComponent *)this,pAVar3);
      }
      if (*(long *)(this + 0x98) == 0) {
        pAVar3 = (AnimationComponent *)
                 SceneObject::ComponentWithIdentifier
                           (*(SceneObject **)(this + 0x28),*(int *)(this + 0x90));
        setAnimation2((BlendAnimationComponent *)this,pAVar3);
      }
    }
    local_40 = *(long **)(this + 0x98);
    if (local_40 != (long *)0x0) {
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    }
    Component::ValueForBindedOutlet((intrusive_ptr *)this);
    break;
  case 2:
    lVar5 = *(long *)(this + 0x78);
LAB_0031f380:
    fVar6 = *(float *)(lVar5 + 0x24);
    goto LAB_0031f384;
  case 3:
    lVar5 = *(long *)(this + 0x78);
    fVar6 = *(float *)(lVar5 + 0x28);
    if (fVar6 <= 0.0) goto LAB_0031f380;
LAB_0031f384:
    BindingValue::ValueWithFloat(this,fVar6);
    goto LAB_0031f3f4;
  default:
    *in_x8 = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    goto LAB_0031f3f4;
  }
  if ((local_40 != (long *)0x0) &&
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
LAB_0031f3f4:
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


