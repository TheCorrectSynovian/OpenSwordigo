/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004158a8
 * Function: Caver::Proto::PressureTriggerComponent::PressureTriggerComponent
 * Signature: undefined __thiscall PressureTriggerComponent(PressureTriggerComponent * this, PressureTriggerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::PressureTriggerComponent(Caver::Proto::PressureTriggerComponent
   const&) */

void __thiscall
Caver::Proto::PressureTriggerComponent::PressureTriggerComponent
          (PressureTriggerComponent *this,PressureTriggerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5d78;
  this[0x10] = (PressureTriggerComponent)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* try { // try from 004158cc to 005158d3 has its CatchHandler @ 00415920 */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 0;
                    /* try { // try from 004158d4 to 00515977 has its CatchHandler @ 004158a0 */
  MergeFrom(this,param_1);
  return;
}


