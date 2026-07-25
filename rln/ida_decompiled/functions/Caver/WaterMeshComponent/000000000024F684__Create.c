/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F684
 * Mangled: _ZN5Caver18WaterMeshComponent6CreateEv
 * Demangled: Caver::WaterMeshComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F644  Caver::GroundMeshGeneratorComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5E50  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024F6C4  Caver::EntityComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024F694 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F69C string=0x00000000001F5E50 "P'"
 *   insn=0x000000000024F6B8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::WaterMeshComponent *__fastcall Caver::WaterMeshComponent::Create(Caver::WaterMeshComponent *this)
{
  Caver::WaterMeshComponent *v1; // x19

  v1 = (Caver::WaterMeshComponent *)operator new(0x158u);
  Caver::WaterMeshComponent::WaterMeshComponent(v1);
  return v1;
}

