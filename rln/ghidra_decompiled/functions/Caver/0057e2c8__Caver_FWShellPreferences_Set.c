/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e2c8
 * Function: Caver::FWShellPreferences::Set
 * Signature: undefined __thiscall Set(FWShellPreferences * this, FWShellIntPrefsEnum param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShellPreferences::Set(Caver::FWShellIntPrefsEnum, int) */

void __thiscall
Caver::FWShellPreferences::Set(FWShellPreferences *this,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(this + (ulong)param_2 * 4) = param_3;
  return;
}


