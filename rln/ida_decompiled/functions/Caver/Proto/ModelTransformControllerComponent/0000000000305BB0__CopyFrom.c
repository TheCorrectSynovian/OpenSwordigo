/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305BB0
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ModelTransformControllerComponent::CopyFrom(Caver::Proto::ModelTransformControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8EB0  Caver::Proto::ModelTransformControllerComponent::MergeFrom(Caver::Proto::ModelTransformControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000305BC4 string=0x0000000000305BC8 "@"
 *   insn=0x0000000000305BD0 string=0x0000000000305BD4 ""
 *   insn=0x0000000000305BEC string=0x00000000001F8EB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ModelTransformControllerComponent::CopyFrom(
        Caver::Proto::ModelTransformControllerComponent *this,
        const Caver::Proto::ModelTransformControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ModelTransformControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ModelTransformControllerComponent::MergeFrom();
  }
}

