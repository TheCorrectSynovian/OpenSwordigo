/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318C30
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::PhysicsObjectComponent::CopyFrom(Caver::Proto::PhysicsObjectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F36A0  Caver::Proto::PhysicsObjectComponent::MergeFrom(Caver::Proto::PhysicsObjectComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000318C44 string=0x0000000000318C48 "@"
 *   insn=0x0000000000318C50 string=0x0000000000318C54 ""
 *   insn=0x0000000000318C6C string=0x00000000001F36A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PhysicsObjectComponent::CopyFrom(
        Caver::Proto::PhysicsObjectComponent *this,
        const Caver::Proto::PhysicsObjectComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::PhysicsObjectComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::PhysicsObjectComponent::MergeFrom();
  }
}

