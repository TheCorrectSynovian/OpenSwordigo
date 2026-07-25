/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F81E0
 * Mangled: ._ZN5Caver5Proto13PlayerProfileD2Ev
 * Demangled: Caver::Proto::PlayerProfile::~PlayerProfile()
 *
 * Callers: 2
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F81E8 string=0x00000000001F81EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PlayerProfile::~PlayerProfile(Caver::Proto::PlayerProfile *this)
{
  JUMPOUT(0x2E9B28);
}

