/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203600
 * Mangled: ._ZN5Caver10FastVectorIN5boost10shared_ptrINS_15PointLightGroupEEEE6ResizeEi
 * Demangled: Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *
 * Callers: 1
 *   0x00000000004612D4  Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&,Caver::PointLight *,int)
 *
 * Callees: 1
 *   0x00000000004621C4  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203608 string=0x000000000020360C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize()
{
  return _ZN5Caver10FastVectorIN5boost10shared_ptrINS_15PointLightGroupEEEE6ResizeEi();
}

