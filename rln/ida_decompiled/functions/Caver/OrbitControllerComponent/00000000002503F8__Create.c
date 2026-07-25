/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002503F8
 * Mangled: _ZN5Caver24OrbitControllerComponent6CreateEv
 * Demangled: Caver::OrbitControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002503B8  Caver::ParticleObjectComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002004B0  Caver::OrbitControllerComponent::OrbitControllerComponent(void)
 *   0x0000000000250438  Caver::PortalEffectComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250404 string=0x0000000000250408 "v"
 *   insn=0x0000000000250408 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025040C string=0x0000000000250410 "("
 *   insn=0x000000000025042C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250430 string=0x0000000000250434 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::OrbitControllerComponent *__fastcall Caver::OrbitControllerComponent::Create(
        Caver::OrbitControllerComponent *this)
{
  Caver::OrbitControllerComponent *v1; // x19

  v1 = (Caver::OrbitControllerComponent *)operator new(0xC0u);
  Caver::OrbitControllerComponent::OrbitControllerComponent(v1);
  return v1;
}

