/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331C44
 * Mangled: _ZN5Caver5Proto20OverlayTextComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::OverlayTextComponent::CopyFrom(Caver::Proto::OverlayTextComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEA50  Caver::Proto::OverlayTextComponent::MergeFrom(Caver::Proto::OverlayTextComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000331C58 string=0x0000000000331C5C "@"
 *   insn=0x0000000000331C64 string=0x0000000000331C68 ""
 *   insn=0x0000000000331C7C string=0x0000000000331C80 "t3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::OverlayTextComponent::CopyFrom(
        Caver::Proto::OverlayTextComponent *this,
        const Caver::Proto::OverlayTextComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::OverlayTextComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::OverlayTextComponent::MergeFrom(this, a2);
  }
}

