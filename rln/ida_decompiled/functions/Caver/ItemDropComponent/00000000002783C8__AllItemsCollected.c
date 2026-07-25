/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002783C8
 * Mangled: _ZN5Caver17ItemDropComponent17AllItemsCollectedEv
 * Demangled: Caver::ItemDropComponent::AllItemsCollected(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *
 * Referenced strings: 11
 *   insn=0x00000000002783D8 string=0x00000000002783DC "h"
 *   insn=0x00000000002783EC string=0x00000000002783F0 "iJ@"
 *   insn=0x00000000002783F0 string=0x00000000002783F4 "4"
 *   insn=0x00000000002783F8 string=0x00000000002783FC ")"
 *   insn=0x0000000000278400 string=0x0000000000278404 "h"
 *   insn=0x0000000000278404 string=0x0000000000278408 ""
 *   insn=0x0000000000278414 string=0x0000000000278418 "R"
 *   insn=0x0000000000278418 string=0x00000000001F7560 "0'"
 *   insn=0x0000000000278420 string=0x0000000000278424 "W"
 *   insn=0x0000000000278424 string=0x00000000001F7180 "0'"
 *   insn=0x0000000000278428 string=0x000000000027842C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GameState *__fastcall Caver::ItemDropComponent::AllItemsCollected(Caver::ItemDropComponent *this)
{
  int v2; // w8
  __int64 v3; // x21
  __int64 i; // x22
  Caver::GameState *result; // x0

  v2 = *((_DWORD *)this + 34);
  if ( v2 < 1 )
    return (Caver::GameState *)(&dword_0 + 1);
  v3 = 0;
  for ( i = 8; !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + i) - 24LL); i += 32 )
  {
LABEL_7:
    if ( ++v3 >= v2 )
      return (Caver::GameState *)(&dword_0 + 1);
  }
  result = *(Caver::GameState **)(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL) + 16LL);
  if ( !result )
    return result;
  Caver::GameState::CurrentLevelState(result);
  if ( (Caver::StateProperties::HasFlag() & 1) != 0 )
  {
    v2 = *((_DWORD *)this + 34);
    goto LABEL_7;
  }
  return 0;
}

