/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6010
 * Mangled: ._ZN5Caver24CollectableItemComponentC2Ev
 * Demangled: Caver::CollectableItemComponent::CollectableItemComponent(void)
 *
 * Callers: 1
 *   0x0000000000250678  Caver::CollectableItemComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002618BC  Caver::CollectableItemComponent::CollectableItemComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6018 string=0x00000000001F601C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CollectableItemComponent::CollectableItemComponent(Caver::CollectableItemComponent *this)
{
  return _ZN5Caver24CollectableItemComponentC2Ev(this);
}

