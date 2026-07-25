/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003376A8
 * Mangled: _ZN5Caver5Proto24DimensionObjectComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::DimensionObjectComponent::CopyFrom(Caver::Proto::DimensionObjectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203E40  Caver::Proto::DimensionObjectComponent::MergeFrom(Caver::Proto::DimensionObjectComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000003376BC string=0x00000000003376C0 "@"
 *   insn=0x00000000003376C8 string=0x00000000003376CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DimensionObjectComponent::CopyFrom(
        Caver::Proto::DimensionObjectComponent *this,
        const Caver::Proto::DimensionObjectComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::DimensionObjectComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::DimensionObjectComponent::MergeFrom();
  }
}

