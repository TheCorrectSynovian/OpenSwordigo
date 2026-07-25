/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3794
 * Mangled: sub_4F3794
 * Demangled: sub_4F3794
 *
 * Callers: 1
 *   0x00000000004E9D5C  lua_next(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EEE84  sub_4EEE84
 *
 * Referenced strings: 85
 *   insn=0x00000000004F37A8 string=0x00000000004F37AC "h\n@"
 *   insn=0x00000000004F37B8 string=0x00000000004F37BC "("
 *   insn=0x00000000004F37BC string=0x00000000004F37C0 ")"
 *   insn=0x00000000004F37C0 string=0x00000000004F37C8 "(y"
 *   insn=0x00000000004F37C8 string=0x00000000004F37CC ""
 *   insn=0x00000000004F37CC string=0x00000000004F37D0 "\t"
 *   insn=0x00000000004F37D4 string=0x00000000004F3830 "`"
 *   insn=0x00000000004F37D4 string=0x00000000004F3868 "h"
 *   insn=0x00000000004F37D8 string=0x00000000004F37DC "j"
 *   insn=0x00000000004F37E4 string=0x00000000004F37E8 "h!"
 *   insn=0x00000000004F37E8 string=0x00000000004F37EC ""
 *   insn=0x00000000004F37EC string=0x00000000004F37F0 ""
 *   insn=0x00000000004F37F0 string=0x00000000004F37F4 "\n"
 *   insn=0x00000000004F37F8 string=0x00000000004F37FC "3"
 *   insn=0x00000000004F3800 string=0x00000000004F3804 "j"
 *   insn=0x00000000004F380C string=0x00000000004F3810 "h!"
 *   insn=0x00000000004F3810 string=0x00000000004F3814 ""
 *   insn=0x00000000004F3814 string=0x00000000004F3818 ""
 *   insn=0x00000000004F3818 string=0x00000000004F381C "K\t"
 *   insn=0x00000000004F381C string=0x00000000004F3820 "h"
 *   insn=0x00000000004F3820 string=0x00000000004F3824 "\n"
 *   insn=0x00000000004F3828 string=0x00000000004F382C "'"
 *   insn=0x00000000004F3830 string=0x00000000004F3834 ""
 *   insn=0x00000000004F3834 string=0x00000000004F3838 "\t"
 *   insn=0x00000000004F383C string=0x00000000004F3858 " `"
 *   insn=0x00000000004F384C string=0x00000000004F3850 "_"
 *   insn=0x00000000004F3850 string=0x00000000004F3854 "j"
 *   insn=0x00000000004F3874 string=0x00000000004F3878 "@"
 *   insn=0x00000000004F3878 string=0x00000000004F387C "i!"
 *   insn=0x00000000004F387C string=0x00000000004F3880 ")"
 *   insn=0x00000000004F3880 string=0x00000000004F3884 "("
 *   insn=0x00000000004F3884 string=0x00000000004F3888 "\t"
 *   insn=0x00000000004F3894 string=0x00000000004F3898 ""
 *   insn=0x00000000004F3898 string=0x00000000004F389C "\t"
 *   insn=0x00000000004F38A0 string=0x00000000004F38A4 "("
 *   insn=0x00000000004F38AC string=0x00000000004F38B0 ")"
 *   insn=0x00000000004F38B0 string=0x00000000004F38B4 ")"
 *   insn=0x00000000004F38B4 string=0x00000000004F38B8 "\n\t"
 *   insn=0x00000000004F38B8 string=0x00000000004F38BC "H"
 *   insn=0x00000000004F38BC string=0x00000000004F38C0 "\t"
 *   insn=0x00000000004F38D0 string=0x00000000004F38D4 "l"
 *   insn=0x00000000004F38D4 string=0x00000000004F38D8 "`"
 *   insn=0x00000000004F38D4 string=0x00000000004EEE84 "@"
 *   insn=0x00000000004F38E4 string=0x00000000004F38E8 "h\n@"
 *   insn=0x00000000004F38F4 string=0x00000000004F38F8 "i"
 *   insn=0x00000000004F38FC string=0x00000000004F3900 " "
 *   insn=0x00000000004F3908 string=0x00000000004F390C "!"
 *   insn=0x00000000004F390C string=0x000000000059A2EE "invalid key to 'next'"
 *   insn=0x00000000004F391C string=0x00000000004F3920 ""
 *   insn=0x00000000004F3934 string=0x00000000004F3938 ""
 *   insn=0x00000000004F3938 string=0x00000000004F393C "\t%\n"
 *   insn=0x00000000004F3940 string=0x00000000004F3944 "*"
 *   insn=0x00000000004F3944 string=0x00000000004F3948 "_"
 *   insn=0x00000000004F3950 string=0x00000000004F3954 "L}@"
 *   insn=0x00000000004F3954 string=0x00000000004F3958 "J}|"
 *   insn=0x00000000004F3958 string=0x00000000004F395C ")\t"
 *   insn=0x00000000004F395C string=0x00000000004F3960 "m"
 *   insn=0x00000000004F3968 string=0x00000000004F39D8 " "
 *   insn=0x00000000004F396C string=0x00000000004F3970 "JA"
 *   insn=0x00000000004F3974 string=0x00000000004F3978 ")"
 *   insn=0x00000000004F3978 string=0x00000000004F397C "+"
 *   insn=0x00000000004F397C string=0x00000000004F3980 "*"
 *   insn=0x00000000004F3988 string=0x00000000004F398C "K"
 *   insn=0x00000000004F399C string=0x00000000004F39A0 ""
 *   insn=0x00000000004F39A0 string=0x00000000004F39A4 "J}-"
 *   insn=0x00000000004F39A4 string=0x00000000004F39A8 "k}@"
 *   insn=0x00000000004F39AC string=0x00000000004F39B0 ""
 *   insn=0x00000000004F39B0 string=0x00000000004F39B4 "*"
 *   insn=0x00000000004F39B4 string=0x00000000004F39B8 "M\t@"
 *   insn=0x00000000004F39BC string=0x00000000004F39C0 "k"
 *   insn=0x00000000004F39BC string=0x00000000004F39F4 "I\t@"
 *   insn=0x00000000004F39C4 string=0x00000000004F39C8 ""
 *   insn=0x00000000004F39C8 string=0x00000000004F39CC "K"
 *   insn=0x00000000004F39DC string=0x00000000004F39E0 "`"
 *   insn=0x00000000004F39E0 string=0x00000000004F39E4 "h\n"
 *   insn=0x00000000004F39E8 string=0x00000000004F39EC ""
 *   insn=0x00000000004F39EC string=0x00000000004F39F0 ""
 *   insn=0x00000000004F39F0 string=0x00000000004F3A0C "\t"
 *   insn=0x00000000004F39F4 string=0x00000000004F39F8 "i"
 *   insn=0x00000000004F39F8 string=0x00000000004F39FC "I"
 *   insn=0x00000000004F39FC string=0x00000000004F3A00 "i\n"
 *   insn=0x00000000004F3A04 string=0x00000000004F3A08 "("
 *   insn=0x00000000004F3A10 string=0x00000000004F3A14 "i\n"
 *   insn=0x00000000004F3A14 string=0x00000000004F3A18 ""
 *   insn=0x00000000004F3A18 string=0x00000000004F3A1C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3794(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // w9
  __int64 v7; // x23
  double v8; // d0
  int v9; // w8
  __int64 v10; // x8
  int v11; // w10
  __int64 v12; // x12
  __int64 v13; // x10
  int v14; // w9
  __int64 v15; // x11
  int v16; // w12
  __int64 v17; // x9
  __int64 i; // x8
  __int64 v19; // x10
  __int64 result; // x0
  __int64 v21; // x8

  v6 = -1;
  switch ( *(_DWORD *)(a3 + 8) )
  {
    case 0:
      goto LABEL_18;
    case 1:
      v7 = *(_QWORD *)(a2 + 32) + 40LL * (((1 << *(_BYTE *)(a2 + 11)) - 1) & *(_DWORD *)a3);
      goto LABEL_11;
    case 3:
      v8 = *(double *)a3;
      v9 = (int)*(double *)a3;
      v6 = v9 - 1;
      if ( v9 >= 1 && v8 == (double)v9 && *(_DWORD *)(a2 + 56) >= v9 )
        goto LABEL_18;
      if ( v8 == 0.0 )
        v7 = *(_QWORD *)(a2 + 32);
      else
        v7 = *(_QWORD *)(a2 + 32) + 40LL * ((HIDWORD(v8) + LODWORD(v8)) % (((1 << *(_BYTE *)(a2 + 11)) - 1) | 1u));
LABEL_11:
      while ( !sub_4EEE84((_DWORD *)(v7 + 16), (_DWORD *)a3)
           && (*(_DWORD *)(v7 + 24) != 11 || *(int *)(a3 + 8) < 4 || *(_QWORD *)(v7 + 16) != *(_QWORD *)a3) )
      {
        v7 = *(_QWORD *)(v7 + 32);
        if ( !v7 )
          sub_4EB320(a1, "invalid key to 'next'");
      }
      v6 = *(_DWORD *)(a2 + 56) - 858993459 * ((unsigned __int64)(v7 - *(_QWORD *)(a2 + 32)) >> 3);
LABEL_18:
      v10 = *(int *)(a2 + 56);
      v11 = v6 + 1;
      if ( v6 + 1 >= (int)v10 )
        goto LABEL_23;
      v12 = v11;
      v13 = 16LL * v11;
      v14 = v6 + 2;
      break;
    case 4:
      v7 = *(_QWORD *)(a2 + 32) + 40LL * (((1 << *(_BYTE *)(a2 + 11)) - 1) & *(_DWORD *)(*(_QWORD *)a3 + 12LL));
      goto LABEL_11;
    default:
      v7 = *(_QWORD *)(a2 + 32) + 40LL * (*(_DWORD *)a3 % (((1 << *(_BYTE *)(a2 + 11)) - 1) | 1u));
      goto LABEL_11;
  }
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + v13 + 8) )
    {
      *(double *)a3 = (double)v14;
      *(_DWORD *)(a3 + 8) = 3;
      v21 = *(_QWORD *)(a2 + 24) + v13;
      goto LABEL_30;
    }
    ++v12;
    v13 += 16;
    ++v14;
  }
  while ( v12 < v10 );
  v11 = v14 - 1;
LABEL_23:
  LODWORD(v15) = v11 - v10;
  v16 = 1 << *(_BYTE *)(a2 + 11);
  if ( v11 - (int)v10 >= v16 )
    return 0;
  v17 = *(_QWORD *)(a2 + 32);
  v15 = (int)v15;
  for ( i = 40LL * v11 - 40 * v10; ; i += 40 )
  {
    v19 = v17 + i;
    if ( *(_DWORD *)(v17 + i + 8) )
      break;
    if ( ++v15 >= v16 )
      return 0;
  }
  *(_QWORD *)a3 = *(_QWORD *)(v19 + 16);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(v19 + 24);
  v21 = *(_QWORD *)(a2 + 32) + i;
LABEL_30:
  result = 1;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)v21;
  *(_DWORD *)(a3 + 24) = *(_DWORD *)(v21 + 8);
  return result;
}

