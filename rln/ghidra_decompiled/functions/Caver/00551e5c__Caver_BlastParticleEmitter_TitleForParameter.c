/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00551e5c
 * Function: Caver::BlastParticleEmitter::TitleForParameter
 * Signature: undefined __cdecl TitleForParameter(uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlastParticleEmitter::TitleForParameter(unsigned int) */

void Caver::BlastParticleEmitter::TitleForParameter(uint param_1)

{
  long lVar1;
  int iVar2;
  ulong in_x1;
  undefined8 in_x8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_titles_007e5a80 & 1) == 0) {
                    /* try { // try from 00551ecc to 00651ed3 has its CatchHandler @ 005527a4 */
    iVar2 = __cxa_guard_acquire(PTR_titles_007e5a80);
    if (iVar2 != 0) {
      FUN_00666bb8(PTR_titles_007e4870,"blastSize",auStack_48);
      FUN_00666bb8(PTR_titles_007e4870 + 8,"blastDuration",auStack_50);
      FUN_00666bb8(PTR_titles_007e4870 + 0x10,"particleWidth",auStack_58);
      FUN_00666bb8(PTR_titles_007e4870 + 0x18,"particleHeight",auStack_60);
      __cxa_atexit(FUN_0030b1f0,0,&PTR_LOOP_007e8000);
                    /* try { // try from 00551f74 to 00651f87 has its CatchHandler @ 005526bc */
      __cxa_guard_release(PTR_titles_007e5a80);
    }
  }
                    /* try { // try from 00551e98 to 00651e9f has its CatchHandler @ 005527e0 */
  FUN_0066a528(in_x8,PTR_titles_007e4870 + (in_x1 & 0xffffffff) * 8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00551eb4 to 00651ec7 has its CatchHandler @ 005527dc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


