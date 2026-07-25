/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB610
 * Mangled: ._ZN5Caver13PlayerProfile20IncreaseCounterValueERKSsi
 * Demangled: Caver::PlayerProfile::IncreaseCounterValue(std::string const&,int)
 *
 * Callers: 2
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x0000000000362C58  sub_362C58
 *
 * Callees: 1
 *   0x00000000003C1D60  Caver::PlayerProfile::IncreaseCounterValue(std::string const&,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB618 string=0x00000000001FB61C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PlayerProfile::IncreaseCounterValue()
{
  return _ZN5Caver13PlayerProfile20IncreaseCounterValueERKSsi();
}

