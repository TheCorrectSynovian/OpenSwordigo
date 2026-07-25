/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F644
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent6CreateEv
 * Demangled: Caver::GroundMeshGeneratorComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F604  Caver::GroundMeshComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201D30  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *   0x000000000024F684  Caver::WaterMeshComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x000000000024F654 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F678 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GroundMeshGeneratorComponent *__fastcall Caver::GroundMeshGeneratorComponent::Create(
        Caver::GroundMeshGeneratorComponent *this)
{
  Caver::GroundMeshGeneratorComponent *v1; // x19

  v1 = (Caver::GroundMeshGeneratorComponent *)operator new(0xF0u);
  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(v1);
  return v1;
}

