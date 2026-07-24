/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434de0
 * Function: Caver::Proto::FireBreathComponent::FireBreathComponent
 * Signature: undefined __thiscall FireBreathComponent(FireBreathComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::FireBreathComponent() */

void __thiscall Caver::Proto::FireBreathComponent::FireBreathComponent(FireBreathComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6388;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
                    /* try { // try from 00434df8 to 00534e0b has its CatchHandler @ 0043524c */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  return;
}


