/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004268b8
 * Function: Caver::Proto::LeapingMonsterControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::New() const */

void Caver::Proto::LeapingMonsterControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x18);
  puVar1 = PTR_vtable_007e5350;
                    /* try { // try from 004268c8 to 005268d3 has its CatchHandler @ 0042675c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00426858 with catch @ 004268d0
                        */
  plVar2[1] = 0;
  plVar2[2] = 0;
                    /* catch() { ... } // from try @ 004269d8 with catch @ 004268d4 */
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


