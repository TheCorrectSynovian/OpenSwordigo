/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf8e0
 * Function: Caver::DateTime::Now
 * Signature: undefined __cdecl Now(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DateTime::Now() */

void Caver::DateTime::Now(void)

{
  (*(code *)PTR_TimerSecondsSinceReferenceDate_007e0158)();
  return;
}


