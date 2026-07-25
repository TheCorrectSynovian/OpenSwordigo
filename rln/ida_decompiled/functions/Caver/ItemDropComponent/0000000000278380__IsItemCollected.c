/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000278380
 * Mangled: _ZN5Caver17ItemDropComponent15IsItemCollectedERKSs
 * Demangled: Caver::ItemDropComponent::IsItemCollected(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *
 * Referenced strings: 6
 *   insn=0x0000000000278388 string=0x000000000027838C ""
 *   insn=0x0000000000278390 string=0x0000000000278394 ""
 *   insn=0x00000000002783A0 string=0x00000000002783A4 "o"
 *   insn=0x00000000002783A4 string=0x00000000001F7560 "0'"
 *   insn=0x00000000002783B4 string=0x00000000002783B8 "r"
 *   insn=0x00000000002783B8 string=0x00000000001F7180 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GameState *__fastcall Caver::ItemDropComponent::IsItemCollected(__int64 a1)
{
  Caver::GameState *result; // x0

  result = *(Caver::GameState **)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL) + 16LL);
  if ( result )
  {
    Caver::GameState::CurrentLevelState(result);
    return (Caver::GameState *)Caver::StateProperties::HasFlag();
  }
  return result;
}

