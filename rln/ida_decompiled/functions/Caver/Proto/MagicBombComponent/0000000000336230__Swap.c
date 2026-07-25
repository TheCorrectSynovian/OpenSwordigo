/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336230
 * Mangled: _ZN5Caver5Proto18MagicBombComponent4SwapEPS1_
 * Demangled: Caver::Proto::MagicBombComponent::Swap(Caver::Proto::MagicBombComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x0000000000336234 string=0x0000000000336238 "(@"
 *   insn=0x0000000000336238 string=0x000000000033623C "\t@"
 *   insn=0x000000000033623C string=0x0000000000336240 ""
 *   insn=0x0000000000336240 string=0x0000000000336244 ")"
 *   insn=0x0000000000336244 string=0x0000000000336248 "("
 *   insn=0x0000000000336248 string=0x000000000033624C "\t"
 *   insn=0x000000000033624C string=0x0000000000336250 ""
 *   insn=0x0000000000336250 string=0x0000000000336254 ")"
 *   insn=0x0000000000336254 string=0x0000000000336258 "(@"
 *   insn=0x0000000000336258 string=0x000000000033625C "\t@"
 *   insn=0x000000000033625C string=0x0000000000336260 ""
 *   insn=0x0000000000336260 string=0x0000000000336264 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::Swap(__int64 this, Caver::Proto::MagicBombComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::MagicBombComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

