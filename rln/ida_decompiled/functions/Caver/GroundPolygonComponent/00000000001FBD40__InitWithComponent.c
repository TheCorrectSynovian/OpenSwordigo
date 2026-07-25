/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD40
 * Mangled: ._ZN5Caver22GroundPolygonComponent17InitWithComponentEPKS0_
 * Demangled: Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *
 * Callers: 1
 *   0x00000000002C0520  Caver::GroundPolygonComponent::~GroundPolygonComponent()
 *
 * Callees: 1
 *   0x00000000002BE92C  Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBD48 string=0x00000000001FBD4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundPolygonComponent::InitWithComponent(
        Caver::GroundPolygonComponent *this,
        const Caver::GroundPolygonComponent *a2)
{
  return _ZN5Caver22GroundPolygonComponent17InitWithComponentEPKS0_(this, a2);
}

