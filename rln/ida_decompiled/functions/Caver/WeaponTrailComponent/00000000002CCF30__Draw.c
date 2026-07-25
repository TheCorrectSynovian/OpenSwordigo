/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCF30
 * Mangled: _ZNK5Caver20WeaponTrailComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::WeaponTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001F9B00  Caver::WeaponTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000001FFAC0  Caver::WeaponTrail::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrailComponent::Draw(
        Caver::WeaponTrailComponent *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  return Caver::WeaponTrail::Draw((Caver::WeaponTrailComponent *)((char *)this + 112), a2, a3);
}

