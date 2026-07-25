/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000339000
 * Mangled: _ZN5Caver5Proto12MeshMaterial4SwapEPS1_
 * Demangled: Caver::Proto::MeshMaterial::Swap(Caver::Proto::MeshMaterial*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x0000000000339004 string=0x0000000000339008 "(@"
 *   insn=0x0000000000339008 string=0x000000000033900C "\t@"
 *   insn=0x000000000033900C string=0x0000000000339010 ""
 *   insn=0x0000000000339010 string=0x0000000000339014 ")"
 *   insn=0x0000000000339014 string=0x0000000000339018 "("
 *   insn=0x0000000000339018 string=0x000000000033901C "\t"
 *   insn=0x000000000033901C string=0x0000000000339020 ""
 *   insn=0x0000000000339020 string=0x0000000000339024 ")"
 *   insn=0x0000000000339024 string=0x0000000000339028 "("
 *   insn=0x0000000000339028 string=0x000000000033902C "\t"
 *   insn=0x000000000033902C string=0x0000000000339030 ""
 *   insn=0x0000000000339030 string=0x0000000000339034 ")"
 *   insn=0x0000000000339034 string=0x0000000000339038 "((@"
 *   insn=0x0000000000339038 string=0x000000000033903C "\t(@"
 *   insn=0x000000000033903C string=0x0000000000339040 "("
 *   insn=0x0000000000339040 string=0x0000000000339044 ")("
 *   insn=0x0000000000339044 string=0x0000000000339048 "("
 *   insn=0x0000000000339048 string=0x000000000033904C "\t"
 *   insn=0x000000000033904C string=0x0000000000339050 ""
 *   insn=0x0000000000339050 string=0x0000000000339054 ")"
 *   insn=0x0000000000339054 string=0x0000000000339058 "(8@"
 *   insn=0x0000000000339058 string=0x000000000033905C "\t8@"
 *   insn=0x000000000033905C string=0x0000000000339060 "8"
 *   insn=0x0000000000339060 string=0x0000000000339064 ")8"
 *   insn=0x0000000000339064 string=0x0000000000339068 "(@"
 *   insn=0x0000000000339068 string=0x000000000033906C "\t@"
 *   insn=0x000000000033906C string=0x0000000000339070 ""
 *   insn=0x0000000000339070 string=0x0000000000339074 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::Swap(__int64 this, Caver::Proto::MeshMaterial *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::MeshMaterial *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    v4 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v4;
    v5 = *(_QWORD *)(this + 48);
    *(_QWORD *)(this + 48) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 14) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

