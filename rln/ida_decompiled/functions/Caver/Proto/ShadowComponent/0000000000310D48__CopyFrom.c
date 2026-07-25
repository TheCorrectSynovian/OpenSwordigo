/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310D48
 * Mangled: _ZN5Caver5Proto15ShadowComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ShadowComponent::CopyFrom(Caver::Proto::ShadowComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3BF0  Caver::Proto::ShadowComponent::MergeFrom(Caver::Proto::ShadowComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000310D5C string=0x0000000000310D60 "@"
 *   insn=0x0000000000310D68 string=0x0000000000310D6C ""
 *   insn=0x0000000000310D84 string=0x00000000001F3BF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ShadowComponent::CopyFrom(
        Caver::Proto::ShadowComponent *this,
        const Caver::Proto::ShadowComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ShadowComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ShadowComponent::MergeFrom();
  }
}

