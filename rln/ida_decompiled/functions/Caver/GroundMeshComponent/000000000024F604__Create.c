/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F604
 * Mangled: _ZN5Caver19GroundMeshComponent6CreateEv
 * Demangled: Caver::GroundMeshComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F5C4  Caver::GroundPolygonComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB530  Caver::GroundMeshComponent::GroundMeshComponent(void)
 *   0x000000000024F644  Caver::GroundMeshGeneratorComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024F614 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F61C string=0x00000000001FB530 "0'"
 *   insn=0x000000000024F638 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GroundMeshComponent *__fastcall Caver::GroundMeshComponent::Create(Caver::GroundMeshComponent *this)
{
  Caver::GroundMeshComponent *v1; // x19

  v1 = (Caver::GroundMeshComponent *)operator new(0xD8u);
  Caver::GroundMeshComponent::GroundMeshComponent(v1);
  return v1;
}

