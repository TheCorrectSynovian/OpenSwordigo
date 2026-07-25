/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FFB8
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent6CreateEv
 * Demangled: Caver::ChargingMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FF78  Caver::WalkingMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6380  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024FFF8  Caver::SnappingMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024FFC8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FFD0 string=0x00000000001F6380 "0'"
 *   insn=0x000000000024FFEC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FFF0 string=0x000000000024FFF4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ChargingMonsterControllerComponent *__fastcall Caver::ChargingMonsterControllerComponent::Create(
        Caver::ChargingMonsterControllerComponent *this)
{
  Caver::ChargingMonsterControllerComponent *v1; // x19

  v1 = (Caver::ChargingMonsterControllerComponent *)operator new(0x158u);
  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(v1);
  return v1;
}

