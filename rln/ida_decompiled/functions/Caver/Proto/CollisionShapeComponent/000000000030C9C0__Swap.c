/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030C9C0
 * Mangled: _ZN5Caver5Proto23CollisionShapeComponent4SwapEPS1_
 * Demangled: Caver::Proto::CollisionShapeComponent::Swap(Caver::Proto::CollisionShapeComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 57
 *   insn=0x000000000030C9C0 string=0x000000000030C9C4 " "
 *   insn=0x000000000030C9C4 string=0x000000000030C9C8 "(0@9\t0@90"
 *   insn=0x000000000030C9C8 string=0x000000000030C9CC "\t0@90"
 *   insn=0x000000000030C9CC string=0x000000000030C9D0 "0"
 *   insn=0x000000000030C9D0 string=0x000000000030C9D4 ")0"
 *   insn=0x000000000030C9D4 string=0x000000000030C9D8 "(4@9\t4@94"
 *   insn=0x000000000030C9D8 string=0x000000000030C9DC "\t4@94"
 *   insn=0x000000000030C9DC string=0x000000000030C9E0 "4"
 *   insn=0x000000000030C9E0 string=0x000000000030C9E4 ")4"
 *   insn=0x000000000030C9E4 string=0x000000000030C9E8 "(8@9\t8@98"
 *   insn=0x000000000030C9E8 string=0x000000000030C9EC "\t8@98"
 *   insn=0x000000000030C9EC string=0x000000000030C9F0 "8"
 *   insn=0x000000000030C9F0 string=0x000000000030C9F4 ")8"
 *   insn=0x000000000030C9F4 string=0x000000000030C9F8 "(<@9\t<@9<"
 *   insn=0x000000000030C9F8 string=0x000000000030C9FC "\t<@9<"
 *   insn=0x000000000030C9FC string=0x000000000030CA00 "<"
 *   insn=0x000000000030CA00 string=0x000000000030CA04 ")<"
 *   insn=0x000000000030CA04 string=0x000000000030CA08 "(@@9\t@@9@"
 *   insn=0x000000000030CA08 string=0x000000000030CA0C "\t@@9@"
 *   insn=0x000000000030CA0C string=0x000000000030CA10 "@"
 *   insn=0x000000000030CA10 string=0x000000000030CA14 ")@"
 *   insn=0x000000000030CA14 string=0x000000000030CA18 "("
 *   insn=0x000000000030CA18 string=0x000000000030CA1C "\t"
 *   insn=0x000000000030CA1C string=0x000000000030CA20 ""
 *   insn=0x000000000030CA20 string=0x000000000030CA24 ")"
 *   insn=0x000000000030CA24 string=0x000000000030CA28 "("
 *   insn=0x000000000030CA28 string=0x000000000030CA2C "\t"
 *   insn=0x000000000030CA2C string=0x000000000030CA30 ""
 *   insn=0x000000000030CA30 string=0x000000000030CA34 ")"
 *   insn=0x000000000030CA34 string=0x000000000030CA38 "( @"
 *   insn=0x000000000030CA38 string=0x000000000030CA3C "\t @"
 *   insn=0x000000000030CA3C string=0x000000000030CA40 " "
 *   insn=0x000000000030CA40 string=0x000000000030CA44 ") "
 *   insn=0x000000000030CA44 string=0x000000000030CA48 "("
 *   insn=0x000000000030CA48 string=0x000000000030CA4C "\t"
 *   insn=0x000000000030CA4C string=0x000000000030CA50 ""
 *   insn=0x000000000030CA50 string=0x000000000030CA54 ")"
 *   insn=0x000000000030CA54 string=0x000000000030CA58 "("
 *   insn=0x000000000030CA58 string=0x000000000030CA5C "\t"
 *   insn=0x000000000030CA5C string=0x000000000030CA60 ""
 *   insn=0x000000000030CA60 string=0x000000000030CA64 ")"
 *   insn=0x000000000030CA64 string=0x000000000030CA68 "("
 *   insn=0x000000000030CA68 string=0x000000000030CA6C "\t"
 *   insn=0x000000000030CA6C string=0x000000000030CA70 ""
 *   insn=0x000000000030CA70 string=0x000000000030CA74 ")"
 *   insn=0x000000000030CA74 string=0x000000000030CA78 "("
 *   insn=0x000000000030CA78 string=0x000000000030CA7C "\t"
 *   insn=0x000000000030CA7C string=0x000000000030CA80 ""
 *   insn=0x000000000030CA80 string=0x000000000030CA84 ")"
 *   insn=0x000000000030CA84 string=0x000000000030CA88 "(@@"
 *   insn=0x000000000030CA88 string=0x000000000030CA8C "\t@@"
 *   insn=0x000000000030CA8C string=0x000000000030CA90 "@"
 *   insn=0x000000000030CA90 string=0x000000000030CA94 ")@"
 *   insn=0x000000000030CA94 string=0x000000000030CA98 "(@"
 *   insn=0x000000000030CA98 string=0x000000000030CA9C "\t@"
 *   insn=0x000000000030CA9C string=0x000000000030CAA0 ""
 *   insn=0x000000000030CAA0 string=0x000000000030CAA4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::Swap(__int64 this, Caver::Proto::CollisionShapeComponent *a2)
{
  char v2; // w9
  char v3; // w9
  char v4; // w9
  char v5; // w9
  char v6; // w9
  int v7; // w9
  __int64 v8; // x9
  __int64 v9; // x9
  __int64 v10; // x9
  __int64 v11; // x9

  if ( a2 != (Caver::Proto::CollisionShapeComponent *)this )
  {
    v2 = *(_BYTE *)(this + 12);
    *(_BYTE *)(this + 12) = *((_BYTE *)a2 + 12);
    *((_BYTE *)a2 + 12) = v2;
    v3 = *(_BYTE *)(this + 13);
    *(_BYTE *)(this + 13) = *((_BYTE *)a2 + 13);
    *((_BYTE *)a2 + 13) = v3;
    v4 = *(_BYTE *)(this + 14);
    *(_BYTE *)(this + 14) = *((_BYTE *)a2 + 14);
    *((_BYTE *)a2 + 14) = v4;
    v5 = *(_BYTE *)(this + 15);
    *(_BYTE *)(this + 15) = *((_BYTE *)a2 + 15);
    *((_BYTE *)a2 + 15) = v5;
    v6 = *(_BYTE *)(this + 16);
    *(_BYTE *)(this + 16) = *((_BYTE *)a2 + 16);
    *((_BYTE *)a2 + 16) = v6;
    v7 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v7;
    v8 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v8;
    LODWORD(v8) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v8;
    LOBYTE(v8) = *(_BYTE *)(this + 36);
    *(_BYTE *)(this + 36) = *((_BYTE *)a2 + 36);
    *((_BYTE *)a2 + 36) = v8;
    v9 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v9;
    v10 = *(_QWORD *)(this + 48);
    *(_QWORD *)(this + 48) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v10;
    v11 = *(_QWORD *)(this + 56);
    *(_QWORD *)(this + 56) = *((_QWORD *)a2 + 7);
    *((_QWORD *)a2 + 7) = v11;
    LODWORD(v11) = *(_DWORD *)(this + 64);
    *(_DWORD *)(this + 64) = *((_DWORD *)a2 + 16);
    *((_DWORD *)a2 + 16) = v11;
    LODWORD(v11) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v11;
  }
  return this;
}

