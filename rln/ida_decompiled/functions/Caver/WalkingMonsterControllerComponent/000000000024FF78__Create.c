/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FF78
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponent6CreateEv
 * Demangled: Caver::WalkingMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FF38  Caver::AttackComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200C80  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *   0x000000000024FFB8  Caver::ChargingMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024FF88 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FF8C string=0x000000000024FF90 "<"
 *   insn=0x000000000024FFAC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FFB0 string=0x000000000024FFB4 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::WalkingMonsterControllerComponent *__fastcall Caver::WalkingMonsterControllerComponent::Create(
        Caver::WalkingMonsterControllerComponent *this)
{
  Caver::WalkingMonsterControllerComponent *v1; // x19

  v1 = (Caver::WalkingMonsterControllerComponent *)operator new(0xF0u);
  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(v1);
  return v1;
}

