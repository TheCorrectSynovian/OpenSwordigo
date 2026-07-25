/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C80
 * Mangled: ._ZN5Caver13PlayerProfile12LoadFromPathERKSsb
 * Demangled: Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *
 * Callers: 2
 *   0x00000000003C0BB0  Caver::PlayerProfile::Load(void)
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C88 string=0x00000000001F4C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PlayerProfile::LoadFromPath()
{
  return _ZN5Caver13PlayerProfile12LoadFromPathERKSsb();
}

