/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250A38
 * Mangled: _ZN5Caver29ProjectileControllerComponent6CreateEv
 * Demangled: Caver::ProjectileControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002509F8  Caver::FireBreathComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9090  Caver::ProjectileControllerComponent::ProjectileControllerComponent(void)
 *   0x0000000000250A78  Caver::UtilityShapeComponent::~UtilityShapeComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000250A48 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250A50 string=0x00000000001F9090 "0'"
 *   insn=0x0000000000250A6C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ProjectileControllerComponent *__fastcall Caver::ProjectileControllerComponent::Create(
        Caver::ProjectileControllerComponent *this)
{
  Caver::ProjectileControllerComponent *v1; // x19

  v1 = (Caver::ProjectileControllerComponent *)operator new(0x80u);
  Caver::ProjectileControllerComponent::ProjectileControllerComponent(v1);
  return v1;
}

