/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330000
 * Mangled: _ZN5Caver5Proto31ItemDropComponent_ItemDropEntry4SwapEPS1_
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::Swap(Caver::Proto::ItemDropComponent_ItemDropEntry*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000330000 string=0x0000000000330004 " "
 *   insn=0x0000000000330004 string=0x0000000000330008 "(@"
 *   insn=0x0000000000330008 string=0x000000000033000C "\t@"
 *   insn=0x000000000033000C string=0x0000000000330010 ""
 *   insn=0x0000000000330010 string=0x0000000000330014 ")"
 *   insn=0x0000000000330014 string=0x0000000000330018 "("
 *   insn=0x0000000000330018 string=0x000000000033001C "\t"
 *   insn=0x000000000033001C string=0x0000000000330020 ""
 *   insn=0x0000000000330020 string=0x0000000000330024 ")"
 *   insn=0x0000000000330024 string=0x0000000000330028 "("
 *   insn=0x0000000000330028 string=0x000000000033002C "\t"
 *   insn=0x000000000033002C string=0x0000000000330030 ""
 *   insn=0x0000000000330030 string=0x0000000000330034 ")"
 *   insn=0x0000000000330034 string=0x0000000000330038 "((@"
 *   insn=0x0000000000330038 string=0x000000000033003C "\t(@"
 *   insn=0x000000000033003C string=0x0000000000330040 "("
 *   insn=0x0000000000330040 string=0x0000000000330044 ")("
 *   insn=0x0000000000330044 string=0x0000000000330048 "(,@"
 *   insn=0x0000000000330048 string=0x000000000033004C "\t,@"
 *   insn=0x000000000033004C string=0x0000000000330050 ","
 *   insn=0x0000000000330050 string=0x0000000000330054 "),"
 *   insn=0x0000000000330054 string=0x0000000000330058 "(@"
 *   insn=0x0000000000330058 string=0x000000000033005C "\t@"
 *   insn=0x000000000033005C string=0x0000000000330060 ""
 *   insn=0x0000000000330060 string=0x0000000000330064 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ItemDropComponent_ItemDropEntry::Swap(
        __int64 this,
        Caver::Proto::ItemDropComponent_ItemDropEntry *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::ItemDropComponent_ItemDropEntry *)this )
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
    LODWORD(v4) = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 44) = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 11) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

