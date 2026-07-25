/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281428
 * Mangled: _ZN5Caver24PhysicsPlatformComponent7PrepareEv
 * Demangled: Caver::PhysicsPlatformComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000281428 string=0x000000000028142C "\t9@"
 *   insn=0x000000000028142C string=0x0000000000281430 "\tD"
 *   insn=0x0000000000281430 string=0x0000000000281434 ""
 *   insn=0x0000000000281434 string=0x0000000000281438 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsPlatformComponent::Prepare(__int64 this)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(this + 40);
  *(_QWORD *)(this + 136) = *(_QWORD *)(v1 + 112);
  *(_DWORD *)(this + 144) = *(_DWORD *)(v1 + 128);
  return this;
}

