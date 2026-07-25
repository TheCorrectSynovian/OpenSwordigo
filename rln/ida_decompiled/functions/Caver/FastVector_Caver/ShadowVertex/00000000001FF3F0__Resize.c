/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF3F0
 * Mangled: ._ZN5Caver10FastVectorINS_12ShadowVertexEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::ShadowVertex>::Resize(int)
 *
 * Callers: 1
 *   0x000000000023582C  Caver::ShadowComponent::AddShadowSegment(Caver::Vector2 const&,Caver::Vector2 const&,float,float,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callees: 1
 *   0x0000000000236488  Caver::FastVector<Caver::ShadowVertex>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF3F8 string=0x00000000001FF3FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::ShadowVertex>::Resize()
{
  return _ZN5Caver10FastVectorINS_12ShadowVertexEE6ResizeEi();
}

