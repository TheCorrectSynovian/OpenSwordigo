/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5E7C
 * Mangled: _ZNK5Caver5Proto7Program8ByteSizeEv
 * Demangled: Caver::Proto::Program::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 26
 *   insn=0x00000000002D5E8C string=0x00000000002D5E90 "i"
 *   insn=0x00000000002D5E98 string=0x00000000002D5EB0 "t\n@"
 *   insn=0x00000000002D5EA0 string=0x00000000002D5EA4 "#"
 *   insn=0x00000000002D5EA0 string=0x00000000002D5EF0 "u"
 *   insn=0x00000000002D5EA4 string=0x00000000002D5F30 "\t"
 *   insn=0x00000000002D5EA8 string=0x00000000002D5EAC "1"
 *   insn=0x00000000002D5EAC string=0x00000000002D5F70 "t\n"
 *   insn=0x00000000002D5EB4 string=0x00000000002D5EB8 ""
 *   insn=0x00000000002D5EBC string=0x00000000002D5EC0 "b"
 *   insn=0x00000000002D5EC4 string=0x00000000002D5EC8 ""
 *   insn=0x00000000002D5EC8 string=0x00000000002D5EE4 "H"
 *   insn=0x00000000002D5ED0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D5ED4 string=0x00000000002D5ED8 "i*@"
 *   insn=0x00000000002D5EDC string=0x00000000002D5EE0 ""
 *   insn=0x00000000002D5EE8 string=0x00000000002D5EEC ")"
 *   insn=0x00000000002D5EF4 string=0x00000000002D5EF8 ""
 *   insn=0x00000000002D5EFC string=0x00000000002D5F00 "b"
 *   insn=0x00000000002D5F04 string=0x00000000002D5F08 ""
 *   insn=0x00000000002D5F08 string=0x00000000002D5F24 "H"
 *   insn=0x00000000002D5F14 string=0x00000000002D5F18 "i*@"
 *   insn=0x00000000002D5F1C string=0x00000000002D5F20 ""
 *   insn=0x00000000002D5F30 string=0x00000000002D5F34 "u"
 *   insn=0x00000000002D5F38 string=0x00000000002D5F3C ""
 *   insn=0x00000000002D5F40 string=0x00000000002D5F44 "b"
 *   insn=0x00000000002D5F4C string=0x00000000002D5F64 "("
 *   insn=0x00000000002D5F5C string=0x00000000002D5F60 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Program::ByteSize(Caver::Proto::Program *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  _QWORD *v9; // x21
  __int64 v10; // x8
  int v11; // w10
  int v12; // w0
  _QWORD *v13; // x21
  __int64 v14; // x8
  int v15; // w9

  LOBYTE(v3) = *((_BYTE *)this + 40);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_19;
  }
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 40) & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  v6 = *(_QWORD *)(*v5 - 24LL);
  if ( (unsigned int)v6 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v6,
           a2);
    v3 = *((_DWORD *)this + 10);
    v7 = v8;
    v6 = *(_QWORD *)(*v5 - 24LL);
  }
  else
  {
    v7 = 1;
  }
  v4 = v7 + v6 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_10:
    v9 = (_QWORD *)*((_QWORD *)this + 3);
    v10 = *(_QWORD *)(*v9 - 24LL);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v3 = *((_DWORD *)this + 10);
      v11 = v12;
      v10 = *(_QWORD *)(*v9 - 24LL);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + v10 + 1;
  }
LABEL_14:
  if ( (v3 & 4) != 0 )
  {
    v13 = (_QWORD *)*((_QWORD *)this + 4);
    v14 = *(_QWORD *)(*v13 - 24LL);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v14,
              a2);
      v14 = *(_QWORD *)(*v13 - 24LL);
    }
    else
    {
      v15 = 1;
    }
    v4 += v15 + v14 + 1;
  }
LABEL_19:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

