/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A1D4
 * Mangled: _ZN5Caver5Proto25EntityControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::EntityControllerComponent::Swap(Caver::Proto::EntityControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 33
 *   insn=0x000000000031A1D4 string=0x000000000031A1D8 " "
 *   insn=0x000000000031A1D8 string=0x000000000031A1DC "("
 *   insn=0x000000000031A1DC string=0x000000000031A1E0 "\t"
 *   insn=0x000000000031A1E0 string=0x000000000031A1E4 ""
 *   insn=0x000000000031A1E4 string=0x000000000031A1E8 ")"
 *   insn=0x000000000031A1E8 string=0x000000000031A1EC "("
 *   insn=0x000000000031A1EC string=0x000000000031A1F0 "\t"
 *   insn=0x000000000031A1F0 string=0x000000000031A1F4 ""
 *   insn=0x000000000031A1F4 string=0x000000000031A1F8 ")"
 *   insn=0x000000000031A1F8 string=0x000000000031A1FC "("
 *   insn=0x000000000031A1FC string=0x000000000031A200 "\t"
 *   insn=0x000000000031A200 string=0x000000000031A204 ""
 *   insn=0x000000000031A204 string=0x000000000031A208 ")"
 *   insn=0x000000000031A208 string=0x000000000031A20C "("
 *   insn=0x000000000031A20C string=0x000000000031A210 "\t"
 *   insn=0x000000000031A210 string=0x000000000031A214 ""
 *   insn=0x000000000031A214 string=0x000000000031A218 ")"
 *   insn=0x000000000031A218 string=0x000000000031A21C "( @"
 *   insn=0x000000000031A21C string=0x000000000031A220 "\t @"
 *   insn=0x000000000031A220 string=0x000000000031A224 " "
 *   insn=0x000000000031A224 string=0x000000000031A228 ") "
 *   insn=0x000000000031A228 string=0x000000000031A22C "(@B"
 *   insn=0x000000000031A22C string=0x000000000031A230 "\t@B"
 *   insn=0x000000000031A230 string=0x000000000031A234 "@"
 *   insn=0x000000000031A234 string=0x000000000031A238 ")@"
 *   insn=0x000000000031A238 string=0x000000000031A23C "(,@"
 *   insn=0x000000000031A23C string=0x000000000031A240 "\t,@"
 *   insn=0x000000000031A240 string=0x000000000031A244 ","
 *   insn=0x000000000031A244 string=0x000000000031A248 "),"
 *   insn=0x000000000031A248 string=0x000000000031A24C "(@"
 *   insn=0x000000000031A24C string=0x000000000031A250 "\t@"
 *   insn=0x000000000031A250 string=0x000000000031A254 ""
 *   insn=0x000000000031A254 string=0x000000000031A258 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityControllerComponent::Swap(
        __int64 this,
        Caver::Proto::EntityControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  __int64 v5; // x9
  __int64 v6; // x9

  if ( a2 != (Caver::Proto::EntityControllerComponent *)this )
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
    LODWORD(v5) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v5;
    v6 = *(_QWORD *)(this + 36);
    *(_QWORD *)(this + 36) = *(_QWORD *)((char *)a2 + 36);
    *(_QWORD *)((char *)a2 + 36) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 44) = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 11) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

