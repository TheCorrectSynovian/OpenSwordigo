/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200650
 * Mangled: ._ZN5Caver10FastVectorINS_10PointLightEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::PointLight>::Resize(int)
 *
 * Callers: 2
 *   0x000000000046124C  Caver::PointLightManager::AddLight(Caver::PointLight const&)
 *   0x00000000004612D4  Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&,Caver::PointLight *,int)
 *
 * Callees: 1
 *   0x00000000004620DC  Caver::FastVector<Caver::PointLight>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200658 string=0x000000000020065C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::PointLight>::Resize()
{
  return _ZN5Caver10FastVectorINS_10PointLightEE6ResizeEi();
}

