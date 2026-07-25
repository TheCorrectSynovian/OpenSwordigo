/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBE30
 * Mangled: ._ZN5Caver10FastVectorINS_17ItemDropComponent8ItemDropEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize(int)
 *
 * Callers: 1
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *
 * Callees: 1
 *   0x000000000027A824  Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBE38 string=0x00000000001FBE3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize()
{
  return _ZN5Caver10FastVectorINS_17ItemDropComponent8ItemDropEE6ResizeEi();
}

