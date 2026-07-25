/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000541E30
 * Mangled: sub_541E30
 * Demangled: sub_541E30
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005215C0  sub_5215C0
 *
 * Referenced strings: 9
 *   insn=0x0000000000541E48 string=0x0000000000541E4C "`"
 *   insn=0x0000000000541E54 string=0x0000000000541E58 "c"
 *   insn=0x0000000000541E58 string=0x0000000000541E5C "c0@"
 *   insn=0x0000000000541E5C string=0x0000000000541E60 "`"
 *   insn=0x0000000000541E64 string=0x0000000000541E68 "@"
 *   insn=0x0000000000541E68 string=0x0000000000541E6C "`"
 *   insn=0x0000000000541E70 string=0x0000000000541E74 "s"
 *   insn=0x0000000000541E78 string=0x0000000000541E7C "a"@"
 *   insn=0x0000000000541E84 string=0x0000000000541E88 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_541E30(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0
  __int64 result; // x0

  v5 = *(_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 232);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
  if ( a3 != result )
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 1u);
  return result;
}

