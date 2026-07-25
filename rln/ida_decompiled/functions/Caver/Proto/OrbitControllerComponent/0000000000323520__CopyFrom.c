/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323520
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::OrbitControllerComponent::CopyFrom(Caver::Proto::OrbitControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5A30  Caver::Proto::OrbitControllerComponent::MergeFrom(Caver::Proto::OrbitControllerComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x0000000000323534 string=0x0000000000323538 "@"
 *   insn=0x0000000000323540 string=0x0000000000323544 ""
 *   insn=0x0000000000323558 string=0x000000000032355C "5I"
 *   insn=0x000000000032355C string=0x00000000001F5A30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::OrbitControllerComponent::CopyFrom(
        Caver::Proto::OrbitControllerComponent *this,
        const Caver::Proto::OrbitControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::OrbitControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::OrbitControllerComponent::MergeFrom();
  }
}

