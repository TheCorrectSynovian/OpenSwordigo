/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311D4C
 * Mangled: _ZN5Caver5Proto28AnimationControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::AnimationControllerComponent::CopyFrom(Caver::Proto::AnimationControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFA10  Caver::Proto::AnimationControllerComponent::MergeFrom(Caver::Proto::AnimationControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000311D60 string=0x0000000000311D64 "@"
 *   insn=0x0000000000311D6C string=0x0000000000311D70 ""
 *   insn=0x0000000000311D84 string=0x0000000000311D88 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::AnimationControllerComponent::CopyFrom(
        Caver::Proto::AnimationControllerComponent *this,
        const Caver::Proto::AnimationControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::AnimationControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::AnimationControllerComponent::MergeFrom();
  }
}

