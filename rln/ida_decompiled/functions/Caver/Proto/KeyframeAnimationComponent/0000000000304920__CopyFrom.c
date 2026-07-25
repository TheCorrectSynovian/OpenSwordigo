/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304920
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::KeyframeAnimationComponent::CopyFrom(Caver::Proto::KeyframeAnimationComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA420  Caver::Proto::KeyframeAnimationComponent::MergeFrom(Caver::Proto::KeyframeAnimationComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000304934 string=0x0000000000304938 "@"
 *   insn=0x0000000000304940 string=0x0000000000304944 ""
 *   insn=0x000000000030495C string=0x00000000001FA420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::KeyframeAnimationComponent::CopyFrom(
        Caver::Proto::KeyframeAnimationComponent *this,
        const Caver::Proto::KeyframeAnimationComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::KeyframeAnimationComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::KeyframeAnimationComponent::MergeFrom();
  }
}

