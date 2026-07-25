/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4DA0
 * Mangled: ._ZNK5Caver15PointLightGroup13CombinedLightEv
 * Demangled: Caver::PointLightGroup::CombinedLight(void)
 *
 * Callers: 2
 *   0x00000000004612D4  Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&,Caver::PointLight *,int)
 *   0x0000000000461E60  Caver::PointLightManager::DrawDebugShapes(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x0000000000461CF8  Caver::PointLightGroup::CombinedLight(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4DA8 string=0x00000000001F4DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PointLightGroup::CombinedLight(Caver::PointLightGroup *this)
{
  return _ZNK5Caver15PointLightGroup13CombinedLightEv(this);
}

