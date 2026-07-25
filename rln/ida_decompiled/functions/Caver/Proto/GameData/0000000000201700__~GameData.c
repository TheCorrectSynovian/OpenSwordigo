/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201700
 * Mangled: ._ZN5Caver5Proto8GameDataD2Ev_0
 * Demangled: Caver::Proto::GameData::~GameData()
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002E65A4  Caver::Proto::GameData::GameData(Caver::Proto::GameData const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201708 string=0x000000000020170C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameData::~GameData(Caver::Proto::GameData *this)
{
  JUMPOUT(0x2E68F0);
}

