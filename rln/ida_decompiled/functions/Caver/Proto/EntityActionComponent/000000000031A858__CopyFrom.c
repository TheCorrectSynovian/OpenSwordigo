/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A858
 * Mangled: _ZN5Caver5Proto21EntityActionComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::EntityActionComponent::CopyFrom(Caver::Proto::EntityActionComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAF80  Caver::Proto::EntityActionComponent::MergeFrom(Caver::Proto::EntityActionComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000031A86C string=0x000000000031A870 "@"
 *   insn=0x000000000031A878 string=0x000000000031A87C ""
 *   insn=0x000000000031A894 string=0x00000000001FAF80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityActionComponent::CopyFrom(
        Caver::Proto::EntityActionComponent *this,
        const Caver::Proto::EntityActionComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::EntityActionComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::EntityActionComponent::MergeFrom();
  }
}

