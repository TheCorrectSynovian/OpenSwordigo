/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202000
 * Mangled: ._ZN5Caver18SetAndroidCacheDirERKSs
 * Demangled: Caver::SetAndroidCacheDir(std::string const&)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004B41F4  Caver::SetAndroidCacheDir(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202008 string=0x000000000020200C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SetAndroidCacheDir()
{
  return _ZN5Caver18SetAndroidCacheDirERKSs();
}

