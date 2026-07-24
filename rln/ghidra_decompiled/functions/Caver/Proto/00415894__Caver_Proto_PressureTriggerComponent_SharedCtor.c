/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415894
 * Function: Caver::Proto::PressureTriggerComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(PressureTriggerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::SharedCtor() */

void __thiscall Caver::Proto::PressureTriggerComponent::SharedCtor(PressureTriggerComponent *this)

{
  this[0x10] = (PressureTriggerComponent)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004158d4 with catch @ 004158a0
                       catch(type#1 @ 00000000) { ... } // from try @ 0041599c with catch @ 004158a0
                        */
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


