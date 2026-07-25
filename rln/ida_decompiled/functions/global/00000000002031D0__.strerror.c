/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002031D0
 * Mangled: .strerror
 * Demangled: .strerror
 *
 * Callers: 5
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x000000000056B0C8  sub_56B0C8
 *   0x000000000056B100  sub_56B100
 *
 * Callees: 1
 *   0x00000000006FEC98  strerror
 *
 * Referenced strings: 1
 *   insn=0x00000000002031D8 string=0x00000000002031DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *strerror(int a1)
{
  return strerror(a1);
}

