/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BA8EC
 * Mangled: _ZNK5Caver4Item21SaveToProtobufMessageEPNS_5Proto4ItemE
 * Demangled: Caver::Item::SaveToProtobufMessage(Caver::Proto::Item *)
 *
 * Callers: 1
 *   0x00000000001FB340  Caver::Item::SaveToProtobufMessage(Caver::Proto::Item *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 71
 *   insn=0x00000000003BA8FC string=0x00000000003BA900 "i"
 *   insn=0x00000000003BA904 string=0x00000000003BA908 "hB@"
 *   insn=0x00000000003BA908 string=0x00000000003BA90C "`\n@"
 *   insn=0x00000000003BA90C string=0x00000000003BA910 ")ED"
 *   insn=0x00000000003BA914 string=0x00000000003BA918 ""
 *   insn=0x00000000003BA918 string=0x00000000003BA91C "hB"
 *   insn=0x00000000003BA928 string=0x00000000003BA92C "-"
 *   insn=0x00000000003BA92C string=0x00000000003BA930 "H"
 *   insn=0x00000000003BA92C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BA930 string=0x00000000003BA934 ""
 *   insn=0x00000000003BA934 string=0x00000000003BA938 "a"
 *   insn=0x00000000003BA938 string=0x00000000003BA93C ""
 *   insn=0x00000000003BA93C string=0x00000000003BA940 "`\n"
 *   insn=0x00000000003BA944 string=0x00000000003BA948 "X"
 *   insn=0x00000000003BA948 string=0x00000000003BA94C "I"
 *   insn=0x00000000003BA94C string=0x00000000003BA950 "hB@"
 *   insn=0x00000000003BA950 string=0x00000000003BA954 "`"
 *   insn=0x00000000003BA954 string=0x00000000003BA958 ")"
 *   insn=0x00000000003BA95C string=0x00000000003BA960 ""
 *   insn=0x00000000003BA960 string=0x00000000003BA964 "hB"
 *   insn=0x00000000003BA970 string=0x00000000003BA974 ""
 *   insn=0x00000000003BA974 string=0x00000000003BA978 "H"
 *   insn=0x00000000003BA978 string=0x00000000003BA97C ""
 *   insn=0x00000000003BA97C string=0x00000000003BA980 "a"
 *   insn=0x00000000003BA980 string=0x00000000003BA984 ""
 *   insn=0x00000000003BA984 string=0x00000000003BA988 "`"
 *   insn=0x00000000003BA98C string=0x00000000003BA990 "F"
 *   insn=0x00000000003BA990 string=0x00000000003BA994 "i"
 *   insn=0x00000000003BA994 string=0x00000000003BA998 "hB@"
 *   insn=0x00000000003BA998 string=0x00000000003BA99C "`"
 *   insn=0x00000000003BA99C string=0x00000000003BA9A0 ")"
 *   insn=0x00000000003BA9A4 string=0x00000000003BA9A8 ""
 *   insn=0x00000000003BA9A8 string=0x00000000003BA9AC "hB"
 *   insn=0x00000000003BA9B8 string=0x00000000003BA9BC "\t"
 *   insn=0x00000000003BA9BC string=0x00000000003BA9C0 "H"
 *   insn=0x00000000003BA9C0 string=0x00000000003BA9C4 ""
 *   insn=0x00000000003BA9C4 string=0x00000000003BA9C8 "a"
 *   insn=0x00000000003BA9C8 string=0x00000000003BA9CC ""
 *   insn=0x00000000003BA9CC string=0x00000000003BA9D0 "`"
 *   insn=0x00000000003BA9D4 string=0x00000000003BA9D8 "4"
 *   insn=0x00000000003BA9D8 string=0x00000000003BA9DC "i"
 *   insn=0x00000000003BA9DC string=0x00000000003BA9E0 "hB@"
 *   insn=0x00000000003BA9E0 string=0x00000000003BA9E4 "`"
 *   insn=0x00000000003BA9E4 string=0x00000000003BA9E8 ")\tG"
 *   insn=0x00000000003BA9EC string=0x00000000003BA9F0 ""
 *   insn=0x00000000003BA9F0 string=0x00000000003BA9F4 "hB"
 *   insn=0x00000000003BAA04 string=0x00000000003BAA08 "H"
 *   insn=0x00000000003BAA08 string=0x00000000003BAA0C ""
 *   insn=0x00000000003BAA0C string=0x00000000003BAA10 "a"
 *   insn=0x00000000003BAA10 string=0x00000000003BAA14 ""
 *   insn=0x00000000003BAA14 string=0x00000000003BAA18 "`"
 *   insn=0x00000000003BAA1C string=0x00000000003BAA20 """
 *   insn=0x00000000003BAA20 string=0x00000000003BAA24 "iB@"
 *   insn=0x00000000003BAA28 string=0x00000000003BAA2C "("
 *   insn=0x00000000003BAA2C string=0x00000000003BAA30 "hB"
 *   insn=0x00000000003BAA30 string=0x00000000003BAA34 "j"
 *   insn=0x00000000003BAA38 string=0x00000000003BAA3C "_"
 *   insn=0x00000000003BAA40 string=0x00000000003BAA44 "("
 *   insn=0x00000000003BAA44 string=0x00000000003BAA48 "J"
 *   insn=0x00000000003BAA48 string=0x00000000003BAA4C "("
 *   insn=0x00000000003BAA4C string=0x00000000003BAA50 "hB"
 *   insn=0x00000000003BAA50 string=0x00000000003BAA54 "j"
 *   insn=0x00000000003BAA58 string=0x00000000003BAA5C "\t"
 *   insn=0x00000000003BAA5C string=0x00000000003BAA60 "j"
 *   insn=0x00000000003BAA68 string=0x00000000003BAA6C "\t("
 *   insn=0x00000000003BAA6C string=0x00000000003BAA70 "\t"
 *   insn=0x00000000003BAA70 string=0x00000000003BAA74 "iB"
 *   insn=0x00000000003BAA74 string=0x00000000003BAA78 "j6"
 *   insn=0x00000000003BAA80 string=0x00000000003BAA84 ")"
 *   insn=0x00000000003BAA84 string=0x00000000003BAA88 "iB"
 *   insn=0x00000000003BAA88 string=0x00000000003BAA8C "h:"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Item::SaveToProtobufMessage(Caver::Item *this, Caver::Proto::Item *a2)
{
  __int64 *v4; // x0
  __int64 *v5; // x0
  __int64 *v6; // x0
  __int64 *v7; // x0
  __int64 result; // x0
  int v9; // w9
  char v10; // w10
  int v11; // w8
  int v12; // w10
  int v13; // w9
  int v14; // w10
  int v15; // w8

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 16) |= 2u;
  if ( v4 == &Caver::Proto::Item::_default_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  sub_56A6A8(v4);
  v5 = (__int64 *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 16) |= 4u;
  if ( v5 == &Caver::Proto::Item::_default_title_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 3) = v5;
  }
  sub_56A6A8(v5);
  v6 = (__int64 *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 16) |= 8u;
  if ( v6 == &Caver::Proto::Item::_default_short_description_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 4) = v6;
  }
  sub_56A6A8(v6);
  v7 = (__int64 *)*((_QWORD *)a2 + 5);
  *((_DWORD *)a2 + 16) |= 0x10u;
  if ( v7 == &Caver::Proto::Item::_default_description_ )
  {
    v7 = (__int64 *)operator new(8u);
    *v7 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 5) = v7;
  }
  result = sub_56A6A8(v7);
  v9 = *((_DWORD *)a2 + 16);
  v10 = *((_BYTE *)this + 40);
  v11 = v9 | 0x20;
  *((_DWORD *)a2 + 16) = v9 | 0x20;
  *((_BYTE *)a2 + 48) = v10;
  v12 = *(_DWORD *)this;
  if ( *(_DWORD *)this <= 4u )
  {
    v11 = v9 | 0x21;
    *((_DWORD *)a2 + 16) = v9 | 0x21;
    *((_DWORD *)a2 + 3) = v12 + 1;
  }
  v13 = v11 | 0x100;
  *((_DWORD *)a2 + 15) = *((_DWORD *)this + 11);
  *((_DWORD *)a2 + 16) = v11 | 0x100;
  v14 = *((_DWORD *)this + 12);
  if ( v14 )
  {
    v13 = v11 | 0x140;
    *((_DWORD *)a2 + 16) = v11 | 0x140;
    *((_DWORD *)a2 + 13) = v14;
  }
  v15 = *((_DWORD *)this + 13);
  if ( v15 )
  {
    *((_DWORD *)a2 + 16) = v13 | 0x80;
    *((_DWORD *)a2 + 14) = v15;
  }
  return result;
}

