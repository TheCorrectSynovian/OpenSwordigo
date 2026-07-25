/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030F7B0
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::CopyFrom(Caver::Proto::ObjectLinkControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202BA0  Caver::Proto::ObjectLinkControllerComponent::MergeFrom(Caver::Proto::ObjectLinkControllerComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000030F7C4 string=0x000000000030F7C8 "@"
 *   insn=0x000000000030F7D0 string=0x000000000030F7D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ObjectLinkControllerComponent::CopyFrom(
        Caver::Proto::ObjectLinkControllerComponent *this,
        const Caver::Proto::ObjectLinkControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ObjectLinkControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ObjectLinkControllerComponent::MergeFrom(this, a2);
  }
}

