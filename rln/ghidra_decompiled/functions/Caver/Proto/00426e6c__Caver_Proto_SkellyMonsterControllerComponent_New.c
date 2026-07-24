/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426e6c
 * Function: Caver::Proto::SkellyMonsterControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkellyMonsterControllerComponent::New() const */

void Caver::Proto::SkellyMonsterControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x18);
  puVar1 = PTR_vtable_007e4c78;
                    /* try { // try from 00426e7c to 00526e7f has its CatchHandler @ 00426f08 */
                    /* try { // try from 00426e80 to 00526f1f has its CatchHandler @ 00426d64 */
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


