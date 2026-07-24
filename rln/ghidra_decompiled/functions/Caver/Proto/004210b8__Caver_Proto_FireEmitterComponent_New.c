/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004210b8
 * Function: Caver::Proto::FireEmitterComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::New() const */

void Caver::Proto::FireEmitterComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 004210c0 to 00521103 has its CatchHandler @ 004212a4 */
  plVar2 = operator_new(0x48);
  puVar1 = PTR_vtable_007e5028;
  *(undefined4 *)(plVar2 + 2) = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  *(undefined4 *)(plVar2 + 8) = 0;
  return;
}


