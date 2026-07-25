/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055EF78
 * Mangled: sub_55EF78
 * Demangled: sub_55EF78
 *
 * Callers: 2
 *   0x000000000057115C  sub_57115C
 *   0x000000000057121C  sub_57121C
 *
 * Callees: 1
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 6
 *   insn=0x000000000055EF84 string=0x000000000055EF88 "a"
 *   insn=0x000000000055EFA4 string=0x000000000055EFA8 "re"
 *   insn=0x000000000055EFA8 string=0x000000000055EFAC "`N"
 *   insn=0x000000000055EFA8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000055EFAC string=0x000000000055EFB0 " "
 *   insn=0x000000000055EFB0 string=0x000000000055EFB4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55EF78(__int64 result)
{
  __int64 v1; // x19

  if ( !*(_BYTE *)(result + 168) && !*(_QWORD *)(result + 152) )
  {
    v1 = result;
    *(_QWORD *)(result + 152) = operator new[](*(_QWORD *)(result + 160));
    result = 1;
    *(_BYTE *)(v1 + 168) = 1;
  }
  return result;
}

