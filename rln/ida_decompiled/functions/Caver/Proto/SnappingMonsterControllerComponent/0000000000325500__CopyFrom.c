/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000325500
 * Mangled: _ZN5Caver5Proto34SnappingMonsterControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::CopyFrom(Caver::Proto::SnappingMonsterControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F53E0  Caver::Proto::SnappingMonsterControllerComponent::MergeFrom(Caver::Proto::SnappingMonsterControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000325514 string=0x0000000000325518 "@"
 *   insn=0x0000000000325520 string=0x0000000000325524 ""
 *   insn=0x000000000032553C string=0x00000000001F53E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SnappingMonsterControllerComponent::CopyFrom(
        Caver::Proto::SnappingMonsterControllerComponent *this,
        const Caver::Proto::SnappingMonsterControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SnappingMonsterControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SnappingMonsterControllerComponent::MergeFrom();
  }
}

