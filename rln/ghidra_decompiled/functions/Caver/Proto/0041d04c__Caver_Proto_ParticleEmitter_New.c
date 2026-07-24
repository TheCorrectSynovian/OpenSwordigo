/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041d04c
 * Function: Caver::Proto::ParticleEmitter::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::New() const */

void Caver::Proto::ParticleEmitter::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041d004 with catch @ 0041d054
                        */
  plVar3 = operator_new(0x58);
  plVar3[6] = (long)(plVar3 + 8);
  puVar2 = PTR_vtable_007e5278;
  lVar1 = DAT_0068b470;
                    /* try { // try from 0041d070 to 0051d077 has its CatchHandler @ 0041d080 */
  *(undefined4 *)(plVar3 + 10) = 0;
                    /* try { // try from 0041d078 to 0051d083 has its CatchHandler @ 0041cf84 */
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041d070 with catch @ 0041d080
                        */
                    /* catch() { ... } // from try @ 0041d168 with catch @ 0041d084
                       catch() { ... } // from try @ 0041d22c with catch @ 0041d084 */
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[7] = lVar1;
  *(undefined4 *)(plVar3 + 5) = 0;
  return;
}


