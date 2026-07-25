/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314324
 * Mangled: _ZN5Caver5Proto23CharControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::CharControllerComponent::CopyFrom(Caver::Proto::CharControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002013A0  Caver::Proto::CharControllerComponent::MergeFrom(Caver::Proto::CharControllerComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000314338 string=0x000000000031433C "@"
 *   insn=0x0000000000314344 string=0x0000000000314348 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharControllerComponent::CopyFrom(
        Caver::Proto::CharControllerComponent *this,
        const Caver::Proto::CharControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::CharControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::CharControllerComponent::MergeFrom();
  }
}

