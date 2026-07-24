/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415c48
 * Function: Caver::Proto::PressureTriggerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::New() const */

void Caver::Proto::PressureTriggerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x30);
  puVar1 = PTR_vtable_007e5d78;
  *(undefined1 *)(plVar2 + 2) = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 5) = 0;
                    /* try { // try from 00415c6c to 00515cab has its CatchHandler @ 00415d9c */
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


