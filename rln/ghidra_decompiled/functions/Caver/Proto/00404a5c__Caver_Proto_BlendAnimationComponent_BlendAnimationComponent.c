/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404a5c
 * Function: Caver::Proto::BlendAnimationComponent::BlendAnimationComponent
 * Signature: undefined __thiscall BlendAnimationComponent(BlendAnimationComponent * this, BlendAnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BlendAnimationComponent::BlendAnimationComponent(Caver::Proto::BlendAnimationComponent
   const&) */

void __thiscall
Caver::Proto::BlendAnimationComponent::BlendAnimationComponent
          (BlendAnimationComponent *this,BlendAnimationComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7198;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


