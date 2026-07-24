/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab3cc
 * Function: Caver::FWKeyboard::sharedKeyboard
 * Signature: undefined __cdecl sharedKeyboard(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::FWKeyboard::sharedKeyboard() */

undefined * Caver::FWKeyboard::sharedKeyboard(void)

{
  int iVar1;
  
                    /* try { // try from 005ab3f8 to 006ab463 has its CatchHandler @ 005aba90 */
  if (((DAT_007e9ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_007e9ea0), iVar1 != 0)) {
    puRam00000000007e9e98 = &DAT_007e9e90;
    _DAT_007e9e90 = &DAT_007e9e90;
    __cxa_atexit(PTR__FWKeyboard_007e6ff8,&DAT_007e9e90,&PTR_LOOP_007e8000);
    __cxa_guard_release(&DAT_007e9ea0);
  }
                    /* try { // try from 005ab3f0 to 006ab3f7 has its CatchHandler @ 005aba8c */
  return &DAT_007e9e90;
}


