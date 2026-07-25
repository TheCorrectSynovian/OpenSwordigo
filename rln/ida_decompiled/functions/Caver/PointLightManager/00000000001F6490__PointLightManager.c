/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6490
 * Mangled: ._ZN5Caver17PointLightManagerC2Ev
 * Demangled: Caver::PointLightManager::PointLightManager(void)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000461240  Caver::PointLightManager::PointLightManager(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6498 string=0x00000000001F649C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PointLightManager::PointLightManager(Caver::PointLightManager *this)
{
  return _ZN5Caver17PointLightManagerC2Ev(this);
}

