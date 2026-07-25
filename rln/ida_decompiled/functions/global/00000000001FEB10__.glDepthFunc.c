/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEB10
 * Mangled: .glDepthFunc
 * Demangled: .glDepthFunc
 *
 * Callers: 2
 *   0x000000000037226C  Caver::SceneView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000006FEA98  glDepthFunc
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEB18 string=0x00000000001FEB1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glDepthFunc()
{
  return glDepthFunc();
}

