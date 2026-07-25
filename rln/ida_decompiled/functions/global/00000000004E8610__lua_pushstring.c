/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8610
 * Mangled: _Z14lua_pushstringP9lua_StatePKc
 * Demangled: lua_pushstring(lua_State *,char const*)
 *
 * Callers: 1
 *   0x0000000000202750  lua_pushstring(lua_State *,char const*)
 *
 * Callees: 3
 *   0x0000000000203230  .strlen
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F356C  sub_4F356C
 *
 * Referenced strings: 5
 *   insn=0x00000000004E862C string=0x00000000004E8680 "h"
 *   insn=0x00000000004E8634 string=0x00000000004E8638 "h"
 *   insn=0x00000000004E863C string=0x00000000004E8640 "\t!G"
 *   insn=0x00000000004E8644 string=0x00000000004E8648 "c"
 *   insn=0x00000000004E867C string=0x00000000004E868C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushstring(__int64 result, char *a2)
{
  __int64 v3; // x19
  size_t v4; // x21
  _QWORD *v5; // x22
  __int64 v6; // x23
  __int64 v7; // x8

  v3 = result;
  if ( a2 )
  {
    v4 = strlen(a2);
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(v3 + 32) + 112LL) )
      sub_4EDCB0(v3);
    v5 = (_QWORD *)(v3 + 16);
    v6 = *(_QWORD *)(v3 + 16);
    result = sub_4F356C(v3, a2, v4);
    *(_QWORD *)v6 = result;
    *(_DWORD *)(v6 + 8) = 4;
    v7 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v7 = *(_QWORD *)(result + 16);
    *(_DWORD *)(v7 + 8) = 0;
    v5 = (_QWORD *)(result + 16);
  }
  *v5 = v7 + 16;
  return result;
}

