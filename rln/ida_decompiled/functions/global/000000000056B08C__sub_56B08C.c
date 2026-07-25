/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B08C
 * Mangled: sub_56B08C
 * Demangled: sub_56B08C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000056B094 string=0x000000000056B098 "`"
 *   insn=0x000000000056B098 string=0x000000000056B0A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_56B08C(__int64 a1, __int64 a2, int a3)
{
  return *(_QWORD *)(a2 + 8) == a1 && *(_DWORD *)a2 == a3;
}

