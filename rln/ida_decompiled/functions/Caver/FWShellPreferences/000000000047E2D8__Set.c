/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E2D8
 * Mangled: _ZN5Caver18FWShellPreferences3SetENS_21FWShellFloatPrefsEnumEf
 * Demangled: Caver::FWShellPreferences::Set(Caver::FWShellFloatPrefsEnum,float)
 *
 * Callers: 1
 *   0x00000000002014E0  Caver::FWShellPreferences::Set(Caver::FWShellFloatPrefsEnum,float)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShellPreferences::Set(__int64 result, unsigned int a2, float a3)
{
  *(float *)(result + 4LL * a2 + 24) = a3;
  return result;
}

