/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3A60
 * Mangled: sub_4F3A60
 * Demangled: sub_4F3A60
 *
 * Callers: 2
 *   0x00000000004F3A34  sub_4F3A34
 *   0x00000000004F43C0  sub_4F43C0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004F3EC8  sub_4F3EC8
 *   0x00000000004F4118  sub_4F4118
 *   0x00000000004F43C0  sub_4F43C0
 *
 * Referenced strings: 78
 *   insn=0x00000000004F3A7C string=0x00000000004F3A80 "\"
 *   insn=0x00000000004F3AA4 string=0x00000000004F3AA8 "_"
 *   insn=0x00000000004F3ABC string=0x00000000004F3AC0 "B"
 *   insn=0x00000000004F3AEC string=0x00000000004F3AF0 "\n"
 *   insn=0x00000000004F3AF0 string=0x00000000004F3AF4 "_\t"
 *   insn=0x00000000004F3AFC string=0x00000000004F3B00 "K"
 *   insn=0x00000000004F3AFC string=0x00000000004F3B2C ""
 *   insn=0x00000000004F3B00 string=0x00000000004F3B04 ""
 *   insn=0x00000000004F3B04 string=0x00000000004F3B08 "i"
 *   insn=0x00000000004F3B20 string=0x00000000004F3B24 "_"
 *   insn=0x00000000004F3B2C string=0x00000000004F3B30 "\t"
 *   insn=0x00000000004F3B30 string=0x00000000004F3B34 ")!"
 *   insn=0x00000000004F3B34 string=0x00000000004F3B38 ""
 *   insn=0x00000000004F3B38 string=0x00000000004F3B3C "?"
 *   insn=0x00000000004F3B54 string=0x00000000004F3B58 "_"
 *   insn=0x00000000004F3B60 string=0x00000000004F3B64 "<"
 *   insn=0x00000000004F3B84 string=0x00000000004F3B88 ";"
 *   insn=0x00000000004F3B88 string=0x00000000004F3B8C "h"
 *   insn=0x00000000004F3B90 string=0x00000000004F3C4C "_"
 *   insn=0x00000000004F3B98 string=0x00000000004F3B9C "i"
 *   insn=0x00000000004F3B9C string=0x00000000004F3BA0 " "
 *   insn=0x00000000004F3B9C string=0x00000000004F3BA8 "`"
 *   insn=0x00000000004F3BA0 string=0x00000000004F3BA4 ""
 *   insn=0x00000000004F3BB0 string=0x00000000004F3BB4 ""
 *   insn=0x00000000004F3BB8 string=0x00000000004F3BBC "\n"
 *   insn=0x00000000004F3BBC string=0x00000000004F3BC0 "i!"
 *   insn=0x00000000004F3BC0 string=0x00000000004F3BC4 "H"
 *   insn=0x00000000004F3BC8 string=0x00000000004F3BCC ")"
 *   insn=0x00000000004F3BCC string=0x00000000004F3BD0 ")"
 *   insn=0x00000000004F3BD0 string=0x00000000004F3BD4 "\t"
 *   insn=0x00000000004F3BD4 string=0x00000000004F3BD8 "h"
 *   insn=0x00000000004F3BD8 string=0x00000000004F3BDC "\t"
 *   insn=0x00000000004F3BE4 string=0x00000000004F3BEC ""
 *   insn=0x00000000004F3BF8 string=0x00000000004F3BFC "  `"
 *   insn=0x00000000004F3C04 string=0x00000000004F3C08 " "
 *   insn=0x00000000004F3C10 string=0x00000000004F3C14 "!"
 *   insn=0x00000000004F3C14 string=0x00000000004F3C18 "`"
 *   insn=0x00000000004F3C14 string=0x00000000004F3C38 ""
 *   insn=0x00000000004F3C38 string=0x00000000004F3C3C "(kh"
 *   insn=0x00000000004F3C3C string=0x00000000004F3C40 ""
 *   insn=0x00000000004F3C40 string=0x00000000004F3C44 "h"
 *   insn=0x00000000004F3C44 string=0x00000000004F3C48 ""
 *   insn=0x00000000004F3C50 string=0x00000000004F3C54 "a"
 *   insn=0x00000000004F3C58 string=0x00000000004F3C5C ""
 *   insn=0x00000000004F3C64 string=0x00000000004F3C68 "B"
 *   insn=0x00000000004F3C70 string=0x00000000004F3C74 "@"
 *   insn=0x00000000004F3C7C string=0x00000000004F3C80 "X"
 *   insn=0x00000000004F3C9C string=0x00000000004F3CA0 "h~@"
 *   insn=0x00000000004F3CA8 string=0x00000000004F3CAC "\t"
 *   insn=0x00000000004F3CAC string=0x00000000004F3CB0 "9"
 *   insn=0x00000000004F3CB0 string=0x00000000004F3CB4 "6"
 *   insn=0x00000000004F3CB4 string=0x00000000004F3CB8 "h")"
 *   insn=0x00000000004F3CB4 string=0x000000000059A2DB "table index is NaN"
 *   insn=0x00000000004F3CB8 string=0x00000000004F3CBC "7"
 *   insn=0x00000000004F3CBC string=0x00000000004F3CC0 "9#/"
 *   insn=0x00000000004F3CBC string=0x000000000059A2C8 "table index is nil"
 *   insn=0x00000000004F3CC4 string=0x00000000004F3CC8 "A"
 *   insn=0x00000000004F3CCC string=0x00000000004F3CD0 "h"
 *   insn=0x00000000004F3CD4 string=0x00000000004F3CD8 "x#"
 *   insn=0x00000000004F3CD4 string=0x00000000004F3D48 "Z"
 *   insn=0x00000000004F3CE0 string=0x00000000004F3CE4 ""
 *   insn=0x00000000004F3CEC string=0x00000000004F3CF0 "A"
 *   insn=0x00000000004F3CF0 string=0x00000000004F3CF4 "h"
 *   insn=0x00000000004F3CF0 string=0x00000000004F3D38 "h"
 *   insn=0x00000000004F3CFC string=0x00000000004F3D00 "H"
 *   insn=0x00000000004F3CFC string=0x00000000004F3D10 "`"
 *   insn=0x00000000004F3D38 string=0x00000000004F3D3C ""
 *   insn=0x00000000004F3D3C string=0x00000000004F3D40 "h"
 *   insn=0x00000000004F3D40 string=0x00000000004F3D44 ""
 *   insn=0x00000000004F3D48 string=0x00000000004F3D4C "_"
 *   insn=0x00000000004F3D4C string=0x00000000004F3D50 "{"
 *   insn=0x00000000004F3D58 string=0x00000000004F3D5C "("
 *   insn=0x00000000004F3D5C string=0x00000000004F3D64 "?"
 *   insn=0x00000000004F3D68 string=0x00000000004F3D6C ""
 *   insn=0x00000000004F3D6C string=0x00000000004F3D70 "b~("
 *   insn=0x00000000004F3D88 string=0x00000000004F3D8C "!"
 *   insn=0x00000000004F3D8C string=0x00000000004F3DB0 "H\t"
 *   insn=0x00000000004F3DB0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3A60(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v7; // x26
  int v8; // w19
  __int64 v10; // x0
  __int64 v11; // x12
  unsigned __int64 v12; // x10
  __int64 v13; // x9
  _DWORD *v14; // x12
  unsigned __int64 v15; // x13
  __int64 v16; // x8
  _DWORD *v17; // x9
  __int64 result; // x0
  __int64 *v19; // x23
  __int64 v20; // x24
  __int64 v21; // x25
  int v22; // w19
  __int64 v23; // x27
  _DWORD *v24; // x27
  int v25; // t1
  __int64 v26; // x0
  double v27; // d0
  bool v28; // zf
  int v29; // w19
  __int64 v30; // x26
  char *v31; // x27
  int v32; // [xsp+14h] [xbp-7Ch]
  char *v33; // [xsp+20h] [xbp-70h]
  double v34; // [xsp+28h] [xbp-68h] BYREF
  int v35; // [xsp+30h] [xbp-60h]
  __int64 v36; // [xsp+38h] [xbp-58h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(int *)(a2 + 56);
  v8 = *(unsigned __int8 *)(a2 + 11);
  v33 = *(char **)(a2 + 32);
  if ( (int)v7 < a3 )
  {
    if ( a3 < -1 )
      sub_4EEDE0(a1);
    v10 = sub_4EED74(a1, *(_QWORD *)(a2 + 24), 16 * v7, 16LL * a3);
    v11 = *(int *)(a2 + 56);
    *(_QWORD *)(a2 + 24) = v10;
    if ( (int)v11 < a3 )
    {
      v12 = a3 - v11;
      v13 = v11;
      if ( v12 < 2 )
        goto LABEL_10;
      v13 = (v12 & 0xFFFFFFFFFFFFFFFELL) + v11;
      v14 = (_DWORD *)(v10 + 16 * v11 + 24);
      v15 = v12 & 0xFFFFFFFFFFFFFFFELL;
      do
      {
        *(v14 - 4) = 0;
        *v14 = 0;
        v14 += 8;
        v15 -= 2LL;
      }
      while ( v15 );
      if ( v12 != (v12 & 0xFFFFFFFFFFFFFFFELL) )
      {
LABEL_10:
        v16 = a3 - v13;
        v17 = (_DWORD *)(v10 + 16 * v13 + 8);
        do
        {
          --v16;
          *v17 = 0;
          v17 += 4;
        }
        while ( v16 );
      }
    }
    *(_DWORD *)(a2 + 56) = a3;
  }
  result = sub_4F3EC8(a1, a2, a4);
  if ( (int)v7 > a3 )
  {
    v19 = (__int64 *)(a2 + 24);
    v20 = a3;
    v32 = v8;
    *(_DWORD *)(a2 + 56) = a3;
    do
    {
      v21 = *v19;
      v22 = v20 + 1;
      v23 = *v19 + 16 * v20;
      v25 = *(_DWORD *)(v23 + 8);
      v24 = (_DWORD *)(v23 + 8);
      if ( v25 )
      {
        if ( *(_DWORD *)(a2 + 56) <= (unsigned int)v20 )
        {
          v27 = (double)v22;
          if ( (_DWORD)v20 == -1 )
            v26 = *(_QWORD *)(a2 + 32);
          else
            v26 = *(_QWORD *)(a2 + 32)
                + 40LL * ((HIDWORD(v27) + LODWORD(v27)) % (((1 << *(_BYTE *)(a2 + 11)) - 1) | 1u));
          while ( *(_DWORD *)(v26 + 24) != 3 || *(double *)(v26 + 16) != v27 )
          {
            v26 = *(_QWORD *)(v26 + 32);
            if ( !v26 )
              goto LABEL_27;
          }
        }
        else
        {
          v26 = v21 + 16 * v20;
        }
        if ( (__int64 *)v26 == &qword_599BC8 )
        {
          v27 = (double)v22;
LABEL_27:
          v34 = v27;
          v35 = 3;
          v26 = sub_4F43C0(a1, a2, &v34);
        }
        *(_QWORD *)v26 = *(_QWORD *)(v21 + 16 * v20);
        *(_DWORD *)(v26 + 8) = *v24;
      }
      ++v20;
    }
    while ( (_DWORD)v7 != v22 );
    if ( a3 < -1 )
      sub_4EEDE0(a1);
    result = sub_4EED74(a1, *v19, 16 * v7, 16LL * a3);
    v8 = v32;
    *v19 = result;
  }
  v28 = v8 == 31;
  v29 = 1 << v8;
  if ( !v28 )
  {
    v30 = v29 + 1LL;
    v31 = &v33[40 * v29 - 16];
    do
    {
      if ( *((_DWORD *)v31 - 4) )
      {
        result = sub_4F4118(a2, v31 - 8);
        *(_BYTE *)(a2 + 10) = 0;
        if ( (__int64 *)result == &qword_599BC8 )
        {
          if ( !*(_DWORD *)v31 )
            sub_4EB320(a1, "table index is nil");
          result = sub_4F43C0(a1, a2, v31 - 8);
        }
        *(_QWORD *)result = *((_QWORD *)v31 - 3);
        *(_DWORD *)(result + 8) = *((_DWORD *)v31 - 4);
      }
      --v30;
      v31 -= 40;
    }
    while ( v30 > 1 );
  }
  if ( v33 != (char *)&unk_59A2A0 )
    return sub_4EED74(a1, (__int64)v33, 40LL * v29, 0);
  return result;
}

