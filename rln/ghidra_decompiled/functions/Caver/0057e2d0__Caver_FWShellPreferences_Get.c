/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e2d0
 * Function: Caver::FWShellPreferences::Get
 * Signature: undefined __thiscall Get(FWShellPreferences * this, FWShellIntPrefsEnum param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum) const */

undefined4 __thiscall Caver::FWShellPreferences::Get(FWShellPreferences *this,uint param_2)

{
  return *(undefined4 *)(this + (ulong)param_2 * 4);
}


