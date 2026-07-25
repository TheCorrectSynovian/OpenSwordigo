/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F8824
 * Mangled: sub_4F8824
 * Demangled: sub_4F8824
 *
 * Callers: 2
 *   0x00000000004F5064  sub_4F5064
 *   0x00000000004F67EC  sub_4F67EC
 *
 * Callees: 2
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *
 * Referenced strings: 11
 *   insn=0x00000000004F8830 string=0x00000000004F8834 "h\n@"
 *   insn=0x00000000004F883C string=0x00000000004F8840 "_"
 *   insn=0x00000000004F883C string=0x00000000004F886C "`"
 *   insn=0x00000000004F8844 string=0x00000000004F8848 "T"
 *   insn=0x00000000004F884C string=0x00000000004F8850 "?"
 *   insn=0x00000000004F8850 string=0x00000000004F8854 ""
 *   insn=0x00000000004F8854 string=0x00000000004F8858 "a"
 *   insn=0x00000000004F8854 string=0x00000000004F8874 "["
 *   insn=0x00000000004F8860 string=0x00000000004F8864 "D"
 *   insn=0x00000000004F8868 string=0x00000000004F8878 "`"
 *   insn=0x00000000004F8878 string=0x00000000004F887C "t\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F8824(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // x8
  __int64 v5; // x20
  __int64 result; // x0

  v4 = a2[2];
  if ( v4 >= a3 )
    return *a2;
  if ( a3 <= 0x20 )
    v5 = 32;
  else
    v5 = a3;
  if ( (unsigned __int64)(v5 + 1) > 0xFFFFFFFFFFFFFFFDLL )
    sub_4EEDE0(a1);
  result = sub_4EED74(a1, *a2, v4, v5);
  *a2 = result;
  a2[2] = v5;
  return result;
}

