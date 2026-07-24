/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411794
 * Function: Caver::Proto::AnimationControllerComponent::AnimationControllerComponent
 * Signature: undefined __thiscall AnimationControllerComponent(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::AnimationControllerComponent() */

void __thiscall
Caver::Proto::AnimationControllerComponent::AnimationControllerComponent
          (AnimationControllerComponent *this)

{
  undefined *puVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00411690 with catch @ 00411794
                        */
  puVar1 = PTR_vtable_007e78a0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  return;
}


