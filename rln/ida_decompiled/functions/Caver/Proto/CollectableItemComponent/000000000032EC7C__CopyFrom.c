/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032EC7C
 * Mangled: _ZN5Caver5Proto24CollectableItemComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::CollectableItemComponent::CopyFrom(Caver::Proto::CollectableItemComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F87D0  Caver::Proto::CollectableItemComponent::MergeFrom(Caver::Proto::CollectableItemComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000032EC90 string=0x000000000032EC94 "@"
 *   insn=0x000000000032EC9C string=0x000000000032ECA0 ""
 *   insn=0x000000000032ECB8 string=0x00000000001F87D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CollectableItemComponent::CopyFrom(
        Caver::Proto::CollectableItemComponent *this,
        const Caver::Proto::CollectableItemComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::CollectableItemComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::CollectableItemComponent::MergeFrom(this, a2);
  }
}

