/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC390
 * Mangled: ._ZN5Caver10FastVectorINS_17ItemDropComponent13ItemDropEntryEED2Ev
 * Demangled: Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector()
 *
 * Callers: 1
 *   0x000000000027A0CC  Caver::ItemDropComponent::~ItemDropComponent()
 *
 * Callees: 1
 *   0x00000000002759B8  Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC398 string=0x00000000001FC39C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::~FastVector()
{
  return _ZN5Caver10FastVectorINS_17ItemDropComponent13ItemDropEntryEED2Ev();
}

