/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332794
 * Mangled: _ZN5Caver5Proto21PortalEffectComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::PortalEffectComponent::CopyFrom(Caver::Proto::PortalEffectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBB40  Caver::Proto::PortalEffectComponent::MergeFrom(Caver::Proto::PortalEffectComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000003327A8 string=0x00000000003327AC "@"
 *   insn=0x00000000003327B4 string=0x00000000003327B8 ""
 *   insn=0x00000000003327D0 string=0x00000000001FBB40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PortalEffectComponent::CopyFrom(
        Caver::Proto::PortalEffectComponent *this,
        const Caver::Proto::PortalEffectComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::PortalEffectComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::PortalEffectComponent::MergeFrom();
  }
}

