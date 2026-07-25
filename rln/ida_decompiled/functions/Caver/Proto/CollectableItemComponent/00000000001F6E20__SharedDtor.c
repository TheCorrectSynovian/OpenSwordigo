/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E20
 * Mangled: ._ZN5Caver5Proto24CollectableItemComponent10SharedDtorEv
 * Demangled: Caver::Proto::CollectableItemComponent::SharedDtor(void)
 *
 * Callers: 2
 *   0x000000000032DFC8  Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent const&)
 *   0x000000000032E42C  Caver::Proto::CollectableItemComponent::~CollectableItemComponent()
 *
 * Callees: 1
 *   0x000000000032DFC8  Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E28 string=0x00000000001F6E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CollectableItemComponent::SharedDtor(Caver::Proto::CollectableItemComponent *this)
{
  JUMPOUT(0x32E2B8);
}

