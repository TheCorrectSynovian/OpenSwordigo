/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f52c
 * Function: Caver::BlendAnimationComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(BlendAnimationComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::BlendAnimationComponent::SetValueForBindedProperty
          (BlendAnimationComponent *this,int param_1,BindingValue *param_2)

{
  AnimationComponent *pAVar1;
  
  switch(param_1) {
  case 0:
    pAVar1 = (AnimationComponent *)
             Component::ComponentWithIdentifier((Component *)this,**(int **)(param_2 + 8));
    setAnimation1(this,pAVar1);
    return;
  case 1:
    pAVar1 = (AnimationComponent *)
             Component::ComponentWithIdentifier((Component *)this,**(int **)(param_2 + 8));
    setAnimation2(this,pAVar1);
    return;
  case 2:
    *(undefined4 *)(*(long *)(this + 0x78) + 0x24) = **(undefined4 **)(param_2 + 8);
    break;
  case 3:
    *(undefined4 *)(*(long *)(this + 0x78) + 0x28) = **(undefined4 **)(param_2 + 8);
  }
  return;
}


