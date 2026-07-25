/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCAD0
 * Mangled: ._ZN5Caver24CollectableItemComponent16HandleCollectionEv
 * Demangled: Caver::CollectableItemComponent::HandleCollection(void)
 *
 * Callers: 1
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x000000000026307C  Caver::CollectableItemComponent::HandleCollection(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCAD8 string=0x00000000001FCADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollectableItemComponent::HandleCollection(Caver::CollectableItemComponent *this)
{
  return _ZN5Caver24CollectableItemComponent16HandleCollectionEv(this);
}

