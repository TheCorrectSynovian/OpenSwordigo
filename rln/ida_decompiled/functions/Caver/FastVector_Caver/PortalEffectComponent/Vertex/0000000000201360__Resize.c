/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201360
 * Mangled: ._ZN5Caver10FastVectorINS_21PortalEffectComponent6VertexEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize(int)
 *
 * Callers: 1
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *
 * Callees: 1
 *   0x00000000002AEE6C  Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201368 string=0x000000000020136C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize()
{
  return _ZN5Caver10FastVectorINS_21PortalEffectComponent6VertexEE6ResizeEi();
}

