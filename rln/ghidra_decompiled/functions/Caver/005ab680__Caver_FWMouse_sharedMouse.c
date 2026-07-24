/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab680
 * Function: Caver::FWMouse::sharedMouse
 * Signature: undefined __cdecl sharedMouse(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::FWMouse::sharedMouse() */

undefined * Caver::FWMouse::sharedMouse(void)

{
  int iVar1;
  
  if (((DAT_007e9ee0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_007e9ee0), iVar1 != 0)) {
    puRam00000000007e9ec8 = &DAT_007e9ec0;
    _DAT_007e9ec0 = &DAT_007e9ec0;
                    /* try { // try from 005ab6c8 to 006ab757 has its CatchHandler @ 005ab174 */
    DAT_007e9ed0 = 0;
    __cxa_atexit(PTR__FWMouse_007e50e0,&DAT_007e9ec0,&PTR_LOOP_007e8000);
    __cxa_guard_release(&DAT_007e9ee0);
  }
                    /* try { // try from 005ab6a0 to 006ab6c7 has its CatchHandler @ 005ab9ec */
  return &DAT_007e9ec0;
}


