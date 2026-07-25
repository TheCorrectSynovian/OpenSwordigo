/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003085FC
 * Mangled: _ZN5Caver5Proto19GroundMeshComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::GroundMeshComponent::CopyFrom(Caver::Proto::GroundMeshComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCD10  Caver::Proto::GroundMeshComponent::MergeFrom(Caver::Proto::GroundMeshComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000308610 string=0x0000000000308614 "@"
 *   insn=0x000000000030861C string=0x0000000000308620 ""
 *   insn=0x0000000000308638 string=0x00000000001FCD10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GroundMeshComponent::CopyFrom(
        Caver::Proto::GroundMeshComponent *this,
        const Caver::Proto::GroundMeshComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::GroundMeshComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::GroundMeshComponent::MergeFrom(this, a2);
  }
}

