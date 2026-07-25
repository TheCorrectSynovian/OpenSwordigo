/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AE90
 * Mangled: _ZN5Caver5Proto24PhysicsPlatformComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::PhysicsPlatformComponent::CopyFrom(Caver::Proto::PhysicsPlatformComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3CA0  Caver::Proto::PhysicsPlatformComponent::MergeFrom(Caver::Proto::PhysicsPlatformComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x000000000031AEA4 string=0x000000000031AEA8 "@"
 *   insn=0x000000000031AEB0 string=0x000000000031AEB4 ""
 *   insn=0x000000000031AEC8 string=0x000000000031AECC "uc"
 *   insn=0x000000000031AECC string=0x00000000001F3CA0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PhysicsPlatformComponent::CopyFrom(
        Caver::Proto::PhysicsPlatformComponent *this,
        const Caver::Proto::PhysicsPlatformComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::PhysicsPlatformComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::PhysicsPlatformComponent::MergeFrom();
  }
}

