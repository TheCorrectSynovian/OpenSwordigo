/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9B00
 * Mangled: ._ZNK5Caver20WeaponTrailComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::WeaponTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000002CCF30  Caver::WeaponTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9B08 string=0x00000000001F9B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrailComponent::Draw(
        Caver::WeaponTrailComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  return _ZNK5Caver20WeaponTrailComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E(this, a2, a3);
}

