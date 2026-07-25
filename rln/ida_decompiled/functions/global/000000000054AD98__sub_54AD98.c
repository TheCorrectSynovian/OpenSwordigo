/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054AD98
 * Mangled: sub_54AD98
 * Demangled: sub_54AD98
 *
 * Callers: 1
 *   0x000000000055EAE0  sub_55EAE0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 9
 *   insn=0x000000000054AD98 string=0x000000000054AD9C "_"
 *   insn=0x000000000054ADD4 string=0x000000000054ADD8 "B"
 *   insn=0x000000000054ADE4 string=0x000000000054ADE8 "!(@"
 *   insn=0x000000000054ADE8 string=0x000000000054ADEC " "
 *   insn=0x000000000054ADF8 string=0x000000000054ADFC "s"
 *   insn=0x000000000054AE08 string=0x000000000054AE0C "M"
 *   insn=0x000000000054AE20 string=0x000000000054AE24 "B"
 *   insn=0x000000000054AE34 string=0x000000000054AE38 "s"
 *   insn=0x000000000054AE38 string=0x000000000054AE3C "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54AD98(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v5; // x19
  _BYTE *v6; // x22
  const void *v7; // x3
  signed __int64 v8; // x20
  __int64 v9; // x2
  void *v10; // x0
  const void *v11; // x1
  signed __int64 v12; // x2
  int v13; // w0
  _BYTE *v14; // x1

  v5 = 0;
  v6 = a2;
  if ( a3 > 0 )
  {
    v7 = (const void *)a1[2];
    v8 = a3;
    v9 = a1[3];
    v10 = a2;
    v11 = v7;
    v12 = v9 - (_QWORD)v7;
    if ( v12 )
      goto LABEL_6;
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
      if ( v13 == -1 )
        break;
      ++v5;
      *v6 = v13;
      v14 = ++v6;
      if ( a3 <= v5 )
        break;
      v8 = a3 - v5;
      v10 = v14;
      v11 = (const void *)a1[2];
      v12 = a1[3] - (_QWORD)v11;
      if ( v12 )
      {
LABEL_6:
        if ( v8 > v12 )
          v8 = v12;
        v5 += v8;
        memcpy(v10, v11, v8);
        a1[2] += v8;
        if ( a3 <= v5 )
          return v5;
        v6 += v8;
      }
    }
  }
  return v5;
}

