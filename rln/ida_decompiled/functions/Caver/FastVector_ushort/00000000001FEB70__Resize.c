/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEB70
 * Mangled: ._ZN5Caver10FastVectorItE6ResizeEi
 * Demangled: Caver::FastVector<ushort>::Resize(int)
 *
 * Callers: 1
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *
 * Callees: 1
 *   0x00000000002AEF4C  Caver::FastVector<ushort>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEB78 string=0x00000000001FEB7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<unsigned short>::Resize()
{
  return _ZN5Caver10FastVectorItE6ResizeEi();
}

