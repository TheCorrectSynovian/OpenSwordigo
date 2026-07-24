/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005560a4
 * Function: Caver::TrailParticleEmitter::TitleForParameter
 * Signature: undefined __cdecl TitleForParameter(uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TrailParticleEmitter::TitleForParameter(unsigned int) */

void Caver::TrailParticleEmitter::TitleForParameter(uint param_1)

{
  long lVar1;
  int iVar2;
  uint in_w1;
  undefined8 in_x8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_titles_007e6380 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_titles_007e6380);
    if (iVar2 != 0) {
      FUN_00666bb8(PTR_titles_007e4e68,&DAT_00689558,auStack_40);
      FUN_00666bb8(PTR_titles_007e4e68 + 8,"particleAge",auStack_48);
                    /* catch() { ... } // from try @ 00555eb0 with catch @ 0055616c */
                    /* catch() { ... } // from try @ 00555eb8 with catch @ 00556170 */
                    /* catch() { ... } // from try @ 00555e70 with catch @ 00556180 */
      FUN_00666bb8(PTR_titles_007e4e68 + 0x10,"particleScale",auStack_50);
      FUN_00666bb8(PTR_titles_007e4e68 + 0x18,"radius",auStack_58);
      FUN_00666bb8(PTR_titles_007e4e68 + 0x20,"velocityTrackFactor",auStack_60);
      FUN_00666bb8(PTR_titles_007e4e68 + 0x28,"initialSize",auStack_68);
                    /* catch() { ... } // from try @ 00555e68 with catch @ 005561ec */
      FUN_00666bb8(PTR_titles_007e4e68 + 0x30,"finalSize",auStack_70);
                    /* try { // try from 00556210 to 0065643b has its CatchHandler @ 00556444 */
      __cxa_atexit(FUN_0030b770,0,&PTR_LOOP_007e8000);
      __cxa_guard_release(PTR_titles_007e6380);
    }
  }
  FUN_0066a528(in_x8,PTR_titles_007e4e68 + (ulong)in_w1 * 8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


