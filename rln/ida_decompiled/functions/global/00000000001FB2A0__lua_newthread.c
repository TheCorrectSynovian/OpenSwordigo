/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB2A0
 * Mangled: ._Z13lua_newthreadP9lua_State
 * Demangled: lua_newthread(lua_State *)
 *
 * Callers: 2
 *   0x00000000004C0D84  Caver::ProgramState::ProgramState(Caver::ProgramState*)
 *   0x00000000004FB408  sub_4FB408
 *
 * Callees: 1
 *   0x00000000004E689C  lua_newthread(lua_State *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB2A8 string=0x00000000001FB2AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_newthread()
{
  return _Z13lua_newthreadP9lua_State();
}

