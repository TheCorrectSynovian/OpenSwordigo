/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DEA0
 * Mangled: _ZN5Caver5Proto19SpawnPointComponent4SwapEPS1_
 * Demangled: Caver::Proto::SpawnPointComponent::Swap(Caver::Proto::SpawnPointComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x000000000032DEA0 string=0x000000000032DEA4 " "
 *   insn=0x000000000032DEA4 string=0x000000000032DEA8 "("
 *   insn=0x000000000032DEA8 string=0x000000000032DEAC "\t"
 *   insn=0x000000000032DEAC string=0x000000000032DEB0 ""
 *   insn=0x000000000032DEB0 string=0x000000000032DEB4 ")"
 *   insn=0x000000000032DEB4 string=0x000000000032DEB8 "(@"
 *   insn=0x000000000032DEB8 string=0x000000000032DEBC "\t@"
 *   insn=0x000000000032DEBC string=0x000000000032DEC0 ""
 *   insn=0x000000000032DEC0 string=0x000000000032DEC4 ")"
 *   insn=0x000000000032DEC4 string=0x000000000032DEC8 "("
 *   insn=0x000000000032DEC8 string=0x000000000032DECC "\t"
 *   insn=0x000000000032DECC string=0x000000000032DED0 ""
 *   insn=0x000000000032DED0 string=0x000000000032DED4 ")"
 *   insn=0x000000000032DED4 string=0x000000000032DED8 "(@"
 *   insn=0x000000000032DED8 string=0x000000000032DEDC "\t@"
 *   insn=0x000000000032DEDC string=0x000000000032DEE0 ""
 *   insn=0x000000000032DEE0 string=0x000000000032DEE4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::Swap(__int64 this, Caver::Proto::SpawnPointComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::SpawnPointComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

