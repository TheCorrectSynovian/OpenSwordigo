/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4FD0
 * Mangled: ._ZNK5Caver19GroundMeshComponent4DrawEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x0000000000466454  Caver::Scene::DrawGroundMeshes(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callees: 1
 *   0x00000000002B8988  Caver::GroundMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4FD8 string=0x00000000001F4FDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshComponent::Draw(
        Caver::GroundMeshComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  return _ZNK5Caver19GroundMeshComponent4DrawEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E(this, a2, a3, a4);
}

