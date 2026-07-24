/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e2d8
 * Function: Caver::FWShellPreferences::Set
 * Signature: undefined __thiscall Set(FWShellPreferences * this, FWShellFloatPrefsEnum param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShellPreferences::Set(Caver::FWShellFloatPrefsEnum, float) */

void __thiscall
Caver::FWShellPreferences::Set(undefined4 param_1,FWShellPreferences *this,uint param_3)

{
                    /* try { // try from 0057e2d8 to 0067e2e3 has its CatchHandler @ 0057e458 */
  *(undefined4 *)(this + (ulong)param_3 * 4 + 0x18) = param_1;
  return;
}


