/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9030
 * Mangled: ._ZN5Caver17VertexArrayObject4DrawEPNS_16RenderingContextEiii
 * Demangled: Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *
 * Callers: 4
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000449130  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000454C34  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *   0x000000000045A84C  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048DA6C  Caver::VertexArrayObject::Draw(Caver::RenderingContext *,int,int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9038 string=0x00000000001F903C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::Draw(
        Caver::VertexArrayObject *this,
        Caver::RenderingContext *a2,
        int a3,
        int a4,
        int a5)
{
  return _ZN5Caver17VertexArrayObject4DrawEPNS_16RenderingContextEiii(this, a2, a3, a4, a5);
}

