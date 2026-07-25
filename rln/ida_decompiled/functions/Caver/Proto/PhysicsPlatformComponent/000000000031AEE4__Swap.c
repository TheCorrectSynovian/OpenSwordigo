/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AEE4
 * Mangled: _ZN5Caver5Proto24PhysicsPlatformComponent4SwapEPS1_
 * Demangled: Caver::Proto::PhysicsPlatformComponent::Swap(Caver::Proto::PhysicsPlatformComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x000000000031AEE8 string=0x000000000031AEEC "("
 *   insn=0x000000000031AEEC string=0x000000000031AEF0 "\t"
 *   insn=0x000000000031AEF0 string=0x000000000031AEF4 ""
 *   insn=0x000000000031AEF4 string=0x000000000031AEF8 ")"
 *   insn=0x000000000031AEF8 string=0x000000000031AEFC "("
 *   insn=0x000000000031AEFC string=0x000000000031AF00 "\t"
 *   insn=0x000000000031AF00 string=0x000000000031AF04 ""
 *   insn=0x000000000031AF04 string=0x000000000031AF08 ")"
 *   insn=0x000000000031AF08 string=0x000000000031AF0C "("
 *   insn=0x000000000031AF0C string=0x000000000031AF10 "\t"
 *   insn=0x000000000031AF10 string=0x000000000031AF14 ""
 *   insn=0x000000000031AF14 string=0x000000000031AF18 ")"
 *   insn=0x000000000031AF18 string=0x000000000031AF1C "("
 *   insn=0x000000000031AF1C string=0x000000000031AF20 "\t"
 *   insn=0x000000000031AF20 string=0x000000000031AF24 ""
 *   insn=0x000000000031AF24 string=0x000000000031AF28 ")"
 *   insn=0x000000000031AF28 string=0x000000000031AF2C "("
 *   insn=0x000000000031AF2C string=0x000000000031AF30 "\t"
 *   insn=0x000000000031AF30 string=0x000000000031AF34 ""
 *   insn=0x000000000031AF34 string=0x000000000031AF38 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsPlatformComponent::Swap(
        __int64 this,
        Caver::Proto::PhysicsPlatformComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::PhysicsPlatformComponent *)this )
  {
    v2 = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v2;
    v3 = *(_QWORD *)(this + 8);
    *(_QWORD *)(this + 8) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v3;
  }
  return this;
}

