/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1A7C
 * Mangled: _ZN5Caver12ProgramState11PushPointerEPv
 * Demangled: Caver::ProgramState::PushPointer(void *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE3E0  lua_pushlightuserdata(lua_State *,void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C1A7C string=0x00000000004C1A80 "X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::PushPointer(Caver::ProgramState *this, void *a2)
{
  return lua_pushlightuserdata();
}

