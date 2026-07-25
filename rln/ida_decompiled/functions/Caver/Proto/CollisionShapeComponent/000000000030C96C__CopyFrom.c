/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030C96C
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::CollisionShapeComponent::CopyFrom(Caver::Proto::CollisionShapeComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF610  Caver::Proto::CollisionShapeComponent::MergeFrom(Caver::Proto::CollisionShapeComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000030C980 string=0x000000000030C984 "@"
 *   insn=0x000000000030C98C string=0x000000000030C990 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CollisionShapeComponent::CopyFrom(
        Caver::Proto::CollisionShapeComponent *this,
        const Caver::Proto::CollisionShapeComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::CollisionShapeComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::CollisionShapeComponent::MergeFrom();
  }
}

