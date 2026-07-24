/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042da58
 * Function: Caver::Proto::SpawnPointComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::New() const */

void Caver::Proto::SpawnPointComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e5ed8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
                    /* catch() { ... } // from try @ 0042d5dc with catch @ 0042da7c */
  *plVar2 = (long)(puVar1 + 0x10);
                    /* catch() { ... } // from try @ 0042d580 with catch @ 0042da80 */
  return;
}


