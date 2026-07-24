/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4b84
 * Function: Caver::TimerCurrentSeconds
 * Signature: undefined __cdecl TimerCurrentSeconds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TimerCurrentSeconds() */

void Caver::TimerCurrentSeconds(void)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 005b4afc with catch @ 005b4b84 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b4bd0 with catch @ 005b4b98
                       catch(type#1 @ 00000000) { ... } // from try @ 005b4d34 with catch @ 005b4b98
                        */
  if (((DAT_007e9f70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_007e9f70), iVar1 != 0)) {
    DAT_007e9f68 = 0x7ffffffffffffffe;
    __cxa_guard_release(&DAT_007e9f70);
  }
  if ((DAT_007e9f78 & 1) == 0) {
    DAT_007e9f68 = boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time
                             ((_func_tm_ptr_long_ptr_tm_ptr *)PTR_localtime_007e6828);
    DAT_007e9f78 = 1;
  }
                    /* try { // try from 005b4bc8 to 006b4bcf has its CatchHandler @ 005b4c30 */
                    /* try { // try from 005b4bd0 to 006b4d0f has its CatchHandler @ 005b4b98 */
  FUN_005b4c08(&DAT_007e9f68);
  return;
}


