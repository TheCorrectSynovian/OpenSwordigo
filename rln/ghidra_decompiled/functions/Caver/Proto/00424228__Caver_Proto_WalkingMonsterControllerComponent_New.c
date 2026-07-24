/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424228
 * Function: Caver::Proto::WalkingMonsterControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::New() const */

void Caver::Proto::WalkingMonsterControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 00424230 to 00524257 has its CatchHandler @ 0042425c */
  plVar2 = operator_new(0x18);
  puVar1 = PTR_vtable_007e63f8;
  *(undefined4 *)(plVar2 + 2) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


