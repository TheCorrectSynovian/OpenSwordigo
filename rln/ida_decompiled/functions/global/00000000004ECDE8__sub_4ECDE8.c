/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ECDE8
 * Mangled: sub_4ECDE8
 * Demangled: sub_4ECDE8
 *
 * Callers: 2
 *   0x00000000004E9C10  lua_dump(lua_State *,int (*)(lua_State *,void const*,ulong,void *),void *)
 *   0x00000000004ECDE8  sub_4ECDE8
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 68
 *   insn=0x00000000004ECE00 string=0x00000000004ECE04 "V"
 *   insn=0x00000000004ECE14 string=0x00000000004ECE18 "u"@"
 *   insn=0x00000000004ECE28 string=0x00000000004ECE2C "h"
 *   insn=0x00000000004ECE34 string=0x00000000004ECE38 ""
 *   insn=0x00000000004ECE44 string=0x00000000004ECEA0 "hb@"
 *   insn=0x00000000004ECE70 string=0x00000000004ECE74 "\t"
 *   insn=0x00000000004ECEA8 string=0x00000000004ECEC4 "hf@"
 *   insn=0x00000000004ECECC string=0x00000000004ECEE8 "h"
 *   insn=0x00000000004ECEF0 string=0x00000000004ECF0C "h"
 *   insn=0x00000000004ECF14 string=0x00000000004ECF30 "h"
 *   insn=0x00000000004ECF38 string=0x00000000004ECF54 "h"
 *   insn=0x00000000004ECF5C string=0x00000000004ECF78 "xR"
 *   insn=0x00000000004ECF78 string=0x00000000004ECF7C "u"
 *   insn=0x00000000004ECF84 string=0x00000000004ECFA4 "xN@"
 *   insn=0x00000000004ECFAC string=0x00000000004ECFB0 ""
 *   insn=0x00000000004ECFB0 string=0x00000000004ED0B0 "uZ@"
 *   insn=0x00000000004ECFB8 string=0x00000000004ECFBC "y\n@"
 *   insn=0x00000000004ECFBC string=0x00000000004ECFC0 ":"
 *   insn=0x00000000004ECFC0 string=0x00000000004ECFC4 "H@"
 *   insn=0x00000000004ECFD4 string=0x00000000004ED02C "9ku"
 *   insn=0x00000000004ECFDC string=0x00000000004ED074 "(ku"
 *   insn=0x00000000004ECFE4 string=0x00000000004ECFE8 "(ku"
 *   insn=0x00000000004ED000 string=0x00000000004ED004 "&"
 *   insn=0x00000000004ED01C string=0x00000000004ED020 "H@"
 *   insn=0x00000000004ED030 string=0x00000000004ED034 "(@"
 *   insn=0x00000000004ED034 string=0x00000000004ED038 ""
 *   insn=0x00000000004ED03C string=0x00000000004ED040 " "
 *   insn=0x00000000004ED058 string=0x00000000004ED05C "@"
 *   insn=0x00000000004ED068 string=0x00000000004ED06C "!c"
 *   insn=0x00000000004ED06C string=0x00000000004ED070 ""
 *   insn=0x00000000004ED078 string=0x00000000004ED07C "@"
 *   insn=0x00000000004ED0D4 string=0x00000000004ED0D8 "K"
 *   insn=0x00000000004ED0DC string=0x00000000004ED0E0 "h"
 *   insn=0x00000000004ED0E0 string=0x00000000004ED0E4 "a"@"
 *   insn=0x00000000004ED0EC string=0x00000000004ED0F0 ">"
 *   insn=0x00000000004ED0F8 string=0x00000000004ED0FC "!"
 *   insn=0x00000000004ED100 string=0x00000000004ED104 "h"
 *   insn=0x00000000004ED104 string=0x00000000004ED110 "xV@"
 *   insn=0x00000000004ED10C string=0x00000000004ED114 "u"
 *   insn=0x00000000004ED138 string=0x00000000004ED13C "@"
 *   insn=0x00000000004ED140 string=0x00000000004ED144 ""
 *   insn=0x00000000004ED144 string=0x00000000004ED3A4 "w^@"
 *   insn=0x00000000004ED178 string=0x00000000004ED17C "h"
 *   insn=0x00000000004ED180 string=0x00000000004ED184 "8"
 *   insn=0x00000000004ED184 string=0x00000000004ED188 "@"
 *   insn=0x00000000004ED188 string=0x00000000004ED18C ""
 *   insn=0x00000000004ED194 string=0x00000000004ED1E8 "h"
 *   insn=0x00000000004ED1C0 string=0x00000000004ED1C4 ""
 *   insn=0x00000000004ED1E8 string=0x00000000004ED1EC "\t"
 *   insn=0x00000000004ED1EC string=0x00000000004ED1F0 ")\t@"
 *   insn=0x00000000004ED1F8 string=0x00000000004ED218 ""
 *   insn=0x00000000004ED210 string=0x00000000004ED214 "h"
 *   insn=0x00000000004ED218 string=0x00000000004ED21C "@"
 *   insn=0x00000000004ED250 string=0x00000000004ED32C "wJ@"
 *   insn=0x00000000004ED278 string=0x00000000004ED27C "+"
 *   insn=0x00000000004ED284 string=0x00000000004ED288 "h"
 *   insn=0x00000000004ED28C string=0x00000000004ED290 "8"
 *   insn=0x00000000004ED290 string=0x00000000004ED294 "@"
 *   insn=0x00000000004ED294 string=0x00000000004ED298 ""
 *   insn=0x00000000004ED2CC string=0x00000000004ED2D0 ""
 *   insn=0x00000000004ED2F8 string=0x00000000004ED2FC "a"
 *   insn=0x00000000004ED308 string=0x00000000004ED30C "A"
 *   insn=0x00000000004ED330 string=0x00000000004ED334 " "
 *   insn=0x00000000004ED350 string=0x00000000004ED354 "xN@"
 *   insn=0x00000000004ED37C string=0x00000000004ED380 "L"
 *   insn=0x00000000004ED39C string=0x00000000004ED3A0 "H"
 *   insn=0x00000000004ED3AC string=0x00000000004ED3B0 "i"
 *   insn=0x00000000004ED3B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ECDE8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // x21
  int v6; // w0
  unsigned int *v7; // x23
  __int64 i; // x24
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x25
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x21
  __int64 j; // x24
  int v16; // w24
  __int64 v17; // x21
  __int64 result; // x0
  __int64 v19; // x23
  __int64 v20; // x21
  __int64 v21; // x24
  __int64 v22; // x8
  int v23; // w23
  __int64 v24; // x21
  __int64 v25; // x24
  _QWORD v26[2]; // [xsp+0h] [xbp-50h] BYREF

  v26[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 == a2 || !v5 || *((_DWORD *)a3 + 6) )
  {
    v26[0] = 0;
    v7 = (unsigned int *)a3 + 7;
    v6 = *((_DWORD *)a3 + 7);
    if ( v6 )
      goto LABEL_10;
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 8, a3[2]);
    goto LABEL_9;
  }
  v26[0] = *(_QWORD *)(v5 + 16) + 1LL;
  v7 = (unsigned int *)a3 + 7;
  v6 = *((_DWORD *)a3 + 7);
  if ( !v6 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 8, a3[2]);
    *((_DWORD *)a3 + 7) = v6;
    if ( !v6 )
    {
      v6 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))a3[1])(*a3, v5 + 24, v26[0], a3[2]);
LABEL_9:
      *((_DWORD *)a3 + 7) = v6;
    }
  }
LABEL_10:
  LODWORD(v26[0]) = *(_DWORD *)(a1 + 96);
  if ( !v6 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]);
    *((_DWORD *)a3 + 7) = v6;
  }
  LODWORD(v26[0]) = *(_DWORD *)(a1 + 100);
  if ( !v6 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]);
    *((_DWORD *)a3 + 7) = v6;
  }
  LOBYTE(v26[0]) = *(_BYTE *)(a1 + 112);
  if ( !v6 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 1, a3[2]);
    *((_DWORD *)a3 + 7) = v6;
  }
  LOBYTE(v26[0]) = *(_BYTE *)(a1 + 113);
  if ( !v6 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 1, a3[2]);
    *((_DWORD *)a3 + 7) = v6;
  }
  LOBYTE(v26[0]) = *(_BYTE *)(a1 + 114);
  if ( !v6 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 1, a3[2]);
    *((_DWORD *)a3 + 7) = v6;
  }
  LOBYTE(v26[0]) = *(_BYTE *)(a1 + 115);
  if ( !v6 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 1, a3[2]);
    *((_DWORD *)a3 + 7) = v6;
  }
  i = *(int *)(a1 + 80);
  v9 = *(_QWORD *)(a1 + 24);
  LODWORD(v26[0]) = *(_DWORD *)(a1 + 80);
  if ( v6
    || (v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]),
        (*((_DWORD *)a3 + 7) = v6) != 0) )
  {
    LODWORD(i) = *(_DWORD *)(a1 + 76);
    LODWORD(v26[0]) = i;
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))a3[1])(*a3, v9, 4 * i, a3[2]);
    *((_DWORD *)a3 + 7) = v6;
    LODWORD(i) = *(_DWORD *)(a1 + 76);
    LODWORD(v26[0]) = i;
    if ( !v6 )
    {
      v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]);
      *((_DWORD *)a3 + 7) = v6;
      if ( (int)i >= 1 )
        goto LABEL_26;
      goto LABEL_44;
    }
  }
  if ( (int)i >= 1 )
  {
LABEL_26:
    v10 = 0;
    for ( i = (unsigned int)i; i; --i )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_DWORD *)(v11 + v10 + 8);
      LOBYTE(v26[0]) = v12;
      if ( v6 )
      {
        if ( v12 != 4 )
          goto LABEL_29;
      }
      else
      {
        v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 1, a3[2]);
        *((_DWORD *)a3 + 7) = v6;
        v12 = *(_DWORD *)(v11 + v10 + 8);
        if ( v12 != 4 )
        {
LABEL_29:
          if ( v12 != 3 )
          {
            if ( v12 != 1 )
              goto LABEL_43;
            LOBYTE(v26[0]) = *(_DWORD *)(v11 + v10);
            if ( v6 )
              goto LABEL_43;
            v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 1, a3[2]);
            goto LABEL_42;
          }
          v26[0] = *(_QWORD *)(v11 + v10);
          if ( !v6 )
            goto LABEL_41;
          goto LABEL_43;
        }
      }
      v13 = *(_QWORD *)(v11 + v10);
      if ( v13 )
      {
        v26[0] = *(_QWORD *)(v13 + 16) + 1LL;
        if ( v6 )
          goto LABEL_43;
        v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 8, a3[2]);
        *((_DWORD *)a3 + 7) = v6;
        if ( v6 )
          goto LABEL_43;
        v6 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))a3[1])(*a3, v13 + 24, v26[0], a3[2]);
        goto LABEL_42;
      }
      v26[0] = 0;
      if ( !v6 )
      {
LABEL_41:
        v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 8, a3[2]);
LABEL_42:
        *((_DWORD *)a3 + 7) = v6;
      }
LABEL_43:
      v10 += 16;
    }
  }
LABEL_44:
  v14 = *(unsigned int *)(a1 + 88);
  LODWORD(v26[0]) = *(_DWORD *)(a1 + 88);
  if ( !v6 )
    *((_DWORD *)a3 + 7) = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]);
  if ( (int)v14 >= 1 )
  {
    for ( j = 0; j != v14; ++j )
      sub_4ECDE8(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * j), *(_QWORD *)(a1 + 64), a3);
  }
  if ( *((_DWORD *)a3 + 6) )
    v16 = 0;
  else
    v16 = *(_DWORD *)(a1 + 84);
  v17 = *(_QWORD *)(a1 + 40);
  LODWORD(v26[0]) = v16;
  result = *v7;
  if ( (_DWORD)result
    || (result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]),
        (*((_DWORD *)a3 + 7) = result) != 0) )
  {
    if ( *((_DWORD *)a3 + 6) )
      goto LABEL_55;
  }
  else
  {
    result = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))a3[1])(*a3, v17, 4LL * v16, a3[2]);
    *((_DWORD *)a3 + 7) = result;
    if ( *((_DWORD *)a3 + 6) )
    {
LABEL_55:
      LODWORD(v19) = 0;
      LODWORD(v26[0]) = 0;
      if ( (_DWORD)result )
        goto LABEL_57;
      goto LABEL_56;
    }
  }
  LODWORD(v19) = *(_DWORD *)(a1 + 92);
  LODWORD(v26[0]) = v19;
  if ( !(_DWORD)result )
  {
LABEL_56:
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]);
    *((_DWORD *)a3 + 7) = result;
  }
LABEL_57:
  if ( (int)v19 >= 1 )
  {
    v20 = 0;
    v19 = (unsigned int)v19;
    while ( 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + v20);
      if ( v21 )
        break;
      v26[0] = 0;
      if ( !(_DWORD)result )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 8, a3[2]);
LABEL_65:
        *((_DWORD *)a3 + 7) = result;
      }
LABEL_66:
      v22 = *(_QWORD *)(a1 + 48);
      LODWORD(v26[0]) = *(_DWORD *)(v22 + v20 + 8);
      if ( !(_DWORD)result )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]);
        *((_DWORD *)a3 + 7) = result;
        v22 = *(_QWORD *)(a1 + 48);
      }
      LODWORD(v26[0]) = *(_DWORD *)(v22 + v20 + 12);
      if ( !(_DWORD)result )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]);
        *((_DWORD *)a3 + 7) = result;
      }
      --v19;
      v20 += 16;
      if ( !v19 )
        goto LABEL_71;
    }
    v26[0] = *(_QWORD *)(v21 + 16) + 1LL;
    if ( (_DWORD)result )
      goto LABEL_66;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 8, a3[2]);
    *((_DWORD *)a3 + 7) = result;
    if ( (_DWORD)result )
      goto LABEL_66;
    result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))a3[1])(*a3, v21 + 24, v26[0], a3[2]);
    goto LABEL_65;
  }
LABEL_71:
  if ( *((_DWORD *)a3 + 6) )
  {
    v23 = 0;
    LODWORD(v26[0]) = 0;
    if ( (_DWORD)result )
      goto LABEL_74;
    goto LABEL_73;
  }
  v23 = *(_DWORD *)(a1 + 72);
  LODWORD(v26[0]) = v23;
  if ( !(_DWORD)result )
  {
LABEL_73:
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 4, a3[2]);
    *((_DWORD *)a3 + 7) = result;
  }
LABEL_74:
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v24);
      if ( v25 )
        break;
      v26[0] = 0;
      if ( !(_DWORD)result )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 8, a3[2]);
LABEL_82:
        *((_DWORD *)a3 + 7) = result;
      }
LABEL_83:
      if ( v23 == ++v24 )
        return result;
    }
    v26[0] = *(_QWORD *)(v25 + 16) + 1LL;
    if ( (_DWORD)result )
      goto LABEL_83;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64, _QWORD))a3[1])(*a3, v26, 8, a3[2]);
    *((_DWORD *)a3 + 7) = result;
    if ( (_DWORD)result )
      goto LABEL_83;
    result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))a3[1])(*a3, v25 + 24, v26[0], a3[2]);
    goto LABEL_82;
  }
  return result;
}

