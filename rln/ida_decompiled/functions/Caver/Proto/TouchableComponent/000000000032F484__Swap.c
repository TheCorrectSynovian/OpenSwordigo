/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F484
 * Mangled: _ZN5Caver5Proto18TouchableComponent4SwapEPS1_
 * Demangled: Caver::Proto::TouchableComponent::Swap(Caver::Proto::TouchableComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000032F484 string=0x000000000032F488 "`"
 *   insn=0x000000000032F488 string=0x000000000032F48C "("
 *   insn=0x000000000032F48C string=0x000000000032F490 "\t"
 *   insn=0x000000000032F490 string=0x000000000032F494 ""
 *   insn=0x000000000032F494 string=0x000000000032F498 "("
 *   insn=0x000000000032F498 string=0x000000000032F49C ")"
 *   insn=0x000000000032F49C string=0x000000000032F4A0 "\t"
 *   insn=0x000000000032F4A0 string=0x000000000032F4A4 ""
 *   insn=0x000000000032F4A4 string=0x000000000032F4A8 "(@"
 *   insn=0x000000000032F4A8 string=0x000000000032F4AC ""
 *   insn=0x000000000032F4AC string=0x000000000032F4B0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::Swap(__int64 this, Caver::Proto::TouchableComponent *a2)
{
  int v2; // w9
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x10

  if ( a2 != (Caver::Proto::TouchableComponent *)this )
  {
    v2 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    v3 = *((_QWORD *)a2 + 1);
    *((_DWORD *)a2 + 6) = v2;
    v4 = *(_QWORD *)(this + 8);
    v5 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 8) = v3;
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 1) = v4;
    *((_QWORD *)a2 + 2) = v5;
  }
  return this;
}

