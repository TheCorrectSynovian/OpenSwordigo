/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E2D0
 * Mangled: _ZNK5Caver18FWShellPreferences3GetENS_19FWShellIntPrefsEnumE
 * Demangled: Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Callers: 1
 *   0x00000000001FF9D0  Caver::FWShellPreferences::Get(Caver::FWShellIntPrefsEnum)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShellPreferences::Get(__int64 a1, unsigned int a2)
{
  return *(unsigned int *)(a1 + 4LL * a2);
}

