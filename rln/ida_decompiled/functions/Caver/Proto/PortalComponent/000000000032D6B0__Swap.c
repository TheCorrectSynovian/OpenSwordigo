/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D6B0
 * Mangled: _ZN5Caver5Proto15PortalComponent4SwapEPS1_
 * Demangled: Caver::Proto::PortalComponent::Swap(Caver::Proto::PortalComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x000000000032D6B0 string=0x000000000032D6B4 " "
 *   insn=0x000000000032D6B4 string=0x000000000032D6B8 "("
 *   insn=0x000000000032D6B8 string=0x000000000032D6BC "\t"
 *   insn=0x000000000032D6BC string=0x000000000032D6C0 ""
 *   insn=0x000000000032D6C0 string=0x000000000032D6C4 ")"
 *   insn=0x000000000032D6C4 string=0x000000000032D6C8 "(@"
 *   insn=0x000000000032D6C8 string=0x000000000032D6CC "\t@"
 *   insn=0x000000000032D6CC string=0x000000000032D6D0 ""
 *   insn=0x000000000032D6D0 string=0x000000000032D6D4 ")"
 *   insn=0x000000000032D6D4 string=0x000000000032D6D8 "("
 *   insn=0x000000000032D6D8 string=0x000000000032D6DC "\t"
 *   insn=0x000000000032D6DC string=0x000000000032D6E0 ""
 *   insn=0x000000000032D6E0 string=0x000000000032D6E4 ")"
 *   insn=0x000000000032D6E4 string=0x000000000032D6E8 "("
 *   insn=0x000000000032D6E8 string=0x000000000032D6EC "\t"
 *   insn=0x000000000032D6EC string=0x000000000032D6F0 ""
 *   insn=0x000000000032D6F0 string=0x000000000032D6F4 ")"
 *   insn=0x000000000032D6F4 string=0x000000000032D6F8 "($@"
 *   insn=0x000000000032D6F8 string=0x000000000032D6FC "\t$@"
 *   insn=0x000000000032D6FC string=0x000000000032D700 "$"
 *   insn=0x000000000032D700 string=0x000000000032D704 ")$"
 *   insn=0x000000000032D704 string=0x000000000032D708 "(@"
 *   insn=0x000000000032D708 string=0x000000000032D70C "\t@"
 *   insn=0x000000000032D70C string=0x000000000032D710 ""
 *   insn=0x000000000032D710 string=0x000000000032D714 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalComponent::Swap(__int64 this, Caver::Proto::PortalComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::PortalComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    LOBYTE(v4) = *(_BYTE *)(this + 32);
    *(_BYTE *)(this + 32) = *((_BYTE *)a2 + 32);
    *((_BYTE *)a2 + 32) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

