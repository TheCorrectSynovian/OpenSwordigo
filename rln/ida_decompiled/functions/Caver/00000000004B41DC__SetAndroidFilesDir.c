/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B41DC
 * Mangled: _ZN5Caver18SetAndroidFilesDirERKSs
 * Demangled: Caver::SetAndroidFilesDir(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FAAA0  Caver::SetAndroidFilesDir(std::string const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 1
 *   insn=0x00000000004B41EC string=0x00000000004B41F0 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::SetAndroidFilesDir()
{
  return sub_56A6A8(&qword_6E9F48);
}

