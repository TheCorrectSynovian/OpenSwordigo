/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EA334
 * Mangled: _Z11lua_sethookP9lua_StatePFvS0_P9lua_DebugEii
 * Demangled: lua_sethook(lua_State *,void (*)(lua_State *,lua_Debug *),int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004EA338 string=0x00000000004EA33C "_"
 *   insn=0x00000000004EA340 string=0x00000000004EA344 ")"
 *   insn=0x00000000004EA344 string=0x00000000004EA348 "?"
 *   insn=0x00000000004EA35C string=0x00000000004EA360 "\t9"
 *   insn=0x00000000004EA360 string=0x00000000004EA364 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_sethook(__int64 a1, __int64 a2, int a3, int a4)
{
  _BOOL4 v4; // w9
  bool v5; // zf
  __int64 result; // x0
  __int64 v8; // x9
  char v9; // w10

  v4 = a2 == 0 || a3 == 0;
  v5 = !v4;
  result = 1;
  if ( v4 )
    v8 = 0;
  else
    v8 = a2;
  if ( v5 )
    v9 = a3;
  else
    v9 = 0;
  *(_DWORD *)(a1 + 104) = a4;
  *(_DWORD *)(a1 + 108) = a4;
  *(_QWORD *)(a1 + 112) = v8;
  *(_BYTE *)(a1 + 100) = v9;
  return result;
}

