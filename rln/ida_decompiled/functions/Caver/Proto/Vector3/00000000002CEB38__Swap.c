/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEB38
 * Mangled: _ZN5Caver5Proto7Vector34SwapEPS1_
 * Demangled: Caver::Proto::Vector3::Swap(Caver::Proto::Vector3*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000002CEB38 string=0x00000000002CEB3C " "
 *   insn=0x00000000002CEB3C string=0x00000000002CEB40 "("
 *   insn=0x00000000002CEB40 string=0x00000000002CEB44 "\t"
 *   insn=0x00000000002CEB44 string=0x00000000002CEB48 ""
 *   insn=0x00000000002CEB48 string=0x00000000002CEB4C ")"
 *   insn=0x00000000002CEB4C string=0x00000000002CEB50 "("
 *   insn=0x00000000002CEB50 string=0x00000000002CEB54 "\t"
 *   insn=0x00000000002CEB54 string=0x00000000002CEB58 ""
 *   insn=0x00000000002CEB58 string=0x00000000002CEB5C ")"
 *   insn=0x00000000002CEB5C string=0x00000000002CEB60 "("
 *   insn=0x00000000002CEB60 string=0x00000000002CEB64 "\t"
 *   insn=0x00000000002CEB64 string=0x00000000002CEB68 ""
 *   insn=0x00000000002CEB68 string=0x00000000002CEB6C ")"
 *   insn=0x00000000002CEB6C string=0x00000000002CEB70 "("
 *   insn=0x00000000002CEB70 string=0x00000000002CEB74 "\t"
 *   insn=0x00000000002CEB74 string=0x00000000002CEB78 ""
 *   insn=0x00000000002CEB78 string=0x00000000002CEB7C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::Swap(__int64 this, Caver::Proto::Vector3 *a2)
{
  int v2; // w9
  __int64 v3; // x9

  if ( a2 != (Caver::Proto::Vector3 *)this )
  {
    v2 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    v3 = *(_QWORD *)(this + 8);
    *(_QWORD *)(this + 8) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v3;
  }
  return this;
}

