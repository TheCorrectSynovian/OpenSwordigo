/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002014E0
 * Mangled: ._ZN5Caver18FWShellPreferences3SetENS_21FWShellFloatPrefsEnumEf
 * Demangled: Caver::FWShellPreferences::Set(Caver::FWShellFloatPrefsEnum,float)
 *
 * Callers: 3
 *   0x000000000020E358  Caver::CaverShell::InitApplication(void)
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *   0x00000000004789F0  Java_com_touchfoo_swordigo_Native_setApplicationViewSize
 *
 * Callees: 1
 *   0x000000000047E2D8  Caver::FWShellPreferences::Set(Caver::FWShellFloatPrefsEnum,float)
 *
 * Referenced strings: 2
 *   insn=0x00000000002014E4 string=0x000000000047E2D8 "H!"
 *   insn=0x00000000002014E8 string=0x00000000002014EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWShellPreferences::Set()
{
  return _ZN5Caver18FWShellPreferences3SetENS_21FWShellFloatPrefsEnumEf();
}

