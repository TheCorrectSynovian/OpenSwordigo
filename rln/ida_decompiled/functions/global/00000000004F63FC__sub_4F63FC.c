/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F63FC
 * Mangled: sub_4F63FC
 * Demangled: sub_4F63FC
 *
 * Callers: 2
 *   0x00000000004E7774  lua_lessthan(lua_State *,int,int)
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 7
 *   0x0000000000200A90  .strcoll
 *   0x0000000000203230  .strlen
 *   0x00000000004EB684  sub_4EB684
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004EEE84  sub_4EEE84
 *   0x00000000004F4ED4  sub_4F4ED4
 *
 * Referenced strings: 48
 *   insn=0x00000000004F6430 string=0x00000000004F6434 "a"
 *   insn=0x00000000004F6444 string=0x00000000004F6448 "\n"
 *   insn=0x00000000004F648C string=0x00000000004F4ED4 "(@"
 *   insn=0x00000000004F6494 string=0x00000000004F6498 "H"
 *   insn=0x00000000004F64B0 string=0x00000000004F64B4 "t"
 *   insn=0x00000000004F64B4 string=0x00000000004F64B8 "@"
 *   insn=0x00000000004F64B4 string=0x00000000004EEE84 "@"
 *   insn=0x00000000004F64B8 string=0x00000000004F64BC "h\n@"
 *   insn=0x00000000004F64C0 string=0x00000000004F64C4 "j"@"
 *   insn=0x00000000004F64C4 string=0x00000000004F64C8 "\t"
 *   insn=0x00000000004F64CC string=0x00000000004F64D0 "\t\t"
 *   insn=0x00000000004F64D0 string=0x00000000004F64D4 "i\n@"
 *   insn=0x00000000004F64D8 string=0x00000000004F64DC "+\t"
 *   insn=0x00000000004F64E0 string=0x00000000004F64E4 "+"
 *   insn=0x00000000004F64E4 string=0x00000000004F64E8 "i\n@"
 *   insn=0x00000000004F64EC string=0x00000000004F64F0 "+"
 *   insn=0x00000000004F64F8 string=0x00000000004F64FC "+)"
 *   insn=0x00000000004F64FC string=0x00000000004F6500 "i"
 *   insn=0x00000000004F6500 string=0x00000000004F6504 "a\n@"
 *   insn=0x00000000004F6504 string=0x00000000004F6508 ")"
 *   insn=0x00000000004F6508 string=0x00000000004F650C "?"
 *   insn=0x00000000004F6510 string=0x00000000004F6524 "("
 *   insn=0x00000000004F651C string=0x00000000004F6520 "a\n@"
 *   insn=0x00000000004F651C string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004F652C string=0x00000000004F6530 "h\n"
 *   insn=0x00000000004F6530 string=0x00000000004F6534 "B"
 *   insn=0x00000000004F6534 string=0x00000000004F6538 "h\n@"
 *   insn=0x00000000004F6538 string=0x00000000004F653C "i"@"
 *   insn=0x00000000004F653C string=0x00000000004F6540 "\nA"
 *   insn=0x00000000004F6540 string=0x00000000004F6544 "j\n"
 *   insn=0x00000000004F6544 string=0x00000000004F6548 "\n"
 *   insn=0x00000000004F6548 string=0x00000000004F654C ")"
 *   insn=0x00000000004F654C string=0x00000000004F6550 "*"
 *   insn=0x00000000004F6550 string=0x00000000004F6554 ""
 *   insn=0x00000000004F6554 string=0x00000000004F6558 "(\t"
 *   insn=0x00000000004F6558 string=0x00000000004F655C "h\n@"
 *   insn=0x00000000004F655C string=0x00000000004F6560 "\t\t@"
 *   insn=0x00000000004F6560 string=0x00000000004F6564 "\t"
 *   insn=0x00000000004F6564 string=0x00000000004F6568 "?"
 *   insn=0x00000000004F656C string=0x00000000004F6570 ""
 *   insn=0x00000000004F6594 string=0x00000000004F6598 ";"
 *   insn=0x00000000004F65A4 string=0x00000000004F65A8 ""3"
 *   insn=0x00000000004F65AC string=0x00000000004F65B0 " "
 *   insn=0x00000000004F65B4 string=0x00000000004F65B8 " "
 *   insn=0x00000000004F65B8 string=0x00000000004F65BC ""
 *   insn=0x00000000004F65BC string=0x00000000004F65C0 "s"
 *   insn=0x00000000004F65D4 string=0x00000000004F65D8 ".)"
 *   insn=0x00000000004F65D8 string=0x00000000004F65DC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F63FC(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // w8
  __int64 v8; // x22
  __int64 v9; // x21
  const char *v10; // x19
  const char *v11; // x20
  unsigned int v12; // w0
  __int64 *v13; // x22
  __int64 *v14; // x0
  __int64 v15; // x8
  __int64 v16; // x10
  __int64 v17; // x9
  __int64 v18; // x9
  int v19; // w11
  __int64 v20; // x20
  unsigned __int64 v21; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x9
  _DWORD *v25; // x8
  int v26; // w9
  __int64 v27; // x21
  __int64 v28; // x22
  size_t v29; // x0

  v5 = a2[2];
  if ( v5 != a3[2] )
    goto LABEL_14;
  if ( v5 != 4 )
  {
    if ( v5 == 3 )
      return *(double *)a2 < *(double *)a3;
    v13 = sub_4F4ED4((__int64)a1, a2, 0xDu);
    if ( *((_DWORD *)v13 + 2) )
    {
      v14 = sub_4F4ED4((__int64)a1, a3, 0xDu);
      if ( sub_4EEE84(v13, v14) )
      {
        v15 = a1[2];
        v16 = a1[8];
        *(_QWORD *)v15 = *v13;
        *(_DWORD *)(v15 + 8) = *((_DWORD *)v13 + 2);
        v17 = a1[2];
        *(_QWORD *)(v17 + 16) = *(_QWORD *)a2;
        *(_DWORD *)(v17 + 24) = a2[2];
        v18 = a1[2];
        *(_QWORD *)(v18 + 32) = *(_QWORD *)a3;
        v19 = a3[2];
        v20 = v15 - v16;
        *(_DWORD *)(v18 + 40) = v19;
        v21 = a1[2];
        if ( (__int64)(a1[7] - v21) <= 48 )
        {
          sub_4EBBB8((__int64)a1, 3);
          v21 = a1[2];
        }
        a1[2] = v21 + 48;
        sub_4EC63C((__int64)a1, v21, 1);
        v22 = a1[2];
        v23 = a1[8];
        a1[2] = v22 - 16;
        v24 = v23 + v20;
        *(_QWORD *)v24 = *(_QWORD *)(v22 - 16);
        *(_DWORD *)(v24 + 8) = *(_DWORD *)(v22 - 8);
        v25 = (_DWORD *)a1[2];
        v26 = v25[2];
        if ( !v26 )
          return 0;
        if ( v26 == 1 )
          return *v25 != 0;
        return 1;
      }
    }
LABEL_14:
    sub_4EB684((__int64)a1, (__int64)a2, (__int64)a3);
  }
  v8 = *(_QWORD *)a2;
  v9 = *(_QWORD *)a3;
  v10 = (const char *)(*(_QWORD *)a2 + 24LL);
  v11 = (const char *)(*(_QWORD *)a3 + 24LL);
  v12 = strcoll(v10, v11);
  if ( !v12 )
  {
    v27 = *(_QWORD *)(v9 + 16);
    v28 = *(_QWORD *)(v8 + 16);
    while ( 1 )
    {
      v29 = strlen(v10);
      if ( v29 == v27 )
      {
        v12 = 0;
        return v12 >> 31;
      }
      if ( v29 == v28 )
        break;
      v10 += v29 + 1;
      v11 += v29 + 1;
      v28 -= v29 + 1;
      v27 -= v29 + 1;
      v12 = strcoll(v10, v11);
      if ( v12 )
        return v12 >> 31;
    }
    v12 = -1;
  }
  return v12 >> 31;
}

