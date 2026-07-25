/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203430
 * Mangled: ._ZN5Caver11WeaponTrail9SetVertexEiRKNS_7Vector3ERKNS_5ColorERKNS_7Vector2E
 * Demangled: Caver::WeaponTrail::SetVertex(int,Caver::Vector3 const&,Caver::Color const&,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000002CC1E0  Caver::WeaponTrail::AddSegment(Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callees: 1
 *   0x00000000002CC440  Caver::WeaponTrail::SetVertex(int,Caver::Vector3 const&,Caver::Color const&,Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203434 string=0x00000000002CC440 "\t"
 *   insn=0x0000000000203438 string=0x000000000020343C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrail::SetVertex(
        Caver::WeaponTrail *this,
        int a2,
        const Caver::Vector3 *a3,
        const Caver::Color *a4,
        const Caver::Vector2 *a5)
{
  return _ZN5Caver11WeaponTrail9SetVertexEiRKNS_7Vector3ERKNS_5ColorERKNS_7Vector2E(this, a2, a3, a4, a5);
}

