/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053CA8C
 * Mangled: sub_53CA8C
 * Demangled: sub_53CA8C
 *
 * Callers: 18
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536618  sub_536618
 *   0x000000000053797C  sub_53797C
 *   0x0000000000538714  sub_538714
 *   0x00000000005390F0  sub_5390F0
 *   0x0000000000539A80  sub_539A80
 *   0x000000000053A47C  sub_53A47C
 *   0x000000000053AE2C  sub_53AE2C
 *   0x00000000005569EC  sub_5569EC
 *   0x00000000005577B8  sub_5577B8
 *   0x0000000000558854  sub_558854
 *   0x0000000000559B48  sub_559B48
 *   0x000000000055A870  sub_55A870
 *   0x000000000055B1A0  sub_55B1A0
 *   0x000000000055BABC  sub_55BABC
 *   0x000000000055C444  sub_55C444
 *   0x000000000055CDD8  sub_55CDD8
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000053CA8C string=0x000000000053CA90 "!"
 *   insn=0x000000000053CA94 string=0x000000000053CA98 "B"
 *   insn=0x000000000053CA98 string=0x000000000053CA9C "?"
 *   insn=0x000000000053CA9C string=0x000000000053CAA0 "!"
 *   insn=0x000000000053CAA4 string=0x000000000053CB18 "#"
 *   insn=0x000000000053CABC string=0x000000000053CAC0 "B"
 *   insn=0x000000000053CAD0 string=0x000000000053CAB0 "#"
 *   insn=0x000000000053CAD8 string=0x000000000053CAF4 " "
 *   insn=0x000000000053CAE8 string=0x000000000053CAEC "B"
 *   insn=0x000000000053CAEC string=0x000000000053CAF0 "a"
 *   insn=0x000000000053CB08 string=0x000000000053CB0C "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_53CA8C(__int64 a1, __int64 a2, unsigned __int8 **a3)
{
  unsigned __int8 *v3; // x5
  unsigned __int64 v4; // x1
  unsigned __int64 v5; // x2
  unsigned __int64 v6; // x4
  int v7; // w3
  int v8; // w6
  _BOOL4 v9; // w3
  unsigned int i; // w1

  v3 = *a3;
  v4 = a2 - 1;
  v5 = *((_QWORD *)*a3 - 3) - 1LL;
  if ( v4 > v5 )
    v4 = v5;
  if ( v4 )
  {
    v6 = 0;
    do
    {
      v7 = *(unsigned __int8 *)(a1 + v6++);
      v8 = v3[v5--];
      v9 = v8 == v7;
    }
    while ( v6 < v4 && v9 );
  }
  else
  {
    v9 = 1;
  }
  for ( i = *(unsigned __int8 *)(a1 + v4); v5; v9 = v3[v5--] == i )
  {
    if ( !v9 )
      break;
  }
  if ( (char)i > 0 )
    v9 &= *v3 <= i;
  return v9;
}

