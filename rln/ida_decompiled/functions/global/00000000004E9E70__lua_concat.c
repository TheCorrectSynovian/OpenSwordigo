/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9E70
 * Mangled: _Z10lua_concatP9lua_Statei
 * Demangled: lua_concat(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000002029F0  lua_concat(lua_State *,int)
 *
 * Callees: 3
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F67EC  sub_4F67EC
 *
 * Referenced strings: 10
 *   insn=0x00000000004E9E8C string=0x00000000004E9E90 "h"
 *   insn=0x00000000004E9E90 string=0x00000000004E9E94 "\t!G"
 *   insn=0x00000000004E9E98 string=0x00000000004E9E9C "c"
 *   insn=0x00000000004E9EAC string=0x00000000004E9EB0 "i"
 *   insn=0x00000000004E9EB8 string=0x00000000004E9EBC ""
 *   insn=0x00000000004E9EBC string=0x00000000004E9EC0 ""
 *   insn=0x00000000004E9EC4 string=0x00000000004E9EC8 "I2"
 *   insn=0x00000000004E9ED0 string=0x00000000004E9ED4 ""
 *   insn=0x00000000004E9EE4 string=0x00000000004E9EE8 "!"
 *   insn=0x00000000004E9F08 string=0x00000000004E9F0C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_concat(__int64 result, int a2)
{
  __int64 v3; // x19
  __int64 *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x20

  v3 = result;
  if ( a2 < 2 )
  {
    if ( a2 )
      return result;
    v4 = (__int64 *)(result + 16);
    v6 = *(_QWORD *)(result + 16);
    result = sub_4F356C(result, "", 0);
    *(_QWORD *)v6 = result;
    *(_DWORD *)(v6 + 8) = 4;
    v5 = *v4 + 16;
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)(result + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(result + 32) + 112LL) )
      sub_4EDCB0(result);
    v4 = (__int64 *)(v3 + 16);
    result = sub_4F67EC(v3, (unsigned int)a2, (unsigned int)((*(_QWORD *)(v3 + 16) - *(_QWORD *)(v3 + 24)) >> 4) - 1);
    v5 = *(_QWORD *)(v3 + 16) - 16LL * (a2 - 1);
  }
  *v4 = v5;
  return result;
}

