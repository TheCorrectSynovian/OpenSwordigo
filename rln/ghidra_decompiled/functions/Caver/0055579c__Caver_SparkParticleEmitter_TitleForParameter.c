/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055579c
 * Function: Caver::SparkParticleEmitter::TitleForParameter
 * Signature: undefined __cdecl TitleForParameter(uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SparkParticleEmitter::TitleForParameter(unsigned int) */

void Caver::SparkParticleEmitter::TitleForParameter(uint param_1)

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
                    /* catch() { ... } // from try @ 005547c0 with catch @ 005557c4
                       catch() { ... } // from try @ 00554834 with catch @ 005557c4 */
  if ((*PTR_titles_007e5248 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_titles_007e5248);
    if (iVar2 != 0) {
      FUN_00666bb8(PTR_titles_007e7f70,"blastSize",auStack_48);
      FUN_00666bb8(PTR_titles_007e7f70 + 8,"blastDuration",auStack_50);
                    /* catch() { ... } // from try @ 00554d84 with catch @ 00555868 */
      FUN_00666bb8(PTR_titles_007e7f70 + 0x10,"particleWidth",auStack_58);
      FUN_00666bb8(PTR_titles_007e7f70 + 0x18,"particleHeight",auStack_60);
      __cxa_atexit(FUN_0030b58c,0,&PTR_LOOP_007e8000);
      __cxa_guard_release(PTR_titles_007e5248);
    }
  }
  FUN_0066a528(in_x8,PTR_titles_007e7f70 + (in_x1 & 0xffffffff) * 8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00554670 with catch @ 00555804
                       catch() { ... } // from try @ 005546e4 with catch @ 00555804 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


