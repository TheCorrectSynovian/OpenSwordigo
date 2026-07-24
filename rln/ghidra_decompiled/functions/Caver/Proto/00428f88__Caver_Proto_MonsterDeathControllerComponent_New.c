/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428f88
 * Function: Caver::Proto::MonsterDeathControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::New() const */

void Caver::Proto::MonsterDeathControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x18);
  puVar1 = PTR_vtable_007e4ca0;
  *(undefined4 *)(plVar2 + 2) = 0;
                    /* try { // try from 00428fa4 to 00528faf has its CatchHandler @ 0042988c */
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


