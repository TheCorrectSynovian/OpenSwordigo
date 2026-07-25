/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C10
 * Mangled: .__errno
 * Demangled: .__errno
 *
 * Callers: 8
 *   0x00000000004B456C  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000004F9C98  luaL_loadfile(lua_State *,char const*)
 *   0x000000000051F3E0  sub_51F3E0
 *   0x000000000051F468  sub_51F468
 *   0x000000000051F4D0  sub_51F4D0
 *   0x000000000051F694  sub_51F694
 *   0x000000000051F714  sub_51F714
 *   0x000000000051F7D8  sub_51F7D8
 *
 * Callees: 1
 *   0x00000000006FE860  __errno
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9C18 string=0x00000000001F9C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __errno()
{
  return _errno();
}

