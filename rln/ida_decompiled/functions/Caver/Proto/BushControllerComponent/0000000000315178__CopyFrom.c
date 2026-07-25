/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315178
 * Mangled: _ZN5Caver5Proto23BushControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::BushControllerComponent::CopyFrom(Caver::Proto::BushControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4890  Caver::Proto::BushControllerComponent::MergeFrom(Caver::Proto::BushControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000031518C string=0x0000000000315190 "@"
 *   insn=0x0000000000315198 string=0x000000000031519C ""
 *   insn=0x00000000003151B4 string=0x00000000001F4890 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BushControllerComponent::CopyFrom(
        Caver::Proto::BushControllerComponent *this,
        const Caver::Proto::BushControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::BushControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::BushControllerComponent::MergeFrom();
  }
}

