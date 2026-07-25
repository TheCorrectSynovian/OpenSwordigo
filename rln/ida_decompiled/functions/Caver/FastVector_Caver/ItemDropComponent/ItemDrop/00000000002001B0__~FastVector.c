/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002001B0
 * Mangled: ._ZN5Caver10FastVectorINS_17ItemDropComponent8ItemDropEED2Ev
 * Demangled: Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::~FastVector()
 *
 * Callers: 1
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *
 * Callees: 1
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002001B8 string=0x00000000002001BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::~FastVector()
{
  JUMPOUT(0x279BFC);
}

