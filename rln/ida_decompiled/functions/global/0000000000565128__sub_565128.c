/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565128
 * Mangled: sub_565128
 * Demangled: sub_565128
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000562F10  sub_562F10
 *
 * Referenced strings: 5
 *   insn=0x0000000000565138 string=0x000000000056513C "u"
 *   insn=0x0000000000565140 string=0x0000000000565150 "`"
 *   insn=0x0000000000565154 string=0x0000000000565158 "s"
 *   insn=0x000000000056515C string=0x0000000000565160 "a"@"
 *   insn=0x0000000000565168 string=0x000000000056516C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_565128(_QWORD *a1)
{
  __int64 result; // x0

  result = sub_562F10((__int64)(a1 + 3));
  if ( !result )
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
  return result;
}

