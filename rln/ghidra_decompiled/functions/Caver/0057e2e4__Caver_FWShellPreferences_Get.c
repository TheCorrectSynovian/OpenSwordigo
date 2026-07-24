/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e2e4
 * Function: Caver::FWShellPreferences::Get
 * Signature: undefined __thiscall Get(FWShellPreferences * this, FWShellFloatPrefsEnum param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShellPreferences::Get(Caver::FWShellFloatPrefsEnum) */

undefined4 __thiscall Caver::FWShellPreferences::Get(FWShellPreferences *this,uint param_2)

{
                    /* try { // try from 0057e2e4 to 0067e33f has its CatchHandler @ 0057e234 */
  return *(undefined4 *)(this + (ulong)param_2 * 4 + 0x18);
}


