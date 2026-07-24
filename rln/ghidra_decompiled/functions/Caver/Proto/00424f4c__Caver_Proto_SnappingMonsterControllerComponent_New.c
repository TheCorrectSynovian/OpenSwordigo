/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424f4c
 * Function: Caver::Proto::SnappingMonsterControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SnappingMonsterControllerComponent::New() const */

void Caver::Proto::SnappingMonsterControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x28);
  puVar1 = PTR_vtable_007e74f0;
                    /* try { // try from 00424f64 to 005258ef has its CatchHandler @ 004249d0 */
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 4) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


