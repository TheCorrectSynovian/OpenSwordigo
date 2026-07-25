/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316AFC
 * Mangled: _ZN5Caver5Proto23DoorControllerComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::DoorControllerComponent::CopyFrom(Caver::Proto::DoorControllerComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F85F0  Caver::Proto::DoorControllerComponent::MergeFrom(Caver::Proto::DoorControllerComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000316B10 string=0x0000000000316B14 "@"
 *   insn=0x0000000000316B1C string=0x0000000000316B20 ""
 *   insn=0x0000000000316B38 string=0x00000000001F85F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DoorControllerComponent::CopyFrom(
        Caver::Proto::DoorControllerComponent *this,
        const Caver::Proto::DoorControllerComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::DoorControllerComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::DoorControllerComponent::MergeFrom();
  }
}

