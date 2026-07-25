/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FFF8
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent6CreateEv
 * Demangled: Caver::SnappingMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FFB8  Caver::ChargingMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDBC0  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(void)
 *   0x0000000000250038  Caver::LeapingMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250004 string=0x0000000000250008 "v"
 *   insn=0x0000000000250008 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250010 string=0x00000000001FDBC0 "0'"
 *   insn=0x000000000025002C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250030 string=0x0000000000250034 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SnappingMonsterControllerComponent *__fastcall Caver::SnappingMonsterControllerComponent::Create(
        Caver::SnappingMonsterControllerComponent *this)
{
  Caver::SnappingMonsterControllerComponent *v1; // x19

  v1 = (Caver::SnappingMonsterControllerComponent *)operator new(0x150u);
  Caver::SnappingMonsterControllerComponent::SnappingMonsterControllerComponent(v1);
  return v1;
}

