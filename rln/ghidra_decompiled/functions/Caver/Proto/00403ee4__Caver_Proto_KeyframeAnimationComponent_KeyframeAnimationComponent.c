/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00403ee4
 * Function: Caver::Proto::KeyframeAnimationComponent::KeyframeAnimationComponent
 * Signature: undefined __thiscall KeyframeAnimationComponent(KeyframeAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::KeyframeAnimationComponent::KeyframeAnimationComponent() */

void __thiscall
Caver::Proto::KeyframeAnimationComponent::KeyframeAnimationComponent
          (KeyframeAnimationComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e73c8;
  *(undefined8 *)(this + 8) = 0;
  puVar1 = PTR__default_name__007e5890;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x1c) = 0;
  return;
}


