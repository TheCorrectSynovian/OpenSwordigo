/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005663A0
 * Mangled: sub_5663A0
 * Demangled: sub_5663A0
 *
 * Callers: 1
 *   0x00000000005656B4  sub_5656B4
 *
 * Callees: 2
 *   0x0000000000566294  sub_566294
 *   0x000000000056630C  sub_56630C
 *
 * Referenced strings: 27
 *   insn=0x00000000005663A0 string=0x00000000005663A4 "!"
 *   insn=0x00000000005663C8 string=0x00000000005663CC "v"
 *   insn=0x00000000005663CC string=0x00000000005663D0 "y"
 *   insn=0x00000000005663D0 string=0x00000000005663D4 "x"
 *   insn=0x00000000005663E0 string=0x00000000005663E4 "s"
 *   insn=0x0000000000566400 string=0x00000000005663DC "a"
 *   insn=0x0000000000566404 string=0x0000000000566408 "_"
 *   insn=0x000000000056640C string=0x0000000000566410 "_"
 *   insn=0x0000000000566414 string=0x0000000000566418 "_"
 *   insn=0x0000000000566430 string=0x0000000000566434 "6"
 *   insn=0x0000000000566438 string=0x000000000056643C " "
 *   insn=0x0000000000566440 string=0x0000000000566450 "`"
 *   insn=0x0000000000566450 string=0x0000000000566454 " "
 *   insn=0x0000000000566460 string=0x0000000000566464 "`"
 *   insn=0x0000000000566468 string=0x000000000056646C "`"
 *   insn=0x000000000056648C string=0x0000000000566490 "_"
 *   insn=0x0000000000566490 string=0x0000000000566494 "A"
 *   insn=0x00000000005664A4 string=0x00000000005664A8 "V"
 *   insn=0x00000000005664BC string=0x00000000005664C0 "s"
 *   insn=0x00000000005664D0 string=0x00000000005664D4 "p"
 *   insn=0x00000000005664D8 string=0x00000000005664DC "?"
 *   insn=0x00000000005664E0 string=0x0000000000566518 " "
 *   insn=0x00000000005664EC string=0x00000000005664F0 "V"
 *   insn=0x00000000005664F8 string=0x00000000005664FC "_"
 *   insn=0x00000000005664FC string=0x0000000000566500 "-"
 *   insn=0x0000000000566500 string=0x0000000000566524 " "
 *   insn=0x000000000056650C string=0x0000000000566510 "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

signed __int64 __fastcall sub_5663A0(char *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  char *v6; // x21
  char *v7; // x19
  unsigned __int64 v8; // x22
  __int64 v9; // x25
  int v10; // w24
  int v11; // w0
  char v12; // w1
  int v13; // w2
  unsigned __int8 **v14; // x0
  __int64 v15; // x1
  int v16; // w0
  int v17; // t1
  unsigned __int64 *v19; // x0
  int v20; // w0

  v6 = &a1[a2 - 1];
  v7 = a1;
  v8 = *(_QWORD *)a4;
  v9 = *(_QWORD *)(a4 + 8);
  v10 = *(_DWORD *)(a4 + 24);
  while ( 1 )
  {
    v11 = *a3;
    if ( !*a3 )
      break;
    while ( 1 )
    {
      if ( v7 >= v6 )
        goto LABEL_22;
      v12 = v11;
      if ( v11 != 37 )
        goto LABEL_2;
      v13 = a3[1];
      if ( v13 != 115 )
        break;
      if ( v10 < 0 )
      {
        if ( v10 + 8 <= 0 )
        {
          v14 = (unsigned __int8 **)(v9 + v10);
          v10 += 8;
        }
        else
        {
          v14 = (unsigned __int8 **)v8;
          v10 += 8;
          v8 = (v8 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        }
      }
      else
      {
        v14 = (unsigned __int8 **)v8;
        v8 = (v8 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v15 = (__int64)*v14;
      v16 = **v14;
      if ( v16 )
      {
        while ( 1 )
        {
          *v7++ = v16;
          v17 = *(unsigned __int8 *)++v15;
          LOBYTE(v16) = v17;
          if ( !v17 )
            break;
          if ( v7 == v6 )
            goto LABEL_22;
        }
      }
      a3 += 2;
      v11 = *a3;
      if ( !*a3 )
        goto LABEL_16;
    }
    if ( v13 != 122 )
    {
      a3 += v13 == 37;
      goto LABEL_2;
    }
    v12 = 37;
    if ( a3[2] == 117 )
    {
      if ( v10 < 0 )
      {
        if ( v10 + 8 <= 0 )
        {
          v19 = (unsigned __int64 *)(v9 + v10);
          v10 += 8;
        }
        else
        {
          v19 = (unsigned __int64 *)v8;
          v10 += 8;
          v8 = (v8 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        }
      }
      else
      {
        v19 = (unsigned __int64 *)v8;
        v8 = (v8 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v20 = sub_56630C(v7, v6 - v7, *v19);
      if ( v20 <= 0 )
LABEL_22:
        sub_566294(a1, (__int64)v7);
      v7 += v20;
      a3 += 3;
    }
    else
    {
LABEL_2:
      *v7 = v12;
      ++a3;
      ++v7;
    }
  }
LABEL_16:
  *v7 = 0;
  return v7 - a1;
}

