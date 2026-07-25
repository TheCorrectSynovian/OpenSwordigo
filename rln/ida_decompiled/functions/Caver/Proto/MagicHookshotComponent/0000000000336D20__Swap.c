/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336D20
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponent4SwapEPS1_
 * Demangled: Caver::Proto::MagicHookshotComponent::Swap(Caver::Proto::MagicHookshotComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x0000000000336D24 string=0x0000000000336D28 "("
 *   insn=0x0000000000336D28 string=0x0000000000336D2C "\t"
 *   insn=0x0000000000336D2C string=0x0000000000336D30 ""
 *   insn=0x0000000000336D30 string=0x0000000000336D34 ")"
 *   insn=0x0000000000336D34 string=0x0000000000336D38 "("
 *   insn=0x0000000000336D38 string=0x0000000000336D3C "\t"
 *   insn=0x0000000000336D3C string=0x0000000000336D40 ""
 *   insn=0x0000000000336D40 string=0x0000000000336D44 ")"
 *   insn=0x0000000000336D44 string=0x0000000000336D48 "("
 *   insn=0x0000000000336D48 string=0x0000000000336D4C "\t"
 *   insn=0x0000000000336D4C string=0x0000000000336D50 ""
 *   insn=0x0000000000336D50 string=0x0000000000336D54 ")"
 *   insn=0x0000000000336D54 string=0x0000000000336D58 "("
 *   insn=0x0000000000336D58 string=0x0000000000336D5C "\t"
 *   insn=0x0000000000336D5C string=0x0000000000336D60 ""
 *   insn=0x0000000000336D60 string=0x0000000000336D64 ")"
 *   insn=0x0000000000336D64 string=0x0000000000336D68 "("
 *   insn=0x0000000000336D68 string=0x0000000000336D6C "\t"
 *   insn=0x0000000000336D6C string=0x0000000000336D70 ""
 *   insn=0x0000000000336D70 string=0x0000000000336D74 ")"
 *   insn=0x0000000000336D74 string=0x0000000000336D78 "((@"
 *   insn=0x0000000000336D78 string=0x0000000000336D7C "\t(@"
 *   insn=0x0000000000336D7C string=0x0000000000336D80 "("
 *   insn=0x0000000000336D80 string=0x0000000000336D84 ")("
 *   insn=0x0000000000336D84 string=0x0000000000336D88 "(@"
 *   insn=0x0000000000336D88 string=0x0000000000336D8C "\t@"
 *   insn=0x0000000000336D8C string=0x0000000000336D90 ""
 *   insn=0x0000000000336D90 string=0x0000000000336D94 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::Swap(__int64 this, Caver::Proto::MagicHookshotComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  __int64 v6; // x9

  if ( a2 != (Caver::Proto::MagicHookshotComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

