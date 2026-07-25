/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324C68
 * Mangled: _ZN5Caver5Proto34ChargingMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::Swap(Caver::Proto::ChargingMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000324C6C string=0x0000000000324C70 "("
 *   insn=0x0000000000324C70 string=0x0000000000324C74 "\t"
 *   insn=0x0000000000324C74 string=0x0000000000324C78 ""
 *   insn=0x0000000000324C78 string=0x0000000000324C7C ")"
 *   insn=0x0000000000324C7C string=0x0000000000324C80 "("
 *   insn=0x0000000000324C80 string=0x0000000000324C84 "\t"
 *   insn=0x0000000000324C84 string=0x0000000000324C88 ""
 *   insn=0x0000000000324C88 string=0x0000000000324C8C ")"
 *   insn=0x0000000000324C8C string=0x0000000000324C90 "(@A"
 *   insn=0x0000000000324C90 string=0x0000000000324C94 "\t@A"
 *   insn=0x0000000000324C94 string=0x0000000000324C98 "@"
 *   insn=0x0000000000324C98 string=0x0000000000324C9C ")@"
 *   insn=0x0000000000324C9C string=0x0000000000324CA0 "("
 *   insn=0x0000000000324CA0 string=0x0000000000324CA4 "\t"
 *   insn=0x0000000000324CA4 string=0x0000000000324CA8 ""
 *   insn=0x0000000000324CA8 string=0x0000000000324CAC ")"
 *   insn=0x0000000000324CAC string=0x0000000000324CB0 "(@"
 *   insn=0x0000000000324CB0 string=0x0000000000324CB4 "\t@"
 *   insn=0x0000000000324CB4 string=0x0000000000324CB8 ""
 *   insn=0x0000000000324CB8 string=0x0000000000324CBC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ChargingMonsterControllerComponent::Swap(
        __int64 this,
        Caver::Proto::ChargingMonsterControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::ChargingMonsterControllerComponent *)this )
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
    v5 = *(_QWORD *)(this + 28);
    *(_QWORD *)(this + 28) = *(_QWORD *)((char *)a2 + 28);
    *(_QWORD *)((char *)a2 + 28) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

