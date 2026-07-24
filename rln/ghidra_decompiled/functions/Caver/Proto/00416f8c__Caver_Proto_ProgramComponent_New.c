/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416f8c
 * Function: Caver::Proto::ProgramComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::New() const */

void Caver::Proto::ProgramComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00416f80 with catch @ 00416f90 */
  plVar2 = operator_new(0x28);
  puVar1 = PTR_vtable_007e7708;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined2 *)((long)plVar2 + 0xc) = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 2) = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 4) = 0;
  return;
}


