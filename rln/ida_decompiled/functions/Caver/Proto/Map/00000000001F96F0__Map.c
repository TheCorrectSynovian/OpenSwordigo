/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F96F0
 * Mangled: ._ZN5Caver5Proto3MapC2Ev
 * Demangled: Caver::Proto::Map::Map(void)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002DEF1C  Caver::Proto::MapZone::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F96F4 string=0x00000000002DEF74 "H "
 *   insn=0x00000000001F96F8 string=0x00000000001F96FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Map::Map(Caver::Proto::Map *this)
{
  JUMPOUT(0x2DEF74);
}

