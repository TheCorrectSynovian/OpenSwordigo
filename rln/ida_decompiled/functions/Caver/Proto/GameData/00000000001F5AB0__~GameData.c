/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5AB0
 * Mangled: ._ZN5Caver5Proto8GameDataD2Ev
 * Demangled: Caver::Proto::GameData::~GameData()
 *
 * Callers: 1
 *   0x00000000002E6C68  Caver::Proto::GameData::~GameData()
 *
 * Callees: 1
 *   0x00000000002E65A4  Caver::Proto::GameData::GameData(Caver::Proto::GameData const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5AB8 string=0x00000000001F5ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameData::~GameData(Caver::Proto::GameData *this)
{
  JUMPOUT(0x2E68F0);
}

