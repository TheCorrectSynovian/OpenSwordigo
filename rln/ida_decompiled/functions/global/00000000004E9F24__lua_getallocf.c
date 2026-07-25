/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9F24
 * Mangled: _Z13lua_getallocfP9lua_StatePPv
 * Demangled: lua_getallocf(lua_State *,void **)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004E9F24 string=0x00000000004E9F28 ""
 *   insn=0x00000000004E9F24 string=0x00000000004E9F34 ""
 *   insn=0x00000000004E9F28 string=0x00000000004E9F2C "@"
 *   insn=0x00000000004E9F2C string=0x00000000004E9F30 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_getallocf(__int64 a1, _QWORD *a2)
{
  if ( a2 )
    *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
  return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
}

