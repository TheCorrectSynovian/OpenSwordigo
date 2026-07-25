/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7FC0
 * Mangled: ._ZN5Caver17PointLightManager8AddLightERKNS_10PointLightE
 * Demangled: Caver::PointLightManager::AddLight(Caver::PointLight const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000046124C  Caver::PointLightManager::AddLight(Caver::PointLight const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7FC8 string=0x00000000001F7FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PointLightManager::AddLight()
{
  return _ZN5Caver17PointLightManager8AddLightERKNS_10PointLightE();
}

