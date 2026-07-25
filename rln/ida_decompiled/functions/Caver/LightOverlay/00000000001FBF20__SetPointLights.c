/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF20
 * Mangled: ._ZN5Caver12LightOverlay14SetPointLightsEPKNS_10PointLightEi
 * Demangled: Caver::LightOverlay::SetPointLights(Caver::PointLight const*,int)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000045A2DC  Caver::LightOverlay::SetPointLights(Caver::PointLight const*,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF28 string=0x00000000001FBF2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::LightOverlay::SetPointLights()
{
  return _ZN5Caver12LightOverlay14SetPointLightsEPKNS_10PointLightEi();
}

