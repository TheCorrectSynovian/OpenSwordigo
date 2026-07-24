/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b9bc
 * Function: Caver::Proto::HeroEntityComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::New() const */

void Caver::Proto::HeroEntityComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0041b9bc to 0051b9c3 has its CatchHandler @ 0041ba20 */
                    /* try { // try from 0041b9c4 to 0051ba3b has its CatchHandler @ 0041b980 */
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e77d8;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


