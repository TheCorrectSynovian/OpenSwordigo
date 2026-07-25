/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB160
 * Mangled: ._ZN5Caver5Proto24CollectableItemComponent16default_instanceEv
 * Demangled: Caver::Proto::CollectableItemComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000261B10  Caver::CollectableItemComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAA8C  Caver::Proto::CollectableItemComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB168 string=0x00000000001FB16C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::CollectableItemComponent::default_instance(
        Caver::Proto::CollectableItemComponent *this)
{
  return _ZN5Caver5Proto24CollectableItemComponent16default_instanceEv(this);
}

