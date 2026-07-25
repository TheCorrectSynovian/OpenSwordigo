/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031577C
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ElevatorControllerComponent::CopyFrom(Caver::Proto::ElevatorControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002002A0  Caver::Proto::ElevatorControllerComponent::MergeFrom(Caver::Proto::ElevatorControllerComponent const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000315790 string=0x0000000000315794 "@"
 *   insn=0x000000000031579C string=0x00000000003157A0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ElevatorControllerComponent::CopyFrom(
        Caver::Proto::ElevatorControllerComponent *this,
        const Caver::Proto::ElevatorControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ElevatorControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ElevatorControllerComponent::MergeFrom();
  }
}

