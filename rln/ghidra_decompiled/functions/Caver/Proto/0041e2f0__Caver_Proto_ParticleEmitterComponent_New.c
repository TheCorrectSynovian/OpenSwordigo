/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041e2f0
 * Function: Caver::Proto::ParticleEmitterComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::New() const */

void Caver::Proto::ParticleEmitterComponent::New(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  
                    /* try { // try from 0041e2f0 to 0051e303 has its CatchHandler @ 0041e328 */
  plVar3 = operator_new(0x90);
                    /* try { // try from 0041e304 to 0051e32b has its CatchHandler @ 0041e2d4 */
  plVar3[4] = (long)(plVar3 + 6);
  lVar1 = DAT_0068b470;
  plVar3[8] = (long)(plVar3 + 0xb);
  *(undefined4 *)(plVar3 + 10) = 4;
  puVar2 = PTR_vtable_007e6068;
                    /* catch() { ... } // from try @ 0041e2f0 with catch @ 0041e328 */
  plVar3[9] = 0;
  *(undefined4 *)(plVar3 + 3) = 0;
  *(undefined1 *)((long)plVar3 + 0x1c) = 0;
  *(undefined8 *)((long)plVar3 + 0xd) = 0;
                    /* catch() { ... } // from try @ 0041e35c with catch @ 0041e33c
                       catch() { ... } // from try @ 0041e408 with catch @ 0041e33c */
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0;
  plVar3[5] = lVar1;
  *(undefined4 *)(plVar3 + 0x11) = 0;
  return;
}


