/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5BD0
 * Mangled: .glClear
 * Demangled: .glClear
 *
 * Callers: 2
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000048B15C  Caver::RenderingContext::Clear(bool,bool,bool)
 *
 * Callees: 1
 *   0x00000000006FE6A8  glClear
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5BD8 string=0x00000000001F5BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glClear()
{
  return glClear();
}

