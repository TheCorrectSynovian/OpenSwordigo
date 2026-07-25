/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E00
 * Mangled: ._ZN5Caver10FastVectorIN5boost10shared_ptrINS_15PointLightGroupEEEED2Ev
 * Demangled: Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector()
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000046A4CC  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector()
 *
 * Referenced strings: 1
 *   insn=0x0000000000203E08 string=0x0000000000203E0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::~FastVector()
{
  return _ZN5Caver10FastVectorIN5boost10shared_ptrINS_15PointLightGroupEEEED2Ev();
}

