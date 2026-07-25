/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F61E8
 * Mangled: sub_4F61E8
 * Demangled: sub_4F61E8
 *
 * Callers: 3
 *   0x00000000004E908C  lua_settable(lua_State *,int)
 *   0x00000000004E9194  lua_setfield(lua_State *,int,char const*)
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EB03C  sub_4EB03C
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004EE46C  sub_4EE46C
 *   0x00000000004F4320  sub_4F4320
 *   0x00000000004F4E8C  sub_4F4E8C
 *   0x00000000004F4ED4  sub_4F4ED4
 *
 * Referenced strings: 50
 *   insn=0x00000000004F6204 string=0x00000000004F6208 "["
 *   insn=0x00000000004F6208 string=0x00000000004F620C "h"
 *   insn=0x00000000004F6210 string=0x00000000004F6214 "7"
 *   insn=0x00000000004F6214 string=0x000000000059AE27 "index"
 *   insn=0x00000000004F6248 string=0x00000000004F624C "5"
 *   insn=0x00000000004F6250 string=0x00000000004F6254 "H@"
 *   insn=0x00000000004F6254 string=0x00000000004F6258 ""
 *   insn=0x00000000004F6260 string=0x00000000004F6264 "(@9"
 *   insn=0x00000000004F6268 string=0x00000000004F626C "h"
 *   insn=0x00000000004F6280 string=0x00000000004F6284 "8#"
 *   insn=0x00000000004F6284 string=0x00000000004F6288 ""
 *   insn=0x00000000004F6288 string=0x00000000004F62BC ""
 *   insn=0x00000000004F6298 string=0x00000000004F4ED4 "(@"
 *   insn=0x00000000004F62A0 string=0x00000000004F62A4 ""
 *   insn=0x00000000004F62B4 string=0x00000000004F62B8 "a"
 *   insn=0x00000000004F62C4 string=0x00000000004F62C8 ")"
 *   insn=0x00000000004F62C4 string=0x00000000004F6340 "h\n@"
 *   insn=0x00000000004F62E0 string=0x00000000004F62E4 "!"
 *   insn=0x00000000004F62E4 string=0x000000000059A4CB "loop in settable"
 *   insn=0x00000000004F62F4 string=0x00000000004F63C8 "h"
 *   insn=0x00000000004F62F8 string=0x00000000004F62FC "H"
 *   insn=0x00000000004F6300 string=0x00000000004F6304 "H"
 *   insn=0x00000000004F6318 string=0x00000000004F631C "%@9"
 *   insn=0x00000000004F6320 string=0x00000000004F6324 " "
 *   insn=0x00000000004F6324 string=0x00000000004F6328 "'@9"
 *   insn=0x00000000004F6334 string=0x00000000004F6338 "M"
 *   insn=0x00000000004F6338 string=0x00000000004F633C "#"
 *   insn=0x00000000004F6338 string=0x00000000004EE46C "($@9\t"
 *   insn=0x00000000004F6340 string=0x00000000004F6344 ")"
 *   insn=0x00000000004F6344 string=0x00000000004F6348 "\t"
 *   insn=0x00000000004F6348 string=0x00000000004F634C "\t"
 *   insn=0x00000000004F634C string=0x00000000004F6350 "\t\t"
 *   insn=0x00000000004F6350 string=0x00000000004F6354 "h\n@"
 *   insn=0x00000000004F6358 string=0x00000000004F635C "\t\t"
 *   insn=0x00000000004F6360 string=0x00000000004F6364 "\t"
 *   insn=0x00000000004F6364 string=0x00000000004F6368 "h\n@"
 *   insn=0x00000000004F636C string=0x00000000004F6370 "\t"
 *   insn=0x00000000004F6374 string=0x00000000004F6378 "\t)"
 *   insn=0x00000000004F6378 string=0x00000000004F637C "h\n@"
 *   insn=0x00000000004F6380 string=0x00000000004F6384 "\t"
 *   insn=0x00000000004F6388 string=0x00000000004F638C "\t9"
 *   insn=0x00000000004F638C string=0x00000000004F6390 "h"
 *   insn=0x00000000004F6390 string=0x00000000004F6394 "a\n@"
 *   insn=0x00000000004F6394 string=0x00000000004F6398 ""
 *   insn=0x00000000004F63A0 string=0x00000000004F63B4 "("
 *   insn=0x00000000004F63AC string=0x00000000004F63B0 "a\n@"
 *   insn=0x00000000004F63AC string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004F63BC string=0x00000000004F63C0 "h\n"
 *   insn=0x00000000004F63D0 string=0x00000000004F63D4 "!"
 *   insn=0x00000000004F63F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4F61E8(_QWORD *a1, __int64 *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 *v4; // x22
  int v6; // w8
  unsigned int v9; // w28
  __int64 v10; // x24
  __int64 *result; // x0
  __int64 *v12; // x26
  __int64 *v13; // x25
  _DWORD *v14; // x24
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  unsigned __int64 v19; // x1
  __int64 v20; // [xsp+8h] [xbp-68h] BYREF
  int v21; // [xsp+10h] [xbp-60h]
  __int64 v22; // [xsp+18h] [xbp-58h]

  v4 = a2;
  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((_DWORD *)a2 + 2);
  v9 = -1;
  while ( v6 != 5 )
  {
    v13 = sub_4F4ED4((__int64)a1, v4, 1u);
    v14 = v13 + 1;
    v6 = *((_DWORD *)v13 + 2);
    if ( !v6 )
      sub_4EB03C((__int64)a1, (__int64)v4, "index");
LABEL_10:
    if ( v6 == 6 )
    {
      v15 = a1[2];
      *(_QWORD *)v15 = *v13;
      *(_DWORD *)(v15 + 8) = *v14;
      v16 = a1[2];
      *(_QWORD *)(v16 + 16) = *v4;
      *(_DWORD *)(v16 + 24) = *((_DWORD *)v4 + 2);
      v17 = a1[2];
      *(_QWORD *)(v17 + 32) = *(_QWORD *)a3;
      *(_DWORD *)(v17 + 40) = a3[2];
      v18 = a1[2];
      *(_QWORD *)(v18 + 48) = *(_QWORD *)a4;
      *(_DWORD *)(v18 + 56) = a4[2];
      v19 = a1[2];
      if ( (__int64)(a1[7] - v19) <= 64 )
      {
        sub_4EBBB8((__int64)a1, 4);
        v19 = a1[2];
      }
      a1[2] = v19 + 64;
      return (__int64 *)sub_4EC63C((__int64)a1, v19, 0);
    }
    ++v9;
    v4 = &v20;
    v20 = *v13;
    v21 = v6;
    if ( v9 >= 0x63 )
      sub_4EB320((__int64)a1, "loop in settable");
  }
  v10 = *v4;
  result = sub_4F4320((__int64)a1, *v4, a3);
  v12 = result;
  if ( !*((_DWORD *)result + 2) )
  {
    result = *(__int64 **)(v10 + 16);
    if ( result )
    {
      if ( (*((_BYTE *)result + 10) & 2) == 0 )
      {
        result = sub_4F4E8C((__int64)result, 1, *(_QWORD *)(a1[4] + 304LL));
        v13 = result;
        if ( result )
        {
          v14 = result + 1;
          v6 = *((_DWORD *)result + 2);
          goto LABEL_10;
        }
      }
    }
  }
  *v12 = *(_QWORD *)a4;
  *((_DWORD *)v12 + 2) = a4[2];
  *(_BYTE *)(v10 + 10) = 0;
  if ( (int)a4[2] >= 4 && (*(_BYTE *)(*(_QWORD *)a4 + 9LL) & 3) != 0 && (*(_BYTE *)(v10 + 9) & 4) != 0 )
    return (__int64 *)sub_4EE46C((__int64)a1, v10);
  return result;
}

