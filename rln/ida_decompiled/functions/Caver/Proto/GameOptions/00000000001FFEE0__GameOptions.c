/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFEE0
 * Mangled: ._ZN5Caver5Proto11GameOptionsC2Ev
 * Demangled: Caver::Proto::GameOptions::GameOptions(void)
 *
 * Callers: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002E511C  Caver::Proto::GuideTarget::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FFEE4 string=0x00000000002E5174 ""
 *   insn=0x00000000001FFEE8 string=0x00000000001FFEEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions *this)
{
  JUMPOUT(0x2E5174);
}

