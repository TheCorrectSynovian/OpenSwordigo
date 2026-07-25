/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202220
 * Mangled: ._ZN5Caver18FWShellPreferences3SetENS_19FWShellIntPrefsEnumEi
 * Demangled: Caver::FWShellPreferences::Set(Caver::FWShellIntPrefsEnum,int)
 *
 * Callers: 1
 *   0x00000000004789F0  Java_com_touchfoo_swordigo_Native_setApplicationViewSize
 *
 * Callees: 1
 *   0x000000000047E2C8  Caver::FWShellPreferences::Set(Caver::FWShellIntPrefsEnum,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202228 string=0x000000000020222C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWShellPreferences::Set()
{
  return _ZN5Caver18FWShellPreferences3SetENS_19FWShellIntPrefsEnumEi();
}

