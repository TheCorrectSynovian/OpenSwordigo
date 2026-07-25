/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC960
 * Mangled: .glGetIntegerv
 * Demangled: .glGetIntegerv
 *
 * Callers: 4
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000048D62C  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,int)
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *   0x00000000004CC108  Caver::Texture::SetNearestFiltering(void)
 *
 * Callees: 1
 *   0x00000000006FE9C8  glGetIntegerv
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC968 string=0x00000000001FC96C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glGetIntegerv()
{
  return glGetIntegerv();
}

