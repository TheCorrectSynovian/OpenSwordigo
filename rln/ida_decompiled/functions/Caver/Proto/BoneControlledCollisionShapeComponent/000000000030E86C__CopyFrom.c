/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E86C
 * Mangled: _ZN5Caver5Proto37BoneControlledCollisionShapeComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::CopyFrom(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD910  Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom(Caver::Proto::BoneControlledCollisionShapeComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000030E880 string=0x000000000030E884 "@"
 *   insn=0x000000000030E88C string=0x000000000030E890 ""
 *   insn=0x000000000030E8A8 string=0x00000000001FD910 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::CopyFrom(
        Caver::Proto::BoneControlledCollisionShapeComponent *this,
        const Caver::Proto::BoneControlledCollisionShapeComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::BoneControlledCollisionShapeComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::BoneControlledCollisionShapeComponent::MergeFrom();
  }
}

