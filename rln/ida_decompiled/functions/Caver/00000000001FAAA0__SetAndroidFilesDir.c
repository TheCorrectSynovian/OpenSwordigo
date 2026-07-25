/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAAA0
 * Mangled: ._ZN5Caver18SetAndroidFilesDirERKSs
 * Demangled: Caver::SetAndroidFilesDir(std::string const&)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004B41DC  Caver::SetAndroidFilesDir(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAAA8 string=0x00000000001FAAAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SetAndroidFilesDir()
{
  return _ZN5Caver18SetAndroidFilesDirERKSs();
}

