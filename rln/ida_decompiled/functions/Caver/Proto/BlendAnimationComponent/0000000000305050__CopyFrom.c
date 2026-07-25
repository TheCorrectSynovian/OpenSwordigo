/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305050
 * Mangled: _ZN5Caver5Proto23BlendAnimationComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::BlendAnimationComponent::CopyFrom(Caver::Proto::BlendAnimationComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA60  Caver::Proto::BlendAnimationComponent::MergeFrom(Caver::Proto::BlendAnimationComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000305064 string=0x0000000000305068 "@"
 *   insn=0x0000000000305070 string=0x0000000000305074 ""
 *   insn=0x0000000000305088 string=0x000000000030508C "u"
 *   insn=0x000000000030508C string=0x00000000001FBA60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BlendAnimationComponent::CopyFrom(
        Caver::Proto::BlendAnimationComponent *this,
        const Caver::Proto::BlendAnimationComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::BlendAnimationComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::BlendAnimationComponent::MergeFrom();
  }
}

