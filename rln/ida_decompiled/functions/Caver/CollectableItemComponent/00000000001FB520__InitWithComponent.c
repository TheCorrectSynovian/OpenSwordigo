/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB520
 * Mangled: ._ZN5Caver24CollectableItemComponent17InitWithComponentEPKS0_
 * Demangled: Caver::CollectableItemComponent::InitWithComponent(Caver::CollectableItemComponent const*)
 *
 * Callers: 1
 *   0x0000000000263C74  Caver::CollectableItemComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000261928  Caver::CollectableItemComponent::InitWithComponent(Caver::CollectableItemComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB528 string=0x00000000001FB52C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollectableItemComponent::InitWithComponent(
        Caver::CollectableItemComponent *this,
        const Caver::CollectableItemComponent *a2)
{
  return _ZN5Caver24CollectableItemComponent17InitWithComponentEPKS0_(this, a2);
}

