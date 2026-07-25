/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFAC0
 * Mangled: ._ZNK5Caver11WeaponTrail4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::WeaponTrail::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000002CCF30  Caver::WeaponTrailComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000002CC73C  Caver::WeaponTrail::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFAC8 string=0x00000000001FFACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrail::Draw(
        Caver::WeaponTrail *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  return _ZNK5Caver11WeaponTrail4DrawEPNS_16RenderingContextERKNS_7Matrix4E(this, a2, a3);
}

