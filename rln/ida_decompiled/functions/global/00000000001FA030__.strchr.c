/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA030
 * Mangled: .strchr
 * Demangled: .strchr
 *
 * Callers: 7
 *   0x00000000004B456C  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000004EA630  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *   0x00000000004EE534  sub_4EE534
 *   0x00000000004EEFD8  sub_4EEFD8
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004FBC90  sub_4FBC90
 *   0x000000000051C8A8  CPVRTglesExt::IsGLExtensionSupported(char const*)
 *
 * Callees: 1
 *   0x00000000006FE880  strchr
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA038 string=0x00000000001FA03C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *strchr(const char *a1, int a2)
{
  return strchr(a1, a2);
}

