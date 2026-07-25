/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF6A0
 * Mangled: ._ZN5Caver16DeleteFileAtPathERKSs
 * Demangled: Caver::DeleteFileAtPath(std::string const&)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004B487C  Caver::DeleteFileAtPath(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF6A8 string=0x00000000001FF6AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::DeleteFileAtPath()
{
  return _ZN5Caver16DeleteFileAtPathERKSs();
}

