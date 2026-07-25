/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201C10
 * Mangled: ._ZN5Caver5Proto3MapD2Ev_0
 * Demangled: Caver::Proto::Map::~Map()
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002DEFAC  Caver::Proto::Map::Map(Caver::Proto::Map const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201C18 string=0x0000000000201C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Map::~Map(Caver::Proto::Map *this)
{
  JUMPOUT(0x2DF120);
}

