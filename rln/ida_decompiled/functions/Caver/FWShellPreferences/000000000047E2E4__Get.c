/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E2E4
 * Mangled: _ZN5Caver18FWShellPreferences3GetENS_21FWShellFloatPrefsEnumE
 * Demangled: Caver::FWShellPreferences::Get(Caver::FWShellFloatPrefsEnum)
 *
 * Callers: 1
 *   0x00000000001F4180  Caver::FWShellPreferences::Get(Caver::FWShellFloatPrefsEnum)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::FWShellPreferences::Get(__int64 a1, unsigned int a2)
{
  return *(float *)(a1 + 4LL * a2 + 24);
}

