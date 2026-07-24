/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00425aa0
 * Function: Caver::Proto::AttackComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::New() const */

void Caver::Proto::AttackComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x50);
  puVar1 = PTR_vtable_007e66a0;
                    /* try { // try from 00425ab0 to 00525ad7 has its CatchHandler @ 00425c8c */
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[4] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 9) = 0;
                    /* try { // try from 00425ad8 to 00525c5b has its CatchHandler @ 00425a10 */
  return;
}


