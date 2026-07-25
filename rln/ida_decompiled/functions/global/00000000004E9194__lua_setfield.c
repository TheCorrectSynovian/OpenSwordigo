/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9194
 * Mangled: _Z12lua_setfieldP9lua_StateiPKc
 * Demangled: lua_setfield(lua_State *,int,char const*)
 *
 * Callers: 1
 *   0x00000000001FA550  lua_setfield(lua_State *,int,char const*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203230  .strlen
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F61E8  sub_4F61E8
 *
 * Referenced strings: 42
 *   insn=0x00000000004E91A4 string=0x00000000004E91A8 "V"
 *   insn=0x00000000004E91B4 string=0x00000000004E91B8 "?"
 *   insn=0x00000000004E91BC string=0x00000000004E91C0 "+"
 *   insn=0x00000000004E91C0 string=0x00000000004E91C4 "i"A"
 *   insn=0x00000000004E91C8 string=0x00000000004E91D0 ""
 *   insn=0x00000000004E91D0 string=0x00000000004E91D4 "A"
 *   insn=0x00000000004E91E4 string=0x00000000004E91E8 "?"
 *   insn=0x00000000004E91EC string=0x00000000004E91F0 "h\n@"
 *   insn=0x00000000004E91EC string=0x00000000004E9264 "("
 *   insn=0x00000000004E91F8 string=0x00000000004E91FC "h"
 *   insn=0x00000000004E9218 string=0x00000000004E921C "h\n@"
 *   insn=0x00000000004E9230 string=0x00000000004E9234 "h\n@"
 *   insn=0x00000000004E9234 string=0x00000000004E9238 "A"
 *   insn=0x00000000004E9238 string=0x00000000004E923C "h\n"
 *   insn=0x00000000004E9248 string=0x00000000004E924C "A"
 *   insn=0x00000000004E9264 string=0x00000000004E9268 "?"
 *   insn=0x00000000004E9268 string=0x00000000004E926C "@"
 *   insn=0x00000000004E926C string=0x00000000004E9270 ""
 *   insn=0x00000000004E926C string=0x00000000004E9294 "u"
 *   insn=0x00000000004E9270 string=0x00000000004E9274 "?"
 *   insn=0x00000000004E9274 string=0x00000000004E9278 " "
 *   insn=0x00000000004E9278 string=0x00000000004E929C "h"
 *   insn=0x00000000004E927C string=0x00000000004E9280 "?"
 *   insn=0x00000000004E9284 string=0x00000000004E9288 "h"
 *   insn=0x00000000004E9284 string=0x00000000004E92C0 "h"
 *   insn=0x00000000004E92A0 string=0x00000000004E92A4 "u""
 *   insn=0x00000000004E92A4 string=0x00000000004E92A8 ""
 *   insn=0x00000000004E92A8 string=0x00000000004E92AC ""
 *   insn=0x00000000004E92AC string=0x00000000004E92B0 "@"
 *   insn=0x00000000004E92B0 string=0x00000000004E92B4 "i"
 *   insn=0x00000000004E92B4 string=0x00000000004E92B8 "hF"
 *   insn=0x00000000004E92C0 string=0x00000000004E92C4 ")"
 *   insn=0x00000000004E92C4 string=0x00000000004E92C8 ")"
 *   insn=0x00000000004E92CC string=0x00000000004E92D0 ""
 *   insn=0x00000000004E92D0 string=0x00000000004E92D4 "k!/"
 *   insn=0x00000000004E92D4 string=0x00000000004E92D8 ""
 *   insn=0x00000000004E92D8 string=0x00000000004E92DC "\n-@9"
 *   insn=0x00000000004E92DC string=0x00000000004E92E0 ""
 *   insn=0x00000000004E92E0 string=0x00000000004E92E4 "a"
 *   insn=0x00000000004E92E4 string=0x00000000004E92E8 "?"
 *   insn=0x00000000004E92E8 string=0x00000000004E92EC "u"
 *   insn=0x00000000004E92F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_setfield(__int64 a1, int a2, char *a3)
{
  __int64 *v5; // x21
  size_t v6; // x0
  __int64 result; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  int v11; // w10
  __int64 v12; // x8
  __int64 v13; // [xsp+8h] [xbp-38h] BYREF
  int v14; // [xsp+10h] [xbp-30h]
  __int64 v15; // [xsp+18h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v5 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v5 = (__int64 *)(a1 + 136);
          v8 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v8;
          break;
        case -10000:
          v5 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v9 = -10002LL - a2;
          v10 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v11 = *(unsigned __int8 *)(v10 + 11);
          v12 = v10 + 16 * v9 + 24;
          if ( (int)v9 <= v11 )
            v5 = (__int64 *)v12;
          else
            v5 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v5 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
  {
    v5 = &qword_599BC8;
  }
  else
  {
    v5 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  }
  v6 = strlen(a3);
  v13 = sub_4F356C(a1, a3, v6);
  v14 = 4;
  result = sub_4F61E8(a1, v5, &v13, *(_QWORD *)(a1 + 16) - 16LL);
  *(_QWORD *)(a1 + 16) -= 16LL;
  return result;
}

