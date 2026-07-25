/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B41F4
 * Mangled: _ZN5Caver18SetAndroidCacheDirERKSs
 * Demangled: Caver::SetAndroidCacheDir(std::string const&)
 *
 * Callers: 1
 *   0x0000000000202000  Caver::SetAndroidCacheDir(std::string const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 1
 *   insn=0x00000000004B4204 string=0x00000000004B4208 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::SetAndroidCacheDir()
{
  return sub_56A6A8(&qword_6E9F50);
}

