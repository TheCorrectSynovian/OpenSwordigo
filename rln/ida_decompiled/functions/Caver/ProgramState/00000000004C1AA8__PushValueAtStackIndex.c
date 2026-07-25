/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1AA8
 * Mangled: _ZN5Caver12ProgramState21PushValueAtStackIndexEi
 * Demangled: Caver::ProgramState::PushValueAtStackIndex(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000004C1AA8 string=0x00000000004C1AAC "-"
 *   insn=0x00000000004C1AAC string=0x00000000001FCF60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramState::PushValueAtStackIndex(Caver::ProgramState *this)
{
  return lua_pushvalue();
}

