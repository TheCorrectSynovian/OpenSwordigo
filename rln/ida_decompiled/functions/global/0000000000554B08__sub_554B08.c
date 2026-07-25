/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000554B08
 * Mangled: sub_554B08
 * Demangled: sub_554B08
 *
 * Callers: 14
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B9C  sub_554B9C
 *   0x0000000000554F18  sub_554F18
 *   0x0000000000555830  sub_555830
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x0000000000558854  sub_558854
 *   0x0000000000559B48  sub_559B48
 *   0x000000000055A478  sub_55A478
 *   0x000000000055A870  sub_55A870
 *   0x000000000055B1A0  sub_55B1A0
 *   0x000000000055BABC  sub_55BABC
 *   0x000000000055C444  sub_55C444
 *   0x000000000055CDD8  sub_55CDD8
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000554B18 string=0x0000000000554B1C "b"
 *   insn=0x0000000000554B28 string=0x0000000000554B38 "@@"
 *   insn=0x0000000000554B3C string=0x0000000000554B40 "C"
 *   insn=0x0000000000554B48 string=0x0000000000554B88 "C"
 *   insn=0x0000000000554B50 string=0x0000000000554B54 " "
 *   insn=0x0000000000554B54 string=0x0000000000554B58 "`\n"
 *   insn=0x0000000000554B8C string=0x0000000000554B90 "b$@"
 *   insn=0x0000000000554B90 string=0x0000000000554B94 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_554B08(__int64 a1)
{
  _QWORD *v2; // x2
  __int64 result; // x0
  unsigned int *v4; // x0
  __int64 v5; // x19

  v2 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return 0xFFFFFFFFLL;
  result = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)result == -1 )
  {
    v4 = (unsigned int *)v2[2];
    v5 = a1;
    if ( (unsigned __int64)v4 >= v2[3] )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 72LL))(v2);
    else
      result = *v4;
    if ( (_DWORD)result == -1 )
      *(_QWORD *)v5 = 0;
    else
      *(_DWORD *)(v5 + 8) = result;
  }
  return result;
}

