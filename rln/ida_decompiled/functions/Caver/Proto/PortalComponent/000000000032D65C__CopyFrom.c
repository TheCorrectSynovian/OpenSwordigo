/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D65C
 * Mangled: _ZN5Caver5Proto15PortalComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::PortalComponent::CopyFrom(Caver::Proto::PortalComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201000  Caver::Proto::PortalComponent::MergeFrom(Caver::Proto::PortalComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000032D670 string=0x000000000032D674 "@"
 *   insn=0x000000000032D67C string=0x000000000032D680 ""
 *   insn=0x000000000032D694 string=0x000000000032D698 "ZN"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PortalComponent::CopyFrom(
        Caver::Proto::PortalComponent *this,
        const Caver::Proto::PortalComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::PortalComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::PortalComponent::MergeFrom(this, a2);
  }
}

