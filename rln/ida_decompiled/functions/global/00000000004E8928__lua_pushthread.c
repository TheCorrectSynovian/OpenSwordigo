/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8928
 * Mangled: _Z14lua_pushthreadP9lua_State
 * Demangled: lua_pushthread(lua_State *)
 *
 * Callers: 1
 *   0x00000000001FED10  lua_pushthread(lua_State *)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004E8930 string=0x00000000004E8934 "\t\t"
 *   insn=0x00000000004E8934 string=0x00000000004E8938 "@"
 *   insn=0x00000000004E8938 string=0x00000000004E893C "\t"
 *   insn=0x00000000004E893C string=0x00000000004E8940 "A"
 *   insn=0x00000000004E8940 string=0x00000000004E8944 ""
 *   insn=0x00000000004E8944 string=0x00000000004E8948 "(Y@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall lua_pushthread(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x9

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v1 = a1;
  *(_DWORD *)(v1 + 8) = 8;
  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) += 16LL;
  return *(_QWORD *)(v2 + 176) == a1;
}

