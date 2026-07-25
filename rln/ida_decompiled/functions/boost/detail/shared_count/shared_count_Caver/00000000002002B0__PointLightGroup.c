/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002002B0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver15PointLightGroupEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::PointLightGroup>(Caver::PointLightGroup *)
 *
 * Callers: 1
 *   0x00000000004612D4  Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&,Caver::PointLight *,int)
 *
 * Callees: 1
 *   0x00000000004621C4  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002002B8 string=0x00000000002002BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::PointLightGroup>()
{
  JUMPOUT(0x4624E4);
}

