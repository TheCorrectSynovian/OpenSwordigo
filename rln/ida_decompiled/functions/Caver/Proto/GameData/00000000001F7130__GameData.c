/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7130
 * Mangled: ._ZN5Caver5Proto8GameDataC2Ev
 * Demangled: Caver::Proto::GameData::GameData(void)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002E64CC  Caver::Proto::GameOptions::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7134 string=0x00000000002E6524 " "
 *   insn=0x00000000001F7138 string=0x00000000001F713C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameData::GameData(Caver::Proto::GameData *this)
{
  JUMPOUT(0x2E6524);
}

