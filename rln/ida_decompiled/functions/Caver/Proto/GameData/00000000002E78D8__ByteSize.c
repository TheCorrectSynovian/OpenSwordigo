/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E78D8
 * Mangled: _ZNK5Caver5Proto8GameData8ByteSizeEv
 * Demangled: Caver::Proto::GameData::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F64A0  Caver::Proto::GuideTarget::ByteSize(void)
 *   0x00000000001F9C90  Caver::Proto::Item::ByteSize(void)
 *   0x00000000001F9D10  Caver::Proto::Skill::ByteSize(void)
 *   0x00000000001FFCF0  Caver::Proto::EntityClass::ByteSize(void)
 *   0x00000000002012E0  Caver::Proto::Quest::ByteSize(void)
 *
 * Referenced strings: 42
 *   insn=0x00000000002E78E8 string=0x00000000002E78EC "u"
 *   insn=0x00000000002E78F0 string=0x00000000002E78F4 "K"
 *   insn=0x00000000002E78F4 string=0x00000000002E793C "hR@"
 *   insn=0x00000000002E78F8 string=0x00000000002E78FC "h\n@"
 *   insn=0x00000000002E7904 string=0x00000000001F9C90 "0'"
 *   insn=0x00000000002E790C string=0x00000000002E7910 "b"
 *   insn=0x00000000002E7918 string=0x00000000002E7924 "h"
 *   insn=0x00000000002E791C string=0x00000000002E7920 ",:"
 *   insn=0x00000000002E7920 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E792C string=0x00000000002E7930 "5"
 *   insn=0x00000000002E7934 string=0x00000000002E7938 "+"
 *   insn=0x00000000002E7944 string=0x00000000002E7948 "K"
 *   insn=0x00000000002E7948 string=0x00000000002E7990 "h"
 *   insn=0x00000000002E794C string=0x00000000002E7950 "h&@"
 *   insn=0x00000000002E7958 string=0x00000000001F9D10 "0'"
 *   insn=0x00000000002E7960 string=0x00000000002E7964 "b"
 *   insn=0x00000000002E796C string=0x00000000002E7978 "hR"
 *   insn=0x00000000002E7980 string=0x00000000002E7984 "5"
 *   insn=0x00000000002E7988 string=0x00000000002E798C "+"
 *   insn=0x00000000002E7998 string=0x00000000002E799C "K"
 *   insn=0x00000000002E799C string=0x00000000002E79E4 "h"
 *   insn=0x00000000002E79A0 string=0x00000000002E79A4 "hB@"
 *   insn=0x00000000002E79A8 string=0x00000000002E79AC "Mf"
 *   insn=0x00000000002E79B4 string=0x00000000002E79B8 "b"
 *   insn=0x00000000002E79C0 string=0x00000000002E79CC "h"
 *   insn=0x00000000002E79D4 string=0x00000000002E79D8 "5"
 *   insn=0x00000000002E79DC string=0x00000000002E79E0 "+"
 *   insn=0x00000000002E79EC string=0x00000000002E79F0 "K"
 *   insn=0x00000000002E79F0 string=0x00000000002E7A38 "h"
 *   insn=0x00000000002E79F4 string=0x00000000002E79F8 "h^@"
 *   insn=0x00000000002E7A08 string=0x00000000002E7A0C "b"
 *   insn=0x00000000002E7A14 string=0x00000000002E7A20 "h"
 *   insn=0x00000000002E7A28 string=0x00000000002E7A2C "5"
 *   insn=0x00000000002E7A30 string=0x00000000002E7A34 "+"
 *   insn=0x00000000002E7A40 string=0x00000000002E7A44 "K"
 *   insn=0x00000000002E7A44 string=0x00000000002E7A8C "t\n"
 *   insn=0x00000000002E7A48 string=0x00000000002E7A4C "hz@"
 *   insn=0x00000000002E7A54 string=0x00000000001F64A0 "0'"
 *   insn=0x00000000002E7A5C string=0x00000000002E7A60 "b"
 *   insn=0x00000000002E7A68 string=0x00000000002E7A74 "h"
 *   insn=0x00000000002E7A7C string=0x00000000002E7A80 "4"
 *   insn=0x00000000002E7A84 string=0x00000000002E7A88 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameData::ByteSize(Caver::Proto::GameData *this)
{
  int v2; // w21
  __int64 v3; // x22
  unsigned int v4; // w1
  unsigned int v5; // w20
  int v6; // w0
  int v7; // w8
  int v8; // w21
  __int64 v9; // x22
  unsigned int v10; // w1
  unsigned int v11; // w20
  int v12; // w0
  int v13; // w8
  int v14; // w21
  __int64 v15; // x22
  unsigned int v16; // w1
  unsigned int v17; // w20
  int v18; // w0
  int v19; // w8
  int v20; // w21
  __int64 v21; // x22
  unsigned int v22; // w1
  unsigned int v23; // w20
  int v24; // w0
  int v25; // w8
  unsigned int v26; // w20
  __int64 v27; // x22
  unsigned int v28; // w1
  unsigned int v29; // w21
  int v30; // w0

  v2 = *((_DWORD *)this + 6);
  if ( v2 >= 1 )
  {
    v3 = 0;
    do
    {
      v5 = Caver::Proto::Item::ByteSize(*(Caver::Proto::Item **)(*((_QWORD *)this + 2) + 8 * v3));
      if ( v5 >= 0x80 )
        v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v5,
               v4);
      else
        v6 = 1;
      ++v3;
      v2 += v5 + v6;
    }
    while ( v3 < *((int *)this + 6) );
  }
  v7 = *((_DWORD *)this + 20);
  v8 = v7 + v2;
  if ( v7 >= 1 )
  {
    v9 = 0;
    do
    {
      v11 = Caver::Proto::Skill::ByteSize(*(Caver::Proto::Skill **)(*((_QWORD *)this + 9) + 8 * v9));
      if ( v11 >= 0x80 )
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v11,
                v10);
      else
        v12 = 1;
      ++v9;
      v8 += v11 + v12;
    }
    while ( v9 < *((int *)this + 20) );
  }
  v13 = *((_DWORD *)this + 34);
  v14 = v13 + v8;
  if ( v13 >= 1 )
  {
    v15 = 0;
    do
    {
      v17 = Caver::Proto::Quest::ByteSize(*(Caver::Proto::Quest **)(*((_QWORD *)this + 16) + 8 * v15));
      if ( v17 >= 0x80 )
        v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v17,
                v16);
      else
        v18 = 1;
      ++v15;
      v14 += v17 + v18;
    }
    while ( v15 < *((int *)this + 34) );
  }
  v19 = *((_DWORD *)this + 48);
  v20 = v19 + v14;
  if ( v19 >= 1 )
  {
    v21 = 0;
    do
    {
      v23 = Caver::Proto::EntityClass::ByteSize(*(Caver::Proto::EntityClass **)(*((_QWORD *)this + 23) + 8 * v21));
      if ( v23 >= 0x80 )
        v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v23,
                v22);
      else
        v24 = 1;
      ++v21;
      v20 += v23 + v24;
    }
    while ( v21 < *((int *)this + 48) );
  }
  v25 = *((_DWORD *)this + 62);
  v26 = v25 + v20;
  if ( v25 >= 1 )
  {
    v27 = 0;
    do
    {
      v29 = Caver::Proto::GuideTarget::ByteSize(*(Caver::Proto::GuideTarget **)(*((_QWORD *)this + 30) + 8 * v27));
      if ( v29 >= 0x80 )
        v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v29,
                v28);
      else
        v30 = 1;
      ++v27;
      v26 += v29 + v30;
    }
    while ( v27 < *((int *)this + 62) );
  }
  *((_DWORD *)this + 2) = v26;
  return v26;
}

