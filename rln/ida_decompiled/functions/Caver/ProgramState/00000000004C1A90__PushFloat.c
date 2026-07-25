/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1A90
 * Mangled: _ZN5Caver12ProgramState9PushFloatEf
 * Demangled: Caver::ProgramState::PushFloat(float)
 *
 * Callers: 1
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *
 * Callees: 1
 *   0x00000000001FFCB0  lua_pushnumber(lua_State *,double)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::PushFloat(Caver::ProgramState *this, float a2)
{
  return lua_pushnumber();
}

