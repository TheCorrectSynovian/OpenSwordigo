/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304974
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponent4SwapEPS1_
 * Demangled: Caver::Proto::KeyframeAnimationComponent::Swap(Caver::Proto::KeyframeAnimationComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000304974 string=0x0000000000304978 " "
 *   insn=0x0000000000304978 string=0x000000000030497C "("
 *   insn=0x000000000030497C string=0x0000000000304980 "\t"
 *   insn=0x0000000000304980 string=0x0000000000304984 ""
 *   insn=0x0000000000304984 string=0x0000000000304988 ")"
 *   insn=0x0000000000304988 string=0x000000000030498C "(@"
 *   insn=0x000000000030498C string=0x0000000000304990 "\t@"
 *   insn=0x0000000000304990 string=0x0000000000304994 ""
 *   insn=0x0000000000304994 string=0x0000000000304998 ")"
 *   insn=0x0000000000304998 string=0x000000000030499C "(`@9\t`@9`"
 *   insn=0x000000000030499C string=0x00000000003049A0 "\t`@9`"
 *   insn=0x00000000003049A0 string=0x00000000003049A4 "`"
 *   insn=0x00000000003049A4 string=0x00000000003049A8 ")`"
 *   insn=0x00000000003049A8 string=0x00000000003049AC "(d@9\td@9d"
 *   insn=0x00000000003049AC string=0x00000000003049B0 "\td@9d"
 *   insn=0x00000000003049B0 string=0x00000000003049B4 "d"
 *   insn=0x00000000003049B4 string=0x00000000003049B8 ")d"
 *   insn=0x00000000003049B8 string=0x00000000003049BC "("
 *   insn=0x00000000003049BC string=0x00000000003049C0 "\t"
 *   insn=0x00000000003049C0 string=0x00000000003049C4 ""
 *   insn=0x00000000003049C4 string=0x00000000003049C8 ")"
 *   insn=0x00000000003049C8 string=0x00000000003049CC "(@"
 *   insn=0x00000000003049CC string=0x00000000003049D0 "\t@"
 *   insn=0x00000000003049D0 string=0x00000000003049D4 ""
 *   insn=0x00000000003049D4 string=0x00000000003049D8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::Swap(
        __int64 this,
        Caver::Proto::KeyframeAnimationComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::KeyframeAnimationComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 24);
    *(_BYTE *)(this + 24) = *((_BYTE *)a2 + 24);
    *((_BYTE *)a2 + 24) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 25);
    *(_BYTE *)(this + 25) = *((_BYTE *)a2 + 25);
    *((_BYTE *)a2 + 25) = v3;
    v4 = *(_QWORD *)(this + 28);
    *(_QWORD *)(this + 28) = *(_QWORD *)((char *)a2 + 28);
    *(_QWORD *)((char *)a2 + 28) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

