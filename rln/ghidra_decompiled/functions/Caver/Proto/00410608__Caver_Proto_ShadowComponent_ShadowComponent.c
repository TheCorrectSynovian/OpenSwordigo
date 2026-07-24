/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410608
 * Function: Caver::Proto::ShadowComponent::ShadowComponent
 * Signature: undefined __thiscall ShadowComponent(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::ShadowComponent() */

void __thiscall Caver::Proto::ShadowComponent::ShadowComponent(ShadowComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7e98;
                    /* catch() { ... } // from try @ 0040e988 with catch @ 0041060c */
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  return;
}


