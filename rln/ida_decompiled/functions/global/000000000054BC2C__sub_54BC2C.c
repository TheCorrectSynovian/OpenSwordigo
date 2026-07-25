/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054BC2C
 * Mangled: sub_54BC2C
 * Demangled: sub_54BC2C
 *
 * Callers: 3
 *   0x0000000000525FE4  sub_525FE4
 *   0x00000000005424A0  sub_5424A0
 *   0x000000000054BA7C  sub_54BA7C
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x000000000054BC2C string=0x000000000054BC30 "#"
 *   insn=0x000000000054BC54 string=0x000000000054BC58 "?"
 *   insn=0x000000000054BC60 string=0x000000000054BC64 """
 *   insn=0x000000000054BC64 string=0x000000000054BC68 "_"
 *   insn=0x000000000054BC70 string=0x000000000054BC74 "6"
 *   insn=0x000000000054BC80 string=0x000000000054BC84 "c0@"
 *   insn=0x000000000054BC84 string=0x000000000054BC88 "`"
 *   insn=0x000000000054BC94 string=0x000000000054BC98 " "
 *   insn=0x000000000054BC9C string=0x000000000054BCA0 "L"
 *   insn=0x000000000054BCA8 string=0x000000000054BCAC "!$@"
 *   insn=0x000000000054BCAC string=0x000000000054BCB0 " "
 *   insn=0x000000000054BCB4 string=0x000000000054BCB8 "_"
 *   insn=0x000000000054BCC4 string=0x000000000054BCC8 "s"
 *   insn=0x000000000054BCC8 string=0x000000000054BCCC "s"
 *   insn=0x000000000054BCD0 string=0x000000000054BCD4 ","
 *   insn=0x000000000054BCE0 string=0x000000000054BCE4 "B"
 *   insn=0x000000000054BCF8 string=0x000000000054BCFC "?"
 *   insn=0x000000000054BCFC string=0x000000000054BD00 """
 *   insn=0x000000000054BD00 string=0x000000000054BD04 " D@"
 *   insn=0x000000000054BD1C string=0x000000000054BD20 """
 *   insn=0x000000000054BD34 string=0x000000000054BD38 "b4@"
 *   insn=0x000000000054BD38 string=0x000000000054BD3C "@"
 *   insn=0x000000000054BD40 string=0x000000000054BD44 "a"
 *   insn=0x000000000054BD68 string=0x000000000054BD6C "!(@"
 *   insn=0x000000000054BD6C string=0x000000000054BD70 " "
 *   insn=0x000000000054BD78 string=0x000000000054BD7C "!$@"
 *   insn=0x000000000054BD7C string=0x000000000054BD80 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54BC2C(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  unsigned __int64 v4; // x2
  unsigned int *v6; // x1
  unsigned int v8; // w2
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x19
  unsigned int *v12; // x0
  int *v13; // x1
  int v14; // w0
  unsigned int *v15; // x0

  v4 = a1[3];
  v6 = (unsigned int *)a1[2];
  *a3 = 1;
  if ( (unsigned __int64)v6 >= v4 )
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  else
    v8 = *v6;
  v9 = 0;
  while ( v8 != -1 )
  {
    v11 = (__int64)(a1[3] - a1[2]) >> 2;
    if ( v11 > 1 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 96LL))(a2);
      v9 += v10;
      a1[2] += 4 * v10;
      if ( v11 > v10 )
        goto LABEL_17;
    }
    else
    {
      v12 = (unsigned int *)a2[5];
      if ( (unsigned __int64)v12 >= a2[6] )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*a2 + 104LL))(a2, v8) == -1 )
        {
LABEL_17:
          *a3 = 0;
          return v9;
        }
      }
      else
      {
        *v12 = v8;
        a2[5] = v12 + 1;
      }
      v13 = (int *)a1[2];
      ++v9;
      if ( (unsigned __int64)v13 >= a1[3] )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
      }
      else
      {
        v14 = *v13;
        a1[2] = v13 + 1;
      }
      if ( v14 == -1 )
        return v9;
      v15 = (unsigned int *)a1[2];
      if ( (unsigned __int64)v15 < a1[3] )
      {
        v8 = *v15;
        continue;
      }
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  }
  return v9;
}

