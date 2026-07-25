/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318004
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::MonsterEntityComponent::CopyFrom(Caver::Proto::MonsterEntityComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC100  Caver::Proto::MonsterEntityComponent::MergeFrom(Caver::Proto::MonsterEntityComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000318018 string=0x000000000031801C "@"
 *   insn=0x0000000000318024 string=0x0000000000318028 ""
 *   insn=0x000000000031803C string=0x0000000000318040 "0"
 *   insn=0x0000000000318040 string=0x00000000001FC100 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MonsterEntityComponent::CopyFrom(
        Caver::Proto::MonsterEntityComponent *this,
        const Caver::Proto::MonsterEntityComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::MonsterEntityComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::MonsterEntityComponent::MergeFrom();
  }
}

