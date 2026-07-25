/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E85A0
 * Mangled: _Z15lua_pushlstringP9lua_StatePKcm
 * Demangled: lua_pushlstring(lua_State *,char const*,ulong)
 *
 * Callers: 1
 *   0x00000000001FD1B0  lua_pushlstring(lua_State *,char const*,ulong)
 *
 * Callees: 2
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F356C  sub_4F356C
 *
 * Referenced strings: 7
 *   insn=0x00000000004E85B0 string=0x00000000004E85B4 "h"
 *   insn=0x00000000004E85BC string=0x00000000004E85C0 "\t!G"
 *   insn=0x00000000004E85C4 string=0x00000000004E85C8 "c"
 *   insn=0x00000000004E85C8 string=0x00000000004E85D4 "v\n@"
 *   insn=0x00000000004E85F0 string=0x00000000004E85F4 "h\n@"
 *   insn=0x00000000004E85F4 string=0x00000000004E85F8 "A"
 *   insn=0x00000000004E85F8 string=0x00000000004E85FC "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushlstring(__int64 a1, void *a2, size_t a3)
{
  __int64 v6; // x22
  __int64 result; // x0

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 112LL) )
    sub_4EDCB0(a1);
  v6 = *(_QWORD *)(a1 + 16);
  result = sub_4F356C(a1, a2, a3);
  *(_QWORD *)v6 = result;
  *(_DWORD *)(v6 + 8) = 4;
  *(_QWORD *)(a1 + 16) += 16LL;
  return result;
}

