/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5A50
 * Mangled: ._ZN5Caver11WeaponTrail10AddSegmentERKNS_7Vector3ES3_f
 * Demangled: Caver::WeaponTrail::AddSegment(Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x00000000002CCF60  Caver::WeaponTrailComponent::AddSegment(Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callees: 1
 *   0x00000000002CC1E0  Caver::WeaponTrail::AddSegment(Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5A58 string=0x00000000001F5A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrail::AddSegment(
        Caver::WeaponTrail *this,
        const Caver::Vector3 *a2,
        const Caver::Vector3 *a3,
        float a4)
{
  return _ZN5Caver11WeaponTrail10AddSegmentERKNS_7Vector3ES3_f(this, a2, a3, a4);
}

