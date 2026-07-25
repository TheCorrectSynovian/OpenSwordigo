/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003196C8
 * Mangled: _ZN5Caver5Proto24BreakableObjectComponent4SwapEPS1_
 * Demangled: Caver::Proto::BreakableObjectComponent::Swap(Caver::Proto::BreakableObjectComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000003196C8 string=0x00000000003196CC " "
 *   insn=0x00000000003196CC string=0x00000000003196D0 "(0@9\t0@90"
 *   insn=0x00000000003196D0 string=0x00000000003196D4 "\t0@90"
 *   insn=0x00000000003196D4 string=0x00000000003196D8 "0"
 *   insn=0x00000000003196D8 string=0x00000000003196DC ")0"
 *   insn=0x00000000003196DC string=0x00000000003196E0 "("
 *   insn=0x00000000003196E0 string=0x00000000003196E4 "\t"
 *   insn=0x00000000003196E4 string=0x00000000003196E8 ""
 *   insn=0x00000000003196E8 string=0x00000000003196EC ")"
 *   insn=0x00000000003196EC string=0x00000000003196F0 "("
 *   insn=0x00000000003196F0 string=0x00000000003196F4 "\t"
 *   insn=0x00000000003196F4 string=0x00000000003196F8 ""
 *   insn=0x00000000003196F8 string=0x00000000003196FC ")"
 *   insn=0x00000000003196FC string=0x0000000000319700 "("
 *   insn=0x0000000000319700 string=0x0000000000319704 "\t"
 *   insn=0x0000000000319704 string=0x0000000000319708 ""
 *   insn=0x0000000000319708 string=0x000000000031970C ")"
 *   insn=0x000000000031970C string=0x0000000000319710 "( @"
 *   insn=0x0000000000319710 string=0x0000000000319714 "\t @"
 *   insn=0x0000000000319714 string=0x0000000000319718 " "
 *   insn=0x0000000000319718 string=0x000000000031971C ") "
 *   insn=0x000000000031971C string=0x0000000000319720 "(@"
 *   insn=0x0000000000319720 string=0x0000000000319724 "\t@"
 *   insn=0x0000000000319724 string=0x0000000000319728 ""
 *   insn=0x0000000000319728 string=0x000000000031972C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BreakableObjectComponent::Swap(
        __int64 this,
        Caver::Proto::BreakableObjectComponent *a2)
{
  char v2; // w9
  int v3; // w9
  int v4; // w9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::BreakableObjectComponent *)this )
  {
    v2 = *(_BYTE *)(this + 12);
    *(_BYTE *)(this + 12) = *((_BYTE *)a2 + 12);
    *((_BYTE *)a2 + 12) = v2;
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
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

