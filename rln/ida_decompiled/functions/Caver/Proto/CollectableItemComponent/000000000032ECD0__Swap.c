/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032ECD0
 * Mangled: _ZN5Caver5Proto24CollectableItemComponent4SwapEPS1_
 * Demangled: Caver::Proto::CollectableItemComponent::Swap(Caver::Proto::CollectableItemComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 33
 *   insn=0x000000000032ECD0 string=0x000000000032ECD4 " "
 *   insn=0x000000000032ECD4 string=0x000000000032ECD8 "("
 *   insn=0x000000000032ECD8 string=0x000000000032ECDC "\t"
 *   insn=0x000000000032ECDC string=0x000000000032ECE0 ""
 *   insn=0x000000000032ECE0 string=0x000000000032ECE4 ")"
 *   insn=0x000000000032ECE4 string=0x000000000032ECE8 "("
 *   insn=0x000000000032ECE8 string=0x000000000032ECEC "\t"
 *   insn=0x000000000032ECEC string=0x000000000032ECF0 ""
 *   insn=0x000000000032ECF0 string=0x000000000032ECF4 ")"
 *   insn=0x000000000032ECF4 string=0x000000000032ECF8 "("
 *   insn=0x000000000032ECF8 string=0x000000000032ECFC "\t"
 *   insn=0x000000000032ECFC string=0x000000000032ED00 ""
 *   insn=0x000000000032ED00 string=0x000000000032ED04 ")"
 *   insn=0x000000000032ED04 string=0x000000000032ED08 "("
 *   insn=0x000000000032ED08 string=0x000000000032ED0C "\t"
 *   insn=0x000000000032ED0C string=0x000000000032ED10 ""
 *   insn=0x000000000032ED10 string=0x000000000032ED14 ")"
 *   insn=0x000000000032ED14 string=0x000000000032ED18 "("
 *   insn=0x000000000032ED18 string=0x000000000032ED1C "\t"
 *   insn=0x000000000032ED1C string=0x000000000032ED20 ""
 *   insn=0x000000000032ED20 string=0x000000000032ED24 ")"
 *   insn=0x000000000032ED24 string=0x000000000032ED28 "("
 *   insn=0x000000000032ED28 string=0x000000000032ED2C "\t"
 *   insn=0x000000000032ED2C string=0x000000000032ED30 ""
 *   insn=0x000000000032ED30 string=0x000000000032ED34 ")"
 *   insn=0x000000000032ED34 string=0x000000000032ED38 "(8@"
 *   insn=0x000000000032ED38 string=0x000000000032ED3C "\t8@"
 *   insn=0x000000000032ED3C string=0x000000000032ED40 "8"
 *   insn=0x000000000032ED40 string=0x000000000032ED44 ")8"
 *   insn=0x000000000032ED44 string=0x000000000032ED48 "(@"
 *   insn=0x000000000032ED48 string=0x000000000032ED4C "\t@"
 *   insn=0x000000000032ED4C string=0x000000000032ED50 ""
 *   insn=0x000000000032ED50 string=0x000000000032ED54 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollectableItemComponent::Swap(
        __int64 this,
        Caver::Proto::CollectableItemComponent *a2)
{
  int v2; // w9
  int v3; // w9
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9

  if ( a2 != (Caver::Proto::CollectableItemComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    v5 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v5;
    LOBYTE(v5) = *(_BYTE *)(this + 40);
    *(_BYTE *)(this + 40) = *((_BYTE *)a2 + 40);
    *((_BYTE *)a2 + 40) = v5;
    v6 = *(_QWORD *)(this + 48);
    *(_QWORD *)(this + 48) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 14) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

