/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027812C
 * Mangled: _ZThn16_N5Caver17ItemDropComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::ItemDropComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8AD0  Caver::ItemDropComponent::PerformBindedAction(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000027812C string=0x0000000000278130 "h"
 *   insn=0x0000000000278130 string=0x00000000001F8AD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ItemDropComponent::PerformBindedAction(
        Caver::ItemDropComponent *this,
        int a2)
{
  return Caver::ItemDropComponent::PerformBindedAction((Caver::ItemDropComponent *)((char *)this - 16), a2);
}

