/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434e14
 * Function: Caver::Proto::FireBreathComponent::FireBreathComponent
 * Signature: undefined __thiscall FireBreathComponent(FireBreathComponent * this, FireBreathComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::FireBreathComponent(Caver::Proto::FireBreathComponent const&)
    */

void __thiscall
Caver::Proto::FireBreathComponent::FireBreathComponent
          (FireBreathComponent *this,FireBreathComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6388;
                    /* try { // try from 00434e1c to 00534e27 has its CatchHandler @ 00435214 */
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  MergeFrom(this,param_1);
                    /* try { // try from 00434e48 to 00534e83 has its CatchHandler @ 004351b8 */
  return;
}


