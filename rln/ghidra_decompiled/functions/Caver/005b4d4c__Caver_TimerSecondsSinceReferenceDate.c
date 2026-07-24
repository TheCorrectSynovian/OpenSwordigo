/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4d4c
 * Function: Caver::TimerSecondsSinceReferenceDate
 * Signature: undefined __cdecl TimerSecondsSinceReferenceDate(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TimerSecondsSinceReferenceDate() */

void Caver::TimerSecondsSinceReferenceDate(void)

{
  long lVar1;
  uint local_38 [2];
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  boost::gregorian::date::date((date *)local_38,0x7d1,1,1);
                    /* catch() { ... } // from try @ 005b4da8 with catch @ 005b4d88
                       catch() { ... } // from try @ 005b4e0c with catch @ 005b4d88 */
  local_30 = (ulong)(local_38[0] + 2) + 0x7ffffffffffffffe;
                    /* try { // try from 005b4da0 to 006b4da7 has its CatchHandler @ 005b4dd8 */
  if (2 < local_38[0] + 2) {
    local_30 = (ulong)local_38[0] * 86400000000;
  }
                    /* try { // try from 005b4da8 to 006b4ddf has its CatchHandler @ 005b4d88 */
  FUN_005b4c08(&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


