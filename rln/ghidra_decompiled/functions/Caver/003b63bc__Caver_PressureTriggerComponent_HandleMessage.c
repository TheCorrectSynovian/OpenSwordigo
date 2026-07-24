/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b63bc
 * Function: Caver::PressureTriggerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(PressureTriggerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::PressureTriggerComponent::HandleMessage
          (PressureTriggerComponent *this,int param_1,void *param_2)

{
  if (((param_1 == 7) && (*(float *)((long)param_2 + 0x2c) < DAT_00687f44)) &&
     (*(char *)(*(long *)((long)param_2 + 8) + 0x17b) != '\0')) {
    *(undefined4 *)(this + 0x70) = 0;
  }
  return 0;
}


