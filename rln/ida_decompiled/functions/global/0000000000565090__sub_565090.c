/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565090
 * Mangled: sub_565090
 * Demangled: sub_565090
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 5
 *   insn=0x00000000005650A8 string=0x00000000005650B8 "`"
 *   insn=0x00000000005650BC string=0x00000000005650C0 "s"
 *   insn=0x00000000005650C4 string=0x00000000005650C8 "a"@"
 *   insn=0x00000000005650D0 string=0x00000000005650D4 "!"
 *   insn=0x00000000005650D4 string=0x00000000005650D8 ":"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_565090(_QWORD *a1)
{
  __int64 result; // x0

  result = sub_562F10((__int64)(a1 + 2));
  if ( !result )
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
  return result;
}

