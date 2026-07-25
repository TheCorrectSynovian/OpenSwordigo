/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB840
 * Mangled: ._ZN5Caver3MapC2Ev
 * Demangled: Caver::Map::Map(void)
 *
 * Callers: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003BACEC  Caver::Map::Map(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB848 string=0x00000000001FB84C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Map::Map(Caver::Map *this)
{
  return _ZN5Caver3MapC2Ev(this);
}

