/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328D3C
 * Mangled: _ZN5Caver5Proto34BouncingMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::Swap(Caver::Proto::BouncingMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000328D3C string=0x0000000000328D40 " "
 *   insn=0x0000000000328D40 string=0x0000000000328D44 "("
 *   insn=0x0000000000328D44 string=0x0000000000328D48 "\t"
 *   insn=0x0000000000328D48 string=0x0000000000328D4C ""
 *   insn=0x0000000000328D4C string=0x0000000000328D50 ")"
 *   insn=0x0000000000328D50 string=0x0000000000328D54 "(@"
 *   insn=0x0000000000328D54 string=0x0000000000328D58 "\t@"
 *   insn=0x0000000000328D58 string=0x0000000000328D5C ""
 *   insn=0x0000000000328D5C string=0x0000000000328D60 ")"
 *   insn=0x0000000000328D60 string=0x0000000000328D64 "("
 *   insn=0x0000000000328D64 string=0x0000000000328D68 "\t"
 *   insn=0x0000000000328D68 string=0x0000000000328D6C ""
 *   insn=0x0000000000328D6C string=0x0000000000328D70 ")"
 *   insn=0x0000000000328D70 string=0x0000000000328D74 "(@"
 *   insn=0x0000000000328D74 string=0x0000000000328D78 "\t@"
 *   insn=0x0000000000328D78 string=0x0000000000328D7C ""
 *   insn=0x0000000000328D7C string=0x0000000000328D80 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BouncingMonsterControllerComponent::Swap(
        __int64 this,
        Caver::Proto::BouncingMonsterControllerComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::BouncingMonsterControllerComponent *)this )
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
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

