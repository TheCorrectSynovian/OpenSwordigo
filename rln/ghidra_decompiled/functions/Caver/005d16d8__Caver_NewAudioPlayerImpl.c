/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d16d8
 * Function: Caver::NewAudioPlayerImpl
 * Signature: undefined __cdecl NewAudioPlayerImpl(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewAudioPlayerImpl() */

void Caver::NewAudioPlayerImpl(void)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 005d16d8 to 006d16df has its CatchHandler @ 005d2ae4 */
                    /* try { // try from 005d16e0 to 006d16eb has its CatchHandler @ 005d34e0 */
  plVar2 = operator_new(0x18);
  puVar1 = PTR_vtable_007e63c8;
                    /* try { // try from 005d16ec to 006d16f3 has its CatchHandler @ 005d2ae0 */
                    /* try { // try from 005d16f4 to 006d1763 has its CatchHandler @ 005d34e0 */
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined1 *)((long)plVar2 + 0xc) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 2) = 0x3f800000;
  return;
}


