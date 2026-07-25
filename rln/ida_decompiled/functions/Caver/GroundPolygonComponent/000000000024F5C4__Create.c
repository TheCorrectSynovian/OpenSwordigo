/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F5C4
 * Mangled: _ZN5Caver22GroundPolygonComponent6CreateEv
 * Demangled: Caver::GroundPolygonComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F584  Caver::BlendAnimationComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8400  Caver::GroundPolygonComponent::GroundPolygonComponent(void)
 *   0x000000000024F604  Caver::GroundMeshComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024F5D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F5DC string=0x00000000001F8400 "0'"
 *   insn=0x000000000024F5F4 string=0x000000000024F5F8 "."
 *   insn=0x000000000024F5F8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GroundPolygonComponent *__fastcall Caver::GroundPolygonComponent::Create(Caver::GroundPolygonComponent *this)
{
  Caver::GroundPolygonComponent *v1; // x19

  v1 = (Caver::GroundPolygonComponent *)operator new(0xE8u);
  Caver::GroundPolygonComponent::GroundPolygonComponent(v1);
  return v1;
}

