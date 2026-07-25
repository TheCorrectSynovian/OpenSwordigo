/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A180
 * Mangled: _ZN5Caver5Proto25EntityControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::EntityControllerComponent::CopyFrom(Caver::Proto::EntityControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203E60  Caver::Proto::EntityControllerComponent::MergeFrom(Caver::Proto::EntityControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000031A194 string=0x000000000031A198 "@"
 *   insn=0x000000000031A1A0 string=0x000000000031A1A4 ""
 *   insn=0x000000000031A1B8 string=0x000000000031A1BC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EntityControllerComponent::CopyFrom(
        Caver::Proto::EntityControllerComponent *this,
        const Caver::Proto::EntityControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::EntityControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::EntityControllerComponent::MergeFrom();
  }
}

