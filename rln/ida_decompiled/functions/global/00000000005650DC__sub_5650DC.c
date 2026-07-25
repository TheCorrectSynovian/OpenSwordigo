/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005650DC
 * Mangled: sub_5650DC
 * Demangled: sub_5650DC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 5
 *   insn=0x00000000005650F4 string=0x0000000000565104 "`"
 *   insn=0x0000000000565108 string=0x000000000056510C "s"
 *   insn=0x0000000000565110 string=0x0000000000565114 "a"@"
 *   insn=0x000000000056511C string=0x0000000000565120 "!"
 *   insn=0x0000000000565120 string=0x0000000000565124 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5650DC(_QWORD *a1)
{
  __int64 result; // x0

  result = sub_562F10((__int64)(a1 + 1));
  if ( !result )
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
  return result;
}

