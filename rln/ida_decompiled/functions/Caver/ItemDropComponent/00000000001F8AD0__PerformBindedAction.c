/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8AD0
 * Mangled: ._ZN5Caver17ItemDropComponent19PerformBindedActionEi
 * Demangled: Caver::ItemDropComponent::PerformBindedAction(int)
 *
 * Callers: 1
 *   0x000000000027812C  `non-virtual thunk to'Caver::ItemDropComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x0000000000277E9C  Caver::ItemDropComponent::PerformBindedAction(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8AD8 string=0x00000000001F8ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ItemDropComponent::PerformBindedAction(Caver::ItemDropComponent *this, int a2)
{
  return _ZN5Caver17ItemDropComponent19PerformBindedActionEi(this, a2);
}

