/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3850
 * Mangled: ._ZN5Caver17VertexArrayObject31UpdateVertexBufferObjectSubDataEii
 * Demangled: Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(int,int)
 *
 * Callers: 1
 *   0x0000000000454C34  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048D554  Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3858 string=0x00000000001F385C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::UpdateVertexBufferObjectSubData(
        Caver::VertexArrayObject *this,
        int a2,
        int a3)
{
  return _ZN5Caver17VertexArrayObject31UpdateVertexBufferObjectSubDataEii(this, a2, a3);
}

