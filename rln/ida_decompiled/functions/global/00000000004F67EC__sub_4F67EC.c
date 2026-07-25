/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F67EC
 * Mangled: sub_4F67EC
 * Demangled: sub_4F67EC
 *
 * Callers: 3
 *   0x00000000004E9E70  lua_concat(lua_State *,int)
 *   0x00000000004EEFD8  sub_4EEFD8
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *   0x0000000000203240  .sprintf
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EB474  sub_4EB474
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F4ED4  sub_4F4ED4
 *   0x00000000004F8824  sub_4F8824
 *
 * Referenced strings: 81
 *   insn=0x00000000004F6808 string=0x00000000004F680C "H"
 *   insn=0x00000000004F6810 string=0x00000000004F6814 ""
 *   insn=0x00000000004F6814 string=0x00000000004F6818 "<"
 *   insn=0x00000000004F6818 string=0x000000000059A4B4 "%.14g"
 *   insn=0x00000000004F682C string=0x00000000004F6830 "Z|@"
 *   insn=0x00000000004F6830 string=0x00000000004F6834 "8"
 *   insn=0x00000000004F6834 string=0x00000000004F6838 ""
 *   insn=0x00000000004F6840 string=0x00000000004F6844 ""
 *   insn=0x00000000004F684C string=0x00000000004F6850 "@"
 *   insn=0x00000000004F6858 string=0x00000000004F6898 ""
 *   insn=0x00000000004F685C string=0x00000000004F6860 "A"
 *   insn=0x00000000004F686C string=0x00000000004F6870 "t2"
 *   insn=0x00000000004F6874 string=0x00000000004F6878 "n2"
 *   insn=0x00000000004F6884 string=0x00000000004F6888 "9"
 *   insn=0x00000000004F6890 string=0x00000000004F6894 ""
 *   insn=0x00000000004F689C string=0x00000000004F68A0 "X"
 *   insn=0x00000000004F68A8 string=0x00000000004F68AC ""
 *   insn=0x00000000004F68AC string=0x00000000004F68B0 "("
 *   insn=0x00000000004F68B0 string=0x00000000004F68B4 "w~@"
 *   insn=0x00000000004F68B4 string=0x00000000004F68B8 "A"
 *   insn=0x00000000004F68BC string=0x00000000004F68C0 "h@"
 *   insn=0x00000000004F68C8 string=0x00000000004F6908 "h"
 *   insn=0x00000000004F68D0 string=0x00000000004F68D4 "`"
 *   insn=0x00000000004F68DC string=0x00000000004F68E0 "X2"
 *   insn=0x00000000004F68E4 string=0x00000000004F68E8 "R2"
 *   insn=0x00000000004F68FC string=0x00000000004F6900 "`"
 *   insn=0x00000000004F6900 string=0x00000000004F6904 "h"
 *   insn=0x00000000004F6910 string=0x00000000004F6914 ""
 *   insn=0x00000000004F6914 string=0x00000000004F6918 "_"
 *   insn=0x00000000004F691C string=0x00000000004F6920 "!"
 *   insn=0x00000000004F6920 string=0x000000000059A4DC "string length overflow"
 *   insn=0x00000000004F6924 string=0x00000000004F6928 "!p"
 *   insn=0x00000000004F6928 string=0x00000000004F692C "}"
 *   insn=0x00000000004F6930 string=0x00000000004F6934 "X"
 *   insn=0x00000000004F6938 string=0x00000000004F693C "{C"
 *   insn=0x00000000004F693C string=0x00000000004F6940 ""
 *   insn=0x00000000004F6940 string=0x00000000004F6944 "K"
 *   insn=0x00000000004F6950 string=0x00000000004F6954 "`"
 *   insn=0x00000000004F6954 string=0x00000000004F4ED4 "(@"
 *   insn=0x00000000004F6958 string=0x00000000004F695C "\t"
 *   insn=0x00000000004F695C string=0x00000000004F6960 "\t"
 *   insn=0x00000000004F696C string=0x00000000004F6970 "Y"
 *   insn=0x00000000004F6974 string=0x00000000004F6978 "\t"
 *   insn=0x00000000004F6978 string=0x00000000004F697C "I"
 *   insn=0x00000000004F6980 string=0x00000000004F6984 "\n"
 *   insn=0x00000000004F6988 string=0x00000000004F698C "*"
 *   insn=0x00000000004F698C string=0x00000000004F6990 ""
 *   insn=0x00000000004F6994 string=0x00000000004F6998 "(\t"
 *   insn=0x00000000004F69A0 string=0x00000000004F69A4 "\t\t"
 *   insn=0x00000000004F69A8 string=0x00000000004F69AC "\t"
 *   insn=0x00000000004F69B4 string=0x00000000004F69B8 "\t"
 *   insn=0x00000000004F69BC string=0x00000000004F69C0 "\t)"
 *   insn=0x00000000004F69C8 string=0x00000000004F69CC ""
 *   insn=0x00000000004F69D4 string=0x00000000004F69E8 "("
 *   insn=0x00000000004F69DC string=0x00000000004F69E0 "v"
 *   insn=0x00000000004F69E0 string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004F6A00 string=0x00000000004F6A04 "\nA"
 *   insn=0x00000000004F6A08 string=0x00000000004F6A0C "\n"
 *   insn=0x00000000004F6A0C string=0x00000000004F6A10 ")"
 *   insn=0x00000000004F6A14 string=0x00000000004F6A18 "*"
 *   insn=0x00000000004F6A18 string=0x00000000004F6A1C ""
 *   insn=0x00000000004F6A1C string=0x00000000004F6A20 "(\t"
 *   insn=0x00000000004F6A20 string=0x00000000004F6A24 "="
 *   insn=0x00000000004F6A2C string=0x00000000004F6A30 "!"
 *   insn=0x00000000004F6A64 string=0x00000000004F6A68 "+"
 *   insn=0x00000000004F6A7C string=0x00000000004F6A80 "i"
 *   insn=0x00000000004F6A90 string=0x00000000004F6A94 ""
 *   insn=0x00000000004F6A98 string=0x00000000004F6A9C "|"
 *   insn=0x00000000004F6A9C string=0x00000000004F6AA0 ""
 *   insn=0x00000000004F6AA0 string=0x00000000004F6AA4 "("
 *   insn=0x00000000004F6AA8 string=0x00000000004F6AAC "HA"
 *   insn=0x00000000004F6ABC string=0x00000000004F6AC0 "(+"
 *   insn=0x00000000004F6AC8 string=0x00000000004F6ACC "8"
 *   insn=0x00000000004F6AE8 string=0x00000000004F6AEC "<"
 *   insn=0x00000000004F6B0C string=0x00000000004F6B10 "Y"
 *   insn=0x00000000004F6B18 string=0x00000000004F6B1C "s"
 *   insn=0x00000000004F6B20 string=0x00000000004F6B24 "B"
 *   insn=0x00000000004F6B24 string=0x00000000004F6B28 ","
 *   insn=0x00000000004F6B2C string=0x00000000004F6B30 ""
 *   insn=0x00000000004F6B38 string=0x00000000004F6B3C "!"
 *   insn=0x00000000004F6B60 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F67EC(__int64 result, int a2, int a3)
{
  _QWORD *v4; // x20
  __int64 v5; // x25
  __int64 v6; // x26
  double *v7; // x24
  double *v8; // x22
  double *v9; // x23
  int v10; // w8
  size_t v11; // x0
  __int64 v12; // x24
  __int64 v13; // x27
  __int64 v14; // x21
  int v15; // w8
  size_t v16; // x0
  unsigned __int64 v17; // x26
  __int64 *v18; // x0
  _DWORD *v19; // x8
  __int64 v20; // x9
  __int64 v21; // x11
  __int64 v22; // x8
  __int64 v23; // x8
  unsigned __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x9
  size_t v28; // x0
  char *v29; // x23
  size_t v30; // x24
  __int64 v31; // x28
  __int64 *v32; // x26
  __int64 v33; // t1
  size_t v34; // x25
  double *v35; // x22
  __int64 v36; // [xsp+10h] [xbp-80h]
  char s[32]; // [xsp+18h] [xbp-78h] BYREF
  __int64 v38; // [xsp+38h] [xbp-58h]

  v4 = (_QWORD *)result;
  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  do
  {
    v5 = v4[3];
    v6 = a3;
    v7 = (double *)(v5 + 16LL * a3);
    v8 = v7 + 2;
    v9 = v7 - 2;
    if ( (unsigned int)(*((_DWORD *)v7 - 2) - 3) > 1 )
    {
LABEL_16:
      v18 = sub_4F4ED4((__int64)v4, (_DWORD *)v7 - 4, 0xFu);
      v19 = v18 + 1;
      if ( !*((_DWORD *)v18 + 2) )
      {
        v18 = sub_4F4ED4((__int64)v4, v7, 0xFu);
        v19 = v18 + 1;
        if ( !*((_DWORD *)v18 + 2) )
          sub_4EB474((__int64)v4, (__int64)(v7 - 2), (__int64)v7);
      }
      v20 = v4[2];
      v21 = v4[8];
      *(_QWORD *)v20 = *v18;
      v14 = (__int64)v9 - v21;
      *(_DWORD *)(v20 + 8) = *v19;
      v22 = v4[2];
      *(double *)(v22 + 16) = *(v7 - 2);
      *(_DWORD *)(v22 + 24) = *((_DWORD *)v7 - 2);
      v23 = v4[2];
      *(double *)(v23 + 32) = *v7;
      *(_DWORD *)(v23 + 40) = *((_DWORD *)v7 + 2);
      v24 = v4[2];
      if ( (__int64)(v4[7] - v24) <= 48 )
      {
        sub_4EBBB8((__int64)v4, 3);
        v24 = v4[2];
      }
      v4[2] = v24 + 48;
      result = sub_4EC63C((__int64)v4, v24, 1);
      v25 = v4[2];
      v26 = v4[8];
      v4[2] = v25 - 16;
      v27 = v26 + v14;
      LODWORD(v14) = 2;
      *(_QWORD *)v27 = *(_QWORD *)(v25 - 16);
      *(_DWORD *)(v27 + 8) = *(_DWORD *)(v25 - 8);
      goto LABEL_30;
    }
    v10 = *((_DWORD *)v7 + 2);
    if ( v10 != 4 )
    {
      if ( v10 != 3 )
        goto LABEL_16;
      sprintf(s, "%.14g", *v7);
      v11 = strlen(s);
      result = sub_4F356C((__int64)v4, s, v11);
      *(_QWORD *)v7 = result;
      *((_DWORD *)v7 + 2) = 4;
    }
    v12 = *(_QWORD *)(*(_QWORD *)v7 + 16LL);
    if ( v12 )
    {
      v36 = v6;
      if ( a2 <= 1 )
      {
        LODWORD(v14) = 1;
      }
      else
      {
        v13 = v5 + 16 * v6 - 16;
        v14 = 1;
        do
        {
          v15 = *(_DWORD *)(v13 + 8);
          if ( v15 != 4 )
          {
            if ( v15 != 3 )
              break;
            sprintf(s, "%.14g", *(double *)v13);
            v16 = strlen(s);
            *(_QWORD *)v13 = sub_4F356C((__int64)v4, s, v16);
            *(_DWORD *)(v13 + 8) = 4;
          }
          v17 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
          if ( v17 >= -3 - v12 )
            sub_4EB320((__int64)v4, "string length overflow");
          ++v14;
          v12 += v17;
          v13 -= 16;
        }
        while ( v14 < a2 );
      }
      v29 = (char *)sub_4F8824(v4, v4[4] + 88LL);
      v30 = 0;
      if ( (int)v14 >= 1 )
      {
        v31 = (int)v14 + 1LL;
        v32 = (__int64 *)(v5 + 16 * (v36 - (int)v14) + 16);
        do
        {
          v33 = *v32;
          v32 += 2;
          v34 = *(_QWORD *)(v33 + 16);
          memcpy(&v29[v30], (const void *)(v33 + 24), v34);
          --v31;
          v30 += v34;
        }
        while ( v31 > 1 );
      }
      v35 = &v8[-2 * (int)v14];
      result = sub_4F356C((__int64)v4, v29, v30);
      LODWORD(v6) = v36;
      *(_QWORD *)v35 = result;
      *((_DWORD *)v35 + 2) = 4;
    }
    else
    {
      if ( *((_DWORD *)v9 + 2) == 3 )
      {
        sprintf(s, "%.14g", *v9);
        v28 = strlen(s);
        result = sub_4F356C((__int64)v4, s, v28);
        *(_QWORD *)v9 = result;
        *((_DWORD *)v9 + 2) = 4;
      }
      LODWORD(v14) = 2;
    }
LABEL_30:
    a2 -= v14 - 1;
    a3 = v6 - (v14 - 1);
  }
  while ( a2 > 1 );
  return result;
}

