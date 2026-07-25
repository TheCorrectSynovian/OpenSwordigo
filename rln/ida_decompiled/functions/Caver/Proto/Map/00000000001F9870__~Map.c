/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9870
 * Mangled: ._ZN5Caver5Proto3MapD2Ev
 * Demangled: Caver::Proto::Map::~Map()
 *
 * Callers: 1
 *   0x00000000002DF1C0  Caver::Proto::Map::~Map()
 *
 * Callees: 1
 *   0x00000000002DEFAC  Caver::Proto::Map::Map(Caver::Proto::Map const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9878 string=0x00000000001F987C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Map::~Map(Caver::Proto::Map *this)
{
  JUMPOUT(0x2DF120);
}

