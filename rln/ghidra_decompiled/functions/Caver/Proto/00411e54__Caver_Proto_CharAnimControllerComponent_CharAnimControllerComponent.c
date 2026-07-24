/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411e54
 * Function: Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent
 * Signature: undefined __thiscall CharAnimControllerComponent(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent() */

void __thiscall
Caver::Proto::CharAnimControllerComponent::CharAnimControllerComponent
          (CharAnimControllerComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e61f0;
                    /* try { // try from 00411e5c to 00511e83 has its CatchHandler @ 00411e8c */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


