/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309ED0
 * Mangled: _ZN5Caver5Proto23TextureMappingComponent4SwapEPS1_
 * Demangled: Caver::Proto::TextureMappingComponent::Swap(Caver::Proto::TextureMappingComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000309ED4 string=0x0000000000309ED8 "(@"
 *   insn=0x0000000000309ED8 string=0x0000000000309EDC "\t@"
 *   insn=0x0000000000309EDC string=0x0000000000309EE0 ""
 *   insn=0x0000000000309EE0 string=0x0000000000309EE4 ")"
 *   insn=0x0000000000309EE4 string=0x0000000000309EE8 "("
 *   insn=0x0000000000309EE8 string=0x0000000000309EEC "\t"
 *   insn=0x0000000000309EEC string=0x0000000000309EF0 ""
 *   insn=0x0000000000309EF0 string=0x0000000000309EF4 ")"
 *   insn=0x0000000000309EF4 string=0x0000000000309EF8 "("
 *   insn=0x0000000000309EF8 string=0x0000000000309EFC "\t"
 *   insn=0x0000000000309EFC string=0x0000000000309F00 ""
 *   insn=0x0000000000309F00 string=0x0000000000309F04 ")"
 *   insn=0x0000000000309F04 string=0x0000000000309F08 "((@"
 *   insn=0x0000000000309F08 string=0x0000000000309F0C "\t(@"
 *   insn=0x0000000000309F0C string=0x0000000000309F10 "("
 *   insn=0x0000000000309F10 string=0x0000000000309F14 ")("
 *   insn=0x0000000000309F14 string=0x0000000000309F18 "(@"
 *   insn=0x0000000000309F18 string=0x0000000000309F1C "\t@"
 *   insn=0x0000000000309F1C string=0x0000000000309F20 ""
 *   insn=0x0000000000309F20 string=0x0000000000309F24 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::Swap(__int64 this, Caver::Proto::TextureMappingComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::TextureMappingComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    v3 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

