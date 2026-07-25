/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BCE0
 * Mangled: _ZN5Caver5Proto19HeroEntityComponent4SwapEPS1_
 * Demangled: Caver::Proto::HeroEntityComponent::Swap(Caver::Proto::HeroEntityComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000031BCE4 string=0x000000000031BCE8 "(@"
 *   insn=0x000000000031BCE8 string=0x000000000031BCEC "\t@"
 *   insn=0x000000000031BCEC string=0x000000000031BCF0 ""
 *   insn=0x000000000031BCF0 string=0x000000000031BCF4 ")"
 *   insn=0x000000000031BCF4 string=0x000000000031BCF8 "("
 *   insn=0x000000000031BCF8 string=0x000000000031BCFC "\t"
 *   insn=0x000000000031BCFC string=0x000000000031BD00 ""
 *   insn=0x000000000031BD00 string=0x000000000031BD04 ")"
 *   insn=0x000000000031BD04 string=0x000000000031BD08 "(@"
 *   insn=0x000000000031BD08 string=0x000000000031BD0C "\t@"
 *   insn=0x000000000031BD0C string=0x000000000031BD10 ""
 *   insn=0x000000000031BD10 string=0x000000000031BD14 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::Swap(__int64 this, Caver::Proto::HeroEntityComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::HeroEntityComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

