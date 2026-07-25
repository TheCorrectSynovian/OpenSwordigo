/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E2B8
 * Mangled: _ZN5Caver18FWShellPreferencesC2Ev
 * Demangled: Caver::FWShellPreferences::FWShellPreferences(void)
 *
 * Callers: 1
 *   0x00000000001FF310  Caver::FWShellPreferences::FWShellPreferences(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::FWShellPreferences::FWShellPreferences(Caver::FWShellPreferences *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *((_QWORD *)this + 4) = 0;
  *(_OWORD *)this = 0u;
  *((_OWORD *)this + 1) = 0u;
  return result;
}

