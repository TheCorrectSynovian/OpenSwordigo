/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323FCC
 * Mangled: _ZN5Caver5Proto26MonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::MonsterControllerComponent::Swap(Caver::Proto::MonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000323FD0 string=0x0000000000323FD4 "("
 *   insn=0x0000000000323FD4 string=0x0000000000323FD8 "\t"
 *   insn=0x0000000000323FD8 string=0x0000000000323FDC ""
 *   insn=0x0000000000323FDC string=0x0000000000323FE0 ")"
 *   insn=0x0000000000323FE0 string=0x0000000000323FE4 "("
 *   insn=0x0000000000323FE4 string=0x0000000000323FE8 "\t"
 *   insn=0x0000000000323FE8 string=0x0000000000323FEC ""
 *   insn=0x0000000000323FEC string=0x0000000000323FF0 ")"
 *   insn=0x0000000000323FF0 string=0x0000000000323FF4 "(@A"
 *   insn=0x0000000000323FF4 string=0x0000000000323FF8 "\t@A"
 *   insn=0x0000000000323FF8 string=0x0000000000323FFC "@"
 *   insn=0x0000000000323FFC string=0x0000000000324000 ")@"
 *   insn=0x0000000000324000 string=0x0000000000324004 "("
 *   insn=0x0000000000324004 string=0x0000000000324008 "\t"
 *   insn=0x0000000000324008 string=0x000000000032400C ""
 *   insn=0x000000000032400C string=0x0000000000324010 ")"
 *   insn=0x0000000000324010 string=0x0000000000324014 "(@"
 *   insn=0x0000000000324014 string=0x0000000000324018 "\t@"
 *   insn=0x0000000000324018 string=0x000000000032401C ""
 *   insn=0x000000000032401C string=0x0000000000324020 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterControllerComponent::Swap(
        __int64 this,
        Caver::Proto::MonsterControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::MonsterControllerComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_QWORD *)(this + 20);
    *(_QWORD *)(this + 20) = *(_QWORD *)((char *)a2 + 20);
    *(_QWORD *)((char *)a2 + 20) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

