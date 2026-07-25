/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE70
 * Mangled: .glLightfv
 * Demangled: .glLightfv
 *
 * Callers: 2
 *   0x0000000000222F98  Caver::LightComponent::Enable(Caver::RenderingContext *,int)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000006FEAA0  glLightfv
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEE78 string=0x00000000001FEE7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glLightfv()
{
  return glLightfv();
}

