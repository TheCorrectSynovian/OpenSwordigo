/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312738
 * Mangled: _ZN5Caver5Proto27CharAnimControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::CharAnimControllerComponent::CopyFrom(Caver::Proto::CharAnimControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002015E0  Caver::Proto::CharAnimControllerComponent::MergeFrom(Caver::Proto::CharAnimControllerComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000031274C string=0x0000000000312750 "@"
 *   insn=0x0000000000312758 string=0x000000000031275C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharAnimControllerComponent::CopyFrom(
        Caver::Proto::CharAnimControllerComponent *this,
        const Caver::Proto::CharAnimControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::CharAnimControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::CharAnimControllerComponent::MergeFrom();
  }
}

