/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202FA0
 * Mangled: .glLightModelfv
 * Demangled: .glLightModelfv
 *
 * Callers: 2
 *   0x0000000000222F98  Caver::LightComponent::Enable(Caver::RenderingContext *,int)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000006FEC78  glLightModelfv
 *
 * Referenced strings: 1
 *   insn=0x0000000000202FA8 string=0x0000000000202FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glLightModelfv()
{
  return glLightModelfv();
}

