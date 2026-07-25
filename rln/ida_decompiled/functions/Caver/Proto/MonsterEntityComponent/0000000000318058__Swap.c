/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318058
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponent4SwapEPS1_
 * Demangled: Caver::Proto::MonsterEntityComponent::Swap(Caver::Proto::MonsterEntityComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000318058 string=0x000000000031805C " "
 *   insn=0x000000000031805C string=0x0000000000318060 "(@"
 *   insn=0x0000000000318060 string=0x0000000000318064 "\t@"
 *   insn=0x0000000000318064 string=0x0000000000318068 ""
 *   insn=0x0000000000318068 string=0x000000000031806C ")"
 *   insn=0x000000000031806C string=0x0000000000318070 "("
 *   insn=0x0000000000318070 string=0x0000000000318074 "\t"
 *   insn=0x0000000000318074 string=0x0000000000318078 ""
 *   insn=0x0000000000318078 string=0x000000000031807C ")"
 *   insn=0x000000000031807C string=0x0000000000318080 "("
 *   insn=0x0000000000318080 string=0x0000000000318084 "\t"
 *   insn=0x0000000000318084 string=0x0000000000318088 ""
 *   insn=0x0000000000318088 string=0x000000000031808C ")"
 *   insn=0x000000000031808C string=0x0000000000318090 "("
 *   insn=0x0000000000318090 string=0x0000000000318094 "\t"
 *   insn=0x0000000000318094 string=0x0000000000318098 ""
 *   insn=0x0000000000318098 string=0x000000000031809C ")"
 *   insn=0x000000000031809C string=0x00000000003180A0 "($@"
 *   insn=0x00000000003180A0 string=0x00000000003180A4 "\t$@"
 *   insn=0x00000000003180A4 string=0x00000000003180A8 "$"
 *   insn=0x00000000003180A8 string=0x00000000003180AC ")$"
 *   insn=0x00000000003180AC string=0x00000000003180B0 "(@"
 *   insn=0x00000000003180B0 string=0x00000000003180B4 "\t@"
 *   insn=0x00000000003180B4 string=0x00000000003180B8 ""
 *   insn=0x00000000003180B8 string=0x00000000003180BC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::Swap(__int64 this, Caver::Proto::MonsterEntityComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::MonsterEntityComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 32);
    *(_BYTE *)(this + 32) = *((_BYTE *)a2 + 32);
    *((_BYTE *)a2 + 32) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 33);
    *(_BYTE *)(this + 33) = *((_BYTE *)a2 + 33);
    *((_BYTE *)a2 + 33) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v3;
  }
  return this;
}

