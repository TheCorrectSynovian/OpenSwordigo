/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3AE0
 * Mangled: ._ZN5Caver15ShadowComponent16AddShadowSegmentERKNS_7Vector2ES3_ffPNS_10FastVectorINS_12ShadowVertexEEE
 * Demangled: Caver::ShadowComponent::AddShadowSegment(Caver::Vector2 const&,Caver::Vector2 const&,float,float,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callers: 1
 *   0x0000000000235A70  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callees: 1
 *   0x000000000023582C  Caver::ShadowComponent::AddShadowSegment(Caver::Vector2 const&,Caver::Vector2 const&,float,float,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3AE8 string=0x00000000001F3AEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ShadowComponent::AddShadowSegment()
{
  return _ZN5Caver15ShadowComponent16AddShadowSegmentERKNS_7Vector2ES3_ffPNS_10FastVectorINS_12ShadowVertexEEE();
}

