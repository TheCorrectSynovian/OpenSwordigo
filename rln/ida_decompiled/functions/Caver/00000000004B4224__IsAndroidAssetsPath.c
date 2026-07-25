/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B4224
 * Mangled: _ZN5Caver19IsAndroidAssetsPathERKSs
 * Demangled: Caver::IsAndroidAssetsPath(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FB7B0  Caver::IsAndroidAssetsPath(std::string const&)
 *
 * Callees: 1
 *   0x000000000056887C  sub_56887C
 *
 * Referenced strings: 1
 *   insn=0x00000000004B422C string=0x00000000004B4234 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::IsAndroidAssetsPath(__int64 a1)
{
  return (unsigned int)sub_56887C(a1, 0, *(_QWORD *)(qword_6E9F60 - 24)) == 0;
}

