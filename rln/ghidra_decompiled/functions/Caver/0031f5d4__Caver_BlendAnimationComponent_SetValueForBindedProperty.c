/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f5d4
 * Function: Caver::BlendAnimationComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(BlendAnimationComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::BlendAnimationComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::BlendAnimationComponent::SetValueForBindedProperty
          (BlendAnimationComponent *this,int param_1,BindingValue *param_2)

{
  AnimationComponent *pAVar1;
  Component *this_00;
  
  if ((uint)param_1 < 4) {
    this_00 = (Component *)(this + -0x10);
    switch(param_1) {
    case 0:
      pAVar1 = (AnimationComponent *)
               Component::ComponentWithIdentifier(this_00,**(int **)(param_2 + 8));
      setAnimation1((BlendAnimationComponent *)this_00,pAVar1);
      return;
    case 1:
      pAVar1 = (AnimationComponent *)
               Component::ComponentWithIdentifier(this_00,**(int **)(param_2 + 8));
      setAnimation2((BlendAnimationComponent *)this_00,pAVar1);
      return;
    case 2:
      *(undefined4 *)(*(long *)(this + 0x68) + 0x24) = **(undefined4 **)(param_2 + 8);
      break;
    case 3:
      *(undefined4 *)(*(long *)(this + 0x68) + 0x28) = **(undefined4 **)(param_2 + 8);
    }
  }
  return;
}


