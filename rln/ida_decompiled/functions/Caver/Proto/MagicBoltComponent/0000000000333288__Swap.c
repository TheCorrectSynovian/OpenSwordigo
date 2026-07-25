/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333288
 * Mangled: _ZN5Caver5Proto18MagicBoltComponent4SwapEPS1_
 * Demangled: Caver::Proto::MagicBoltComponent::Swap(Caver::Proto::MagicBoltComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000333288 string=0x000000000033328C " "
 *   insn=0x000000000033328C string=0x0000000000333290 "("
 *   insn=0x0000000000333290 string=0x0000000000333294 "\t"
 *   insn=0x0000000000333294 string=0x0000000000333298 ""
 *   insn=0x0000000000333298 string=0x000000000033329C ")"
 *   insn=0x000000000033329C string=0x00000000003332A0 "("
 *   insn=0x00000000003332A0 string=0x00000000003332A4 "\t"
 *   insn=0x00000000003332A4 string=0x00000000003332A8 ""
 *   insn=0x00000000003332A8 string=0x00000000003332AC ")"
 *   insn=0x00000000003332AC string=0x00000000003332B0 "("
 *   insn=0x00000000003332B0 string=0x00000000003332B4 "\t"
 *   insn=0x00000000003332B4 string=0x00000000003332B8 ""
 *   insn=0x00000000003332B8 string=0x00000000003332BC ")"
 *   insn=0x00000000003332BC string=0x00000000003332C0 "("
 *   insn=0x00000000003332C0 string=0x00000000003332C4 "\t"
 *   insn=0x00000000003332C4 string=0x00000000003332C8 ""
 *   insn=0x00000000003332C8 string=0x00000000003332CC ")"
 *   insn=0x00000000003332CC string=0x00000000003332D0 "("
 *   insn=0x00000000003332D0 string=0x00000000003332D4 "\t"
 *   insn=0x00000000003332D4 string=0x00000000003332D8 ""
 *   insn=0x00000000003332D8 string=0x00000000003332DC ")"
 *   insn=0x00000000003332DC string=0x00000000003332E0 "(@"
 *   insn=0x00000000003332E0 string=0x00000000003332E4 "\t@"
 *   insn=0x00000000003332E4 string=0x00000000003332E8 ""
 *   insn=0x00000000003332E8 string=0x00000000003332EC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBoltComponent::Swap(__int64 this, Caver::Proto::MagicBoltComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  __int64 v5; // x9
  __int64 v6; // x9

  if ( a2 != (Caver::Proto::MagicBoltComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v5;
    v6 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

