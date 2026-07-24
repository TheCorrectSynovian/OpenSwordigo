/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031fd9c
 * Function: Caver::KeyframeAnimationComponent::InitWithAnimation
 * Signature: undefined __thiscall InitWithAnimation(KeyframeAnimationComponent * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation
   const> const&) */

void __thiscall
Caver::KeyframeAnimationComponent::InitWithAnimation
          (KeyframeAnimationComponent *this,shared_ptr *param_1)

{
  ulong uVar1;
  
  if (*(long *)param_1 != 0) {
    FUN_0066a6a8(this + 0x88);
    AnimKeysNode::InitWithAnimation(*(AnimKeysNode **)(this + 0x90),param_1);
  }
  uVar1 = Component::ShouldPrepare((Component *)this);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0031fdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x40))(this);
    return;
  }
  return;
}


