/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004350fc
 * Function: Caver::Proto::FireBreathComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::New() const */

void Caver::Proto::FireBreathComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x28);
  puVar1 = PTR_vtable_007e6388;
  *(undefined4 *)(plVar2 + 2) = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 4) = 0;
                    /* catch() { ... } // from try @ 00434efc with catch @ 00435120 */
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


