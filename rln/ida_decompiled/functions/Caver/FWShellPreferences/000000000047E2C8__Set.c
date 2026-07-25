/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E2C8
 * Mangled: _ZN5Caver18FWShellPreferences3SetENS_19FWShellIntPrefsEnumEi
 * Demangled: Caver::FWShellPreferences::Set(Caver::FWShellIntPrefsEnum,int)
 *
 * Callers: 1
 *   0x0000000000202220  Caver::FWShellPreferences::Set(Caver::FWShellIntPrefsEnum,int)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShellPreferences::Set(__int64 result, unsigned int a2, int a3)
{
  *(_DWORD *)(result + 4LL * a2) = a3;
  return result;
}

