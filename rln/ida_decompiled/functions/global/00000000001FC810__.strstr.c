/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC810
 * Mangled: .strstr
 * Demangled: .strstr
 *
 * Callers: 4
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x00000000004F9594  luaL_gsub(lua_State *,char const*,char const*,char const*)
 *   0x000000000051C420  CPVRTglesExt::LoadExtensions(void)
 *   0x000000000051C8A8  CPVRTglesExt::IsGLExtensionSupported(char const*)
 *
 * Callees: 1
 *   0x00000000006FE9A8  strstr
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC818 string=0x00000000001FC81C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
char *strstr(const char *a1, const char *a2)
{
  return strstr(a1, a2);
}

