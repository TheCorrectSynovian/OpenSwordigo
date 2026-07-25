/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E08F0
 * Mangled: _ZN5Caver5Proto4Item4SwapEPS1_
 * Demangled: Caver::Proto::Item::Swap(Caver::Proto::Item*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 44
 *   insn=0x00000000002E08F4 string=0x00000000002E08F8 "("
 *   insn=0x00000000002E08F8 string=0x00000000002E08FC "\t"
 *   insn=0x00000000002E08FC string=0x00000000002E0900 ""
 *   insn=0x00000000002E0900 string=0x00000000002E0904 ")"
 *   insn=0x00000000002E0904 string=0x00000000002E0908 "(@"
 *   insn=0x00000000002E0908 string=0x00000000002E090C "\t@"
 *   insn=0x00000000002E090C string=0x00000000002E0910 ""
 *   insn=0x00000000002E0910 string=0x00000000002E0914 ")"
 *   insn=0x00000000002E0914 string=0x00000000002E0918 "("
 *   insn=0x00000000002E0918 string=0x00000000002E091C "\t"
 *   insn=0x00000000002E091C string=0x00000000002E0920 ""
 *   insn=0x00000000002E0920 string=0x00000000002E0924 ")"
 *   insn=0x00000000002E0924 string=0x00000000002E0928 "("
 *   insn=0x00000000002E0928 string=0x00000000002E092C "\t"
 *   insn=0x00000000002E092C string=0x00000000002E0930 ""
 *   insn=0x00000000002E0930 string=0x00000000002E0934 ")"
 *   insn=0x00000000002E0934 string=0x00000000002E0938 "("
 *   insn=0x00000000002E0938 string=0x00000000002E093C "\t"
 *   insn=0x00000000002E093C string=0x00000000002E0940 ""
 *   insn=0x00000000002E0940 string=0x00000000002E0944 ")"
 *   insn=0x00000000002E0944 string=0x00000000002E0948 "("
 *   insn=0x00000000002E0948 string=0x00000000002E094C "\t"
 *   insn=0x00000000002E094C string=0x00000000002E0950 ""
 *   insn=0x00000000002E0950 string=0x00000000002E0954 ")"
 *   insn=0x00000000002E0954 string=0x00000000002E0958 "(4@"
 *   insn=0x00000000002E0958 string=0x00000000002E095C "\t4@"
 *   insn=0x00000000002E095C string=0x00000000002E0960 "4"
 *   insn=0x00000000002E0960 string=0x00000000002E0964 ")4"
 *   insn=0x00000000002E0964 string=0x00000000002E0968 "(8@"
 *   insn=0x00000000002E0968 string=0x00000000002E096C "\t8@"
 *   insn=0x00000000002E096C string=0x00000000002E0970 "8"
 *   insn=0x00000000002E0970 string=0x00000000002E0974 ")8"
 *   insn=0x00000000002E0974 string=0x00000000002E0978 "(<@"
 *   insn=0x00000000002E0978 string=0x00000000002E097C "\t<@"
 *   insn=0x00000000002E097C string=0x00000000002E0980 "<"
 *   insn=0x00000000002E0980 string=0x00000000002E0984 ")<"
 *   insn=0x00000000002E0984 string=0x00000000002E0988 "(@@"
 *   insn=0x00000000002E0988 string=0x00000000002E098C "\t@@"
 *   insn=0x00000000002E098C string=0x00000000002E0990 "@"
 *   insn=0x00000000002E0990 string=0x00000000002E0994 ")@"
 *   insn=0x00000000002E0994 string=0x00000000002E0998 "(@"
 *   insn=0x00000000002E0998 string=0x00000000002E099C "\t@"
 *   insn=0x00000000002E099C string=0x00000000002E09A0 ""
 *   insn=0x00000000002E09A0 string=0x00000000002E09A4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Item::Swap(__int64 this, Caver::Proto::Item *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9

  if ( a2 != (Caver::Proto::Item *)this )
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
    v5 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v5;
    v6 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v6;
    LOBYTE(v6) = *(_BYTE *)(this + 48);
    *(_BYTE *)(this + 48) = *((_BYTE *)a2 + 48);
    *((_BYTE *)a2 + 48) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 52);
    *(_DWORD *)(this + 52) = *((_DWORD *)a2 + 13);
    *((_DWORD *)a2 + 13) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 14) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 60);
    *(_DWORD *)(this + 60) = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 15) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 64);
    *(_DWORD *)(this + 64) = *((_DWORD *)a2 + 16);
    *((_DWORD *)a2 + 16) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v6;
  }
  return this;
}

