/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303DE0
 * Mangled: _ZN5Caver5Proto14ModelComponent4SwapEPS1_
 * Demangled: Caver::Proto::ModelComponent::Swap(Caver::Proto::ModelComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 41
 *   insn=0x0000000000303DE0 string=0x0000000000303DE4 " "
 *   insn=0x0000000000303DE4 string=0x0000000000303DE8 "(@"
 *   insn=0x0000000000303DE8 string=0x0000000000303DEC "\t@"
 *   insn=0x0000000000303DEC string=0x0000000000303DF0 ""
 *   insn=0x0000000000303DF0 string=0x0000000000303DF4 ")"
 *   insn=0x0000000000303DF4 string=0x0000000000303DF8 "("
 *   insn=0x0000000000303DF8 string=0x0000000000303DFC "\t"
 *   insn=0x0000000000303DFC string=0x0000000000303E00 ""
 *   insn=0x0000000000303E00 string=0x0000000000303E04 ")"
 *   insn=0x0000000000303E04 string=0x0000000000303E08 "( @"
 *   insn=0x0000000000303E08 string=0x0000000000303E0C "\t @"
 *   insn=0x0000000000303E0C string=0x0000000000303E10 " "
 *   insn=0x0000000000303E10 string=0x0000000000303E14 ") "
 *   insn=0x0000000000303E14 string=0x0000000000303E18 "($@"
 *   insn=0x0000000000303E18 string=0x0000000000303E1C "\t$@"
 *   insn=0x0000000000303E1C string=0x0000000000303E20 "$"
 *   insn=0x0000000000303E20 string=0x0000000000303E24 ")$"
 *   insn=0x0000000000303E24 string=0x0000000000303E28 "((@"
 *   insn=0x0000000000303E28 string=0x0000000000303E2C "\t(@"
 *   insn=0x0000000000303E2C string=0x0000000000303E30 "("
 *   insn=0x0000000000303E30 string=0x0000000000303E34 ")("
 *   insn=0x0000000000303E34 string=0x0000000000303E38 "("
 *   insn=0x0000000000303E38 string=0x0000000000303E3C "\t"
 *   insn=0x0000000000303E3C string=0x0000000000303E40 ""
 *   insn=0x0000000000303E40 string=0x0000000000303E44 ")"
 *   insn=0x0000000000303E44 string=0x0000000000303E48 "("
 *   insn=0x0000000000303E48 string=0x0000000000303E4C "\t"
 *   insn=0x0000000000303E4C string=0x0000000000303E50 ""
 *   insn=0x0000000000303E50 string=0x0000000000303E54 ")"
 *   insn=0x0000000000303E54 string=0x0000000000303E58 "( @"
 *   insn=0x0000000000303E58 string=0x0000000000303E5C "\t @"
 *   insn=0x0000000000303E5C string=0x0000000000303E60 " "
 *   insn=0x0000000000303E60 string=0x0000000000303E64 ") "
 *   insn=0x0000000000303E64 string=0x0000000000303E68 "(H@"
 *   insn=0x0000000000303E68 string=0x0000000000303E6C "\tH@"
 *   insn=0x0000000000303E6C string=0x0000000000303E70 "H"
 *   insn=0x0000000000303E70 string=0x0000000000303E74 ")H"
 *   insn=0x0000000000303E74 string=0x0000000000303E78 "(@"
 *   insn=0x0000000000303E78 string=0x0000000000303E7C "\t@"
 *   insn=0x0000000000303E7C string=0x0000000000303E80 ""
 *   insn=0x0000000000303E80 string=0x0000000000303E84 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::Swap(__int64 this, Caver::Proto::ModelComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::ModelComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v3;
    v4 = *(_QWORD *)(this + 48);
    *(_QWORD *)(this + 48) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v4;
    LOBYTE(v4) = *(_BYTE *)(this + 56);
    *(_BYTE *)(this + 56) = *((_BYTE *)a2 + 56);
    *((_BYTE *)a2 + 56) = v4;
    v5 = *(_QWORD *)(this + 64);
    *(_QWORD *)(this + 64) = *((_QWORD *)a2 + 8);
    *((_QWORD *)a2 + 8) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 72);
    *(_DWORD *)(this + 72) = *((_DWORD *)a2 + 18);
    *((_DWORD *)a2 + 18) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

