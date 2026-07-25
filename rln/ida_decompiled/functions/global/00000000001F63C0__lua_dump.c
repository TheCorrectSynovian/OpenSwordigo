/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F63C0
 * Mangled: ._Z8lua_dumpP9lua_StatePFiS0_PKvmPvES3_
 * Demangled: lua_dump(lua_State *,int (*)(lua_State *,void const*,ulong,void *),void *)
 *
 * Callers: 2
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *   0x00000000004FBBE4  sub_4FBBE4
 *
 * Callees: 1
 *   0x00000000004E9C10  lua_dump(lua_State *,int (*)(lua_State *,void const*,ulong,void *),void *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F63C4 string=0x00000000004E9C10 "\n@"
 *   insn=0x00000000001F63C8 string=0x00000000001F63CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 lua_dump()
{
  return _Z8lua_dumpP9lua_StatePFiS0_PKvmPvES3_();
}

