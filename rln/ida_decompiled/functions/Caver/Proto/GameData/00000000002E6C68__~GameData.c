/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6C68
 * Mangled: _ZN5Caver5Proto8GameDataD0Ev
 * Demangled: Caver::Proto::GameData::~GameData()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5AB0  Caver::Proto::GameData::~GameData()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002E6CA0  Caver::Proto::GameData::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002E6C78 string=0x00000000001F5AB0 "P'"
 *   insn=0x00000000002E6C88 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E6C98 string=0x00000000002E6C9C "\nk\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GameData::~GameData(Caver::Proto::GameData *this)
{
  Caver::Proto::GameData::~GameData(this);
  operator delete(this);
}

