/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005568d0
 * Function: Caver::WhooshParticleEmitter::TitleForParameter
 * Signature: undefined __cdecl TitleForParameter(uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WhooshParticleEmitter::TitleForParameter(unsigned int) */

void Caver::WhooshParticleEmitter::TitleForParameter(uint param_1)

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
  
                    /* try { // try from 005568dc to 0065694b has its CatchHandler @ 00556954 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*PTR_titles_007e6820 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_titles_007e6820);
                    /* try { // try from 0055694c to 00656957 has its CatchHandler @ 00556530 */
    if (iVar2 != 0) {
                    /* catch() { ... } // from try @ 0055681c with catch @ 00556954
                       catch() { ... } // from try @ 005568dc with catch @ 00556954 */
                    /* catch() { ... } // from try @ 00556a08 with catch @ 00556958 */
      FUN_00666bb8(PTR_titles_007e49d0,&DAT_00689558,auStack_48);
                    /* try { // try from 00556970 to 00656977 has its CatchHandler @ 00556a14 */
      FUN_00666bb8(PTR_titles_007e49d0 + 8,"particleAge",auStack_50);
                    /* try { // try from 005569a4 to 006569af has its CatchHandler @ 005569bc */
      FUN_00666bb8(PTR_titles_007e49d0 + 0x10,"particleScale",auStack_58);
                    /* catch() { ... } // from try @ 005569a4 with catch @ 005569bc */
      FUN_00666bb8(PTR_titles_007e49d0 + 0x18,"radius",auStack_60);
                    /* try { // try from 005569e0 to 00656a07 has its CatchHandler @ 00556a10 */
      __cxa_atexit(FUN_0030ba50,0,&PTR_LOOP_007e8000);
      __cxa_guard_release(PTR_titles_007e6820);
    }
  }
  FUN_0066a528(in_x8,PTR_titles_007e49d0 + (in_x1 & 0xffffffff) * 8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


