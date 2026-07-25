/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333CB8
 * Mangled: _ZN5Caver5Proto23MagicExplosionComponent4SwapEPS1_
 * Demangled: Caver::Proto::MagicExplosionComponent::Swap(Caver::Proto::MagicExplosionComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000333CB8 string=0x0000000000333CBC " "
 *   insn=0x0000000000333CBC string=0x0000000000333CC0 "("
 *   insn=0x0000000000333CC0 string=0x0000000000333CC4 "\t"
 *   insn=0x0000000000333CC4 string=0x0000000000333CC8 ""
 *   insn=0x0000000000333CC8 string=0x0000000000333CCC ")"
 *   insn=0x0000000000333CCC string=0x0000000000333CD0 "(@"
 *   insn=0x0000000000333CD0 string=0x0000000000333CD4 "\t@"
 *   insn=0x0000000000333CD4 string=0x0000000000333CD8 ""
 *   insn=0x0000000000333CD8 string=0x0000000000333CDC ")"
 *   insn=0x0000000000333CDC string=0x0000000000333CE0 "("
 *   insn=0x0000000000333CE0 string=0x0000000000333CE4 "\t"
 *   insn=0x0000000000333CE4 string=0x0000000000333CE8 ""
 *   insn=0x0000000000333CE8 string=0x0000000000333CEC ")"
 *   insn=0x0000000000333CEC string=0x0000000000333CF0 "("
 *   insn=0x0000000000333CF0 string=0x0000000000333CF4 "\t"
 *   insn=0x0000000000333CF4 string=0x0000000000333CF8 ""
 *   insn=0x0000000000333CF8 string=0x0000000000333CFC ")"
 *   insn=0x0000000000333CFC string=0x0000000000333D00 "($@"
 *   insn=0x0000000000333D00 string=0x0000000000333D04 "\t$@"
 *   insn=0x0000000000333D04 string=0x0000000000333D08 "$"
 *   insn=0x0000000000333D08 string=0x0000000000333D0C ")$"
 *   insn=0x0000000000333D0C string=0x0000000000333D10 "(@"
 *   insn=0x0000000000333D10 string=0x0000000000333D14 "\t@"
 *   insn=0x0000000000333D14 string=0x0000000000333D18 ""
 *   insn=0x0000000000333D18 string=0x0000000000333D1C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicExplosionComponent::Swap(__int64 this, Caver::Proto::MagicExplosionComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::MagicExplosionComponent *)this )
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
    v4 = *(_QWORD *)(this + 28);
    *(_QWORD *)(this + 28) = *(_QWORD *)((char *)a2 + 28);
    *(_QWORD *)((char *)a2 + 28) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

