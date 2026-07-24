/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004190bc
 * Function: Caver::Proto::BreakableObjectComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::New() const */

void Caver::Proto::BreakableObjectComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x28);
  puVar1 = PTR_vtable_007e7a60;
                    /* catch() { ... } // from try @ 004188d4 with catch @ 004190d4 */
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined1 *)((long)plVar2 + 0xc) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 4) = 0;
  return;
}


