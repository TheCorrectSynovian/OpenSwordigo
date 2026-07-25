/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F49E8
 * Mangled: sub_4F49E8
 * Demangled: sub_4F49E8
 *
 * Callers: 4
 *   0x00000000004E944C  lua_rawseti(lua_State *,int,int)
 *   0x00000000004EA630  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004F43C0  sub_4F43C0
 *
 * Referenced strings: 31
 *   insn=0x00000000004F49F4 string=0x00000000004F49F8 "S"
 *   insn=0x00000000004F49F8 string=0x00000000004F49FC "h"
 *   insn=0x00000000004F4A00 string=0x00000000004F4A04 ")8@"
 *   insn=0x00000000004F4A04 string=0x00000000004F4A08 "H"
 *   insn=0x00000000004F4A10 string=0x00000000004F4A14 ")"
 *   insn=0x00000000004F4A10 string=0x00000000004F4A20 "@"
 *   insn=0x00000000004F4A14 string=0x00000000004F4A18 "("
 *   insn=0x00000000004F4A18 string=0x00000000004F4A1C ""
 *   insn=0x00000000004F4A1C string=0x00000000004F4A88 ")"
 *   insn=0x00000000004F4A24 string=0x00000000004F4A28 "*,@9"
 *   insn=0x00000000004F4A24 string=0x00000000004F4A60 "("
 *   insn=0x00000000004F4A28 string=0x00000000004F4A2C ""
 *   insn=0x00000000004F4A2C string=0x00000000004F4A30 "\t"
 *   insn=0x00000000004F4A34 string=0x00000000004F4A38 "("
 *   insn=0x00000000004F4A3C string=0x00000000004F4A40 "+"
 *   insn=0x00000000004F4A40 string=0x00000000004F4A44 ")"
 *   insn=0x00000000004F4A44 string=0x00000000004F4A48 ")"
 *   insn=0x00000000004F4A48 string=0x00000000004F4A4C "\n\t"
 *   insn=0x00000000004F4A4C string=0x00000000004F4A50 "H"
 *   insn=0x00000000004F4A50 string=0x00000000004F4A54 "\t"
 *   insn=0x00000000004F4A54 string=0x00000000004F4A58 "-"
 *   insn=0x00000000004F4A5C string=0x00000000004F4A64 "\t"
 *   insn=0x00000000004F4A64 string=0x00000000004F4A68 "?"
 *   insn=0x00000000004F4A6C string=0x00000000004F4A7C ""
 *   insn=0x00000000004F4A70 string=0x00000000004F4A74 "  `"
 *   insn=0x00000000004F4A7C string=0x00000000004F4A80 "("
 *   insn=0x00000000004F4A94 string=0x00000000004F4A98 "@"
 *   insn=0x00000000004F4A94 string=0x00000000004F4AB4 "i"
 *   insn=0x00000000004F4AA8 string=0x00000000004F4AAC "E"
 *   insn=0x00000000004F4AB8 string=0x00000000004F4ABC "?"
 *   insn=0x00000000004F4AD8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F49E8(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x8
  double v4; // d0
  double v6; // [xsp+8h] [xbp-28h] BYREF
  int v7; // [xsp+10h] [xbp-20h]
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (unsigned int)(a3 - 1) >= *(_DWORD *)(a2 + 56) )
  {
    v4 = (double)a3;
    if ( a3 )
      v3 = *(_QWORD *)(a2 + 32) + 40LL * ((HIDWORD(v4) + LODWORD(v4)) % (((1 << *(_BYTE *)(a2 + 11)) - 1) | 1u));
    else
      v3 = *(_QWORD *)(a2 + 32);
    while ( *(_DWORD *)(v3 + 24) != 3 || *(double *)(v3 + 16) != v4 )
    {
      v3 = *(_QWORD *)(v3 + 32);
      if ( !v3 )
        goto LABEL_12;
    }
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 24) + 16LL * (a3 - 1);
  }
  if ( (__int64 *)v3 == &qword_599BC8 )
  {
    v4 = (double)a3;
LABEL_12:
    v6 = v4;
    v7 = 3;
    return sub_4F43C0(a1, a2, &v6);
  }
  return v3;
}

