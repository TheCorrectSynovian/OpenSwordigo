/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310D9C
 * Mangled: _ZN5Caver5Proto15ShadowComponent4SwapEPS1_
 * Demangled: Caver::Proto::ShadowComponent::Swap(Caver::Proto::ShadowComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000310D9C string=0x0000000000310DA0 " "
 *   insn=0x0000000000310DA0 string=0x0000000000310DA4 "( @"
 *   insn=0x0000000000310DA4 string=0x0000000000310DA8 "\t @"
 *   insn=0x0000000000310DA8 string=0x0000000000310DAC " "
 *   insn=0x0000000000310DAC string=0x0000000000310DB0 ") "
 *   insn=0x0000000000310DB0 string=0x0000000000310DB4 "("
 *   insn=0x0000000000310DB4 string=0x0000000000310DB8 "\t"
 *   insn=0x0000000000310DB8 string=0x0000000000310DBC ""
 *   insn=0x0000000000310DBC string=0x0000000000310DC0 ")"
 *   insn=0x0000000000310DC0 string=0x0000000000310DC4 "("
 *   insn=0x0000000000310DC4 string=0x0000000000310DC8 "\t"
 *   insn=0x0000000000310DC8 string=0x0000000000310DCC ""
 *   insn=0x0000000000310DCC string=0x0000000000310DD0 ")"
 *   insn=0x0000000000310DD0 string=0x0000000000310DD4 "("
 *   insn=0x0000000000310DD4 string=0x0000000000310DD8 "\t"
 *   insn=0x0000000000310DD8 string=0x0000000000310DDC ""
 *   insn=0x0000000000310DDC string=0x0000000000310DE0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::Swap(__int64 this, Caver::Proto::ShadowComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::ShadowComponent *)this )
  {
    v2 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v2;
    v3 = *(_QWORD *)(this + 8);
    *(_QWORD *)(this + 8) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
  }
  return this;
}

