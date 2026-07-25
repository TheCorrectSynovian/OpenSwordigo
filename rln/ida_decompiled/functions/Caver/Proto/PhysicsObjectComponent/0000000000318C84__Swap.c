/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318C84
 * Mangled: _ZN5Caver5Proto22PhysicsObjectComponent4SwapEPS1_
 * Demangled: Caver::Proto::PhysicsObjectComponent::Swap(Caver::Proto::PhysicsObjectComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 36
 *   insn=0x0000000000318C88 string=0x0000000000318C8C "(0@9\t0@90"
 *   insn=0x0000000000318C8C string=0x0000000000318C90 "\t0@90"
 *   insn=0x0000000000318C90 string=0x0000000000318C94 "0"
 *   insn=0x0000000000318C94 string=0x0000000000318C98 ")0"
 *   insn=0x0000000000318C98 string=0x0000000000318C9C "(@"
 *   insn=0x0000000000318C9C string=0x0000000000318CA0 "\t@"
 *   insn=0x0000000000318CA0 string=0x0000000000318CA4 ""
 *   insn=0x0000000000318CA4 string=0x0000000000318CA8 ")"
 *   insn=0x0000000000318CA8 string=0x0000000000318CAC "("
 *   insn=0x0000000000318CAC string=0x0000000000318CB0 "\t"
 *   insn=0x0000000000318CB0 string=0x0000000000318CB4 ""
 *   insn=0x0000000000318CB4 string=0x0000000000318CB8 ")"
 *   insn=0x0000000000318CB8 string=0x0000000000318CBC "("
 *   insn=0x0000000000318CBC string=0x0000000000318CC0 "\t"
 *   insn=0x0000000000318CC0 string=0x0000000000318CC4 ""
 *   insn=0x0000000000318CC4 string=0x0000000000318CC8 ")"
 *   insn=0x0000000000318CC8 string=0x0000000000318CCC "( @"
 *   insn=0x0000000000318CCC string=0x0000000000318CD0 "\t @"
 *   insn=0x0000000000318CD0 string=0x0000000000318CD4 " "
 *   insn=0x0000000000318CD4 string=0x0000000000318CD8 ") "
 *   insn=0x0000000000318CD8 string=0x0000000000318CDC "($@"
 *   insn=0x0000000000318CDC string=0x0000000000318CE0 "\t$@"
 *   insn=0x0000000000318CE0 string=0x0000000000318CE4 "$"
 *   insn=0x0000000000318CE4 string=0x0000000000318CE8 ")$"
 *   insn=0x0000000000318CE8 string=0x0000000000318CEC "("
 *   insn=0x0000000000318CEC string=0x0000000000318CF0 "\t"
 *   insn=0x0000000000318CF0 string=0x0000000000318CF4 ""
 *   insn=0x0000000000318CF4 string=0x0000000000318CF8 ")"
 *   insn=0x0000000000318CF8 string=0x0000000000318CFC "("
 *   insn=0x0000000000318CFC string=0x0000000000318D00 "\t"
 *   insn=0x0000000000318D00 string=0x0000000000318D04 ""
 *   insn=0x0000000000318D04 string=0x0000000000318D08 ")"
 *   insn=0x0000000000318D08 string=0x0000000000318D0C "(@"
 *   insn=0x0000000000318D0C string=0x0000000000318D10 "\t@"
 *   insn=0x0000000000318D10 string=0x0000000000318D14 ""
 *   insn=0x0000000000318D14 string=0x0000000000318D18 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::Swap(__int64 this, Caver::Proto::PhysicsObjectComponent *a2)
{
  char v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::PhysicsObjectComponent *)this )
  {
    v2 = *(_BYTE *)(this + 12);
    *(_BYTE *)(this + 12) = *((_BYTE *)a2 + 12);
    *((_BYTE *)a2 + 12) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 28);
    *(_DWORD *)(this + 28) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 40);
    *(_BYTE *)(this + 40) = *((_BYTE *)a2 + 40);
    *((_BYTE *)a2 + 40) = v3;
    v4 = *(_QWORD *)(this + 44);
    *(_QWORD *)(this + 44) = *(_QWORD *)((char *)a2 + 44);
    *(_QWORD *)((char *)a2 + 44) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

