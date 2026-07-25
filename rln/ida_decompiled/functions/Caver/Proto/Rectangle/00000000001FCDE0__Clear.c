/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCDE0
 * Mangled: ._ZN5Caver5Proto9Rectangle5ClearEv
 * Demangled: Caver::Proto::Rectangle::Clear(void)
 *
 * Callers: 4
 *   0x00000000002FC030  Caver::Proto::SceneObject::Clear(void)
 *   0x0000000000301A58  Caver::Proto::Scene::Clear(void)
 *   0x0000000000307798  Caver::Proto::GroundMeshComponent::Clear(void)
 *   0x000000000030AF34  Caver::Proto::ShapeComponent::Clear(void)
 *
 * Callees: 1
 *   0x00000000002CEE3C  Caver::Proto::Rectangle::Clear(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCDE4 string=0x00000000002CEE3C "p@9h"
 *   insn=0x00000000001FCDE8 string=0x00000000001FCDEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Rectangle::Clear(Caver::Proto::Rectangle *this)
{
  return _ZN5Caver5Proto9Rectangle5ClearEv(this);
}

