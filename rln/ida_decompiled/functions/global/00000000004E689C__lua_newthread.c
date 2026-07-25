/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E689C
 * Mangled: _Z13lua_newthreadP9lua_State
 * Demangled: lua_newthread(lua_State *)
 *
 * Callers: 1
 *   0x00000000001FB2A0  lua_newthread(lua_State *)
 *
 * Callees: 2
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F2F88  sub_4F2F88
 *
 * Referenced strings: 8
 *   insn=0x00000000004E68A8 string=0x00000000004E68AC "h"
 *   insn=0x00000000004E68AC string=0x00000000004E68B0 "\t!G"
 *   insn=0x00000000004E68B4 string=0x00000000004E68B8 "c"
 *   insn=0x00000000004E68C8 string=0x00000000004E68CC "h\n@"
 *   insn=0x00000000004E68D4 string=0x00000000004E68D8 "\t\t"
 *   insn=0x00000000004E68D8 string=0x00000000004E68DC "h\n@"
 *   insn=0x00000000004E68DC string=0x00000000004E68E0 "A"
 *   insn=0x00000000004E68E0 string=0x00000000004E68E4 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_newthread(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 112LL) )
    sub_4EDCB0(a1);
  result = sub_4F2F88(a1);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v3 = result;
  *(_DWORD *)(v3 + 8) = 8;
  *(_QWORD *)(a1 + 16) += 16LL;
  return result;
}

