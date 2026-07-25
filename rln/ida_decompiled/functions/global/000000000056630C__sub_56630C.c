/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056630C
 * Mangled: sub_56630C
 * Demangled: sub_56630C
 *
 * Callers: 1
 *   0x00000000005663A0  sub_5663A0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 12
 *   insn=0x000000000056631C string=0x0000000000566320 "c"
 *   insn=0x0000000000566330 string=0x0000000000566334 "g"
 *   insn=0x0000000000566334 string=0x000000000059E538 "-+xX0123456789abcdef0123456789ABCDEF"
 *   insn=0x0000000000566338 string=0x000000000056633C "D|"
 *   insn=0x0000000000566344 string=0x0000000000566348 "c"
 *   insn=0x0000000000566348 string=0x000000000056634C "C"
 *   insn=0x0000000000566354 string=0x0000000000566358 "c"
 *   insn=0x0000000000566368 string=0x000000000056636C "B|@"
 *   insn=0x000000000056636C string=0x0000000000566370 "_"
 *   insn=0x0000000000566370 string=0x0000000000566374 "("
 *   insn=0x0000000000566374 string=0x0000000000566378 "!"
 *   insn=0x0000000000566378 string=0x000000000056637C "!`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56630C(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char *v3; // x7
  _BYTE *v4; // x5
  unsigned __int64 v5; // x3
  signed int v6; // w19
  _BYTE v9[24]; // [xsp+18h] [xbp-18h] BYREF

  v3 = off_6E8938[0];
  v4 = v9;
  do
  {
    v5 = a3 % 0xA;
    a3 /= 0xAu;
    *--v4 = v3[v5 + 4];
  }
  while ( a3 );
  v6 = (unsigned int)v9 - (_DWORD)v4;
  if ( v6 > a2 )
    return (unsigned int)-1;
  else
    memcpy(a1, v9 - 8 * v6 + 32, v6);
  return (unsigned int)v6;
}

