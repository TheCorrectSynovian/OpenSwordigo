/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE940
 * Mangled: ._ZN5Caver13PlayerProfile13DeleteProfileEv
 * Demangled: Caver::PlayerProfile::DeleteProfile(void)
 *
 * Callers: 1
 *   0x00000000003A7124  Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *
 * Callees: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE948 string=0x00000000001FE94C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PlayerProfile::DeleteProfile(Caver::PlayerProfile *this)
{
  JUMPOUT(0x3C0A8C);
}

