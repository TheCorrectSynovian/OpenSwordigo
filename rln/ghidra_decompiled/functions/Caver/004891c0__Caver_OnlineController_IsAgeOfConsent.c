/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004891c0
 * Function: Caver::OnlineController::IsAgeOfConsent
 * Signature: undefined __thiscall IsAgeOfConsent(OnlineController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController::IsAgeOfConsent() */

bool __thiscall Caver::OnlineController::IsAgeOfConsent(OnlineController *this)

{
                    /* catch() { ... } // from try @ 00488f24 with catch @ 004891c8 */
                    /* catch() { ... } // from try @ 00488ef4 with catch @ 004891cc */
  return 0xf < *(int *)(this + 8);
}


