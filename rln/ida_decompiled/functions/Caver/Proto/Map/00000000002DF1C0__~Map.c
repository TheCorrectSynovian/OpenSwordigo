/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF1C0
 * Mangled: _ZN5Caver5Proto3MapD0Ev
 * Demangled: Caver::Proto::Map::~Map()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9870  Caver::Proto::Map::~Map()
 *   0x00000000002DF1F8  Caver::Proto::Map::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002DF1D0 string=0x00000000001F9870 "0'"
 *   insn=0x00000000002DF1DC string=0x00000000002DF1E0 "4`"
 *   insn=0x00000000002DF1E0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002DF1E8 string=0x00000000002DF1EC "1`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Map::~Map(Caver::Proto::Map *this)
{
  Caver::Proto::Map::~Map(this);
  operator delete(this);
}

