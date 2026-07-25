/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250678
 * Mangled: _ZN5Caver24CollectableItemComponent6CreateEv
 * Demangled: Caver::CollectableItemComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250638  Caver::RotatingBackgroundComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6010  Caver::CollectableItemComponent::CollectableItemComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002506B8  Caver::ItemDropComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250688 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025068C string=0x0000000000250690 "`"
 *   insn=0x0000000000250690 string=0x00000000001F6010 "0'"
 *   insn=0x00000000002506AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::CollectableItemComponent *__fastcall Caver::CollectableItemComponent::Create(
        Caver::CollectableItemComponent *this)
{
  Caver::CollectableItemComponent *v1; // x19

  v1 = (Caver::CollectableItemComponent *)operator new(0xB8u);
  Caver::CollectableItemComponent::CollectableItemComponent(v1);
  return v1;
}

