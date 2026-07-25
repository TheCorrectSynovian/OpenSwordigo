/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E20
 * Mangled: ._ZN5Caver17VertexArrayObject17SwapBufferObjectsEv
 * Demangled: Caver::VertexArrayObject::SwapBufferObjects(void)
 *
 * Callers: 3
 *   0x0000000000449130  Caver::MeshInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000454C34  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *   0x000000000045A84C  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048D4C8  Caver::VertexArrayObject::SwapBufferObjects(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3E24 string=0x000000000048D4C8 " @"
 *   insn=0x00000000001F3E28 string=0x00000000001F3E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VertexArrayObject::SwapBufferObjects(Caver::VertexArrayObject *this)
{
  return _ZN5Caver17VertexArrayObject17SwapBufferObjectsEv(this);
}

