/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EA384
 * Mangled: _Z12lua_getstackP9lua_StateiP9lua_Debug
 * Demangled: lua_getstack(lua_State *,int,lua_Debug *)
 *
 * Callers: 1
 *   0x00000000001FA2F0  lua_getstack(lua_State *,int,lua_Debug *)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000004EA384 string=0x00000000004EA388 "?"
 *   insn=0x00000000004EA38C string=0x00000000004EA390 "\t(@"
 *   insn=0x00000000004EA398 string=0x00000000004EA39C "\n"
 *   insn=0x00000000004EA39C string=0x00000000004EA3A0 "!"
 *   insn=0x00000000004EA3A0 string=0x00000000004EA3A4 "J"
 *   insn=0x00000000004EA3A4 string=0x00000000004EA3A8 "J)@9j"
 *   insn=0x00000000004EA3A8 string=0x00000000004EA3AC "j"
 *   insn=0x00000000004EA3AC string=0x00000000004EA3B0 "\n%@"
 *   insn=0x00000000004EA3AC string=0x00000000004EA3B8 "?"
 *   insn=0x00000000004EA3B0 string=0x00000000004EA3B4 "!"
 *   insn=0x00000000004EA3B8 string=0x00000000004EA3BC ""
 *   insn=0x00000000004EA3C4 string=0x00000000004EA3D8 "\t(@"
 *   insn=0x00000000004EA3C8 string=0x00000000004EA3CC "\n"
 *   insn=0x00000000004EA3D8 string=0x00000000004EA3DC ""
 *   insn=0x00000000004EA3DC string=0x00000000004EA3E0 "\t"
 *   insn=0x00000000004EA3E4 string=0x00000000004EA3E8 ""
 *   insn=0x00000000004EA3EC string=0x00000000004EA3F0 "}\t"
 *   insn=0x00000000004EA3F4 string=0x00000000004EA3F8 "Ht"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_getstack(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // x8
  int v4; // w8
  __int64 result; // x0
  unsigned __int64 v6; // x9
  bool v7; // cc
  unsigned __int64 v8; // x8

  v3 = *(_QWORD *)(a1 + 40);
  if ( a2 < 1 )
  {
LABEL_6:
    if ( a2 )
    {
      v4 = 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 80);
      v7 = v3 > v6;
      v8 = v3 - v6;
      if ( !v7 )
        return 0;
      v4 = -858993459 * (v8 >> 3);
    }
    result = 1;
    *(_DWORD *)(a3 + 116) = v4;
  }
  else
  {
    while ( v3 > *(_QWORD *)(a1 + 80) )
    {
      --a2;
      if ( !*(_BYTE *)(**(_QWORD **)(v3 + 8) + 10LL) )
        a2 -= *(_DWORD *)(v3 + 36);
      v3 -= 40LL;
      if ( a2 <= 0 )
        goto LABEL_6;
    }
    return 0;
  }
  return result;
}

