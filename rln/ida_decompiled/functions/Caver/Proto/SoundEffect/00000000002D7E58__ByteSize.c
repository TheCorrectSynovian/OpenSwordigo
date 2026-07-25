/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7E58
 * Mangled: _ZNK5Caver5Proto11SoundEffect8ByteSizeEv
 * Demangled: Caver::Proto::SoundEffect::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F47E0  Caver::Proto::SoundEffect::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 23
 *   insn=0x00000000002D7E68 string=0x00000000002D7E6C "i"
 *   insn=0x00000000002D7E74 string=0x00000000002D7E8C "t\n@"
 *   insn=0x00000000002D7E7C string=0x00000000002D7E80 "#"
 *   insn=0x00000000002D7E7C string=0x00000000002D7ECC "u"
 *   insn=0x00000000002D7E84 string=0x00000000002D7E88 "'"
 *   insn=0x00000000002D7E88 string=0x00000000002D7F24 "`\n"
 *   insn=0x00000000002D7E90 string=0x00000000002D7E94 ""
 *   insn=0x00000000002D7E98 string=0x00000000002D7E9C "b"
 *   insn=0x00000000002D7EA0 string=0x00000000002D7EA4 ""
 *   insn=0x00000000002D7EA4 string=0x00000000002D7EC0 "H"
 *   insn=0x00000000002D7EAC string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D7EB0 string=0x00000000002D7EB4 "i*@"
 *   insn=0x00000000002D7EB8 string=0x00000000002D7EBC ""
 *   insn=0x00000000002D7EC4 string=0x00000000002D7EC8 ")"
 *   insn=0x00000000002D7ED0 string=0x00000000002D7ED4 ""
 *   insn=0x00000000002D7ED8 string=0x00000000002D7EDC "b"
 *   insn=0x00000000002D7EE0 string=0x00000000002D7EE4 ""
 *   insn=0x00000000002D7EE4 string=0x00000000002D7F00 "H"
 *   insn=0x00000000002D7EF0 string=0x00000000002D7EF4 "i*@"
 *   insn=0x00000000002D7EF8 string=0x00000000002D7EFC ""
 *   insn=0x00000000002D7F0C string=0x00000000002D7F10 "?"
 *   insn=0x00000000002D7F14 string=0x00000000002D7F18 "\n"
 *   insn=0x00000000002D7F18 string=0x00000000002D7F1C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffect::ByteSize(Caver::Proto::SoundEffect *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  __int64 result; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  _QWORD *v10; // x21
  __int64 v11; // x8
  int v12; // w10
  int v13; // w0
  unsigned int v14; // w8

  LOBYTE(v3) = *((_BYTE *)this + 40);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_19;
  }
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 40) & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 2);
  v7 = *(_QWORD *)(*v6 - 24LL);
  if ( (unsigned int)v7 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
           a2);
    v3 = *((_DWORD *)this + 10);
    v8 = v9;
    v7 = *(_QWORD *)(*v6 - 24LL);
  }
  else
  {
    v8 = 1;
  }
  v4 = v8 + v7 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_10:
    v10 = (_QWORD *)*((_QWORD *)this + 3);
    v11 = *(_QWORD *)(*v10 - 24LL);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v11,
              a2);
      v3 = *((_DWORD *)this + 10);
      v12 = v13;
      v11 = *(_QWORD *)(*v10 - 24LL);
    }
    else
    {
      v12 = 1;
    }
    v4 += v12 + v11 + 1;
  }
LABEL_14:
  v14 = v4 + 5;
  if ( (v3 & 4) == 0 )
    v14 = v4;
  if ( (v3 & 8) != 0 )
    result = v14 + 5;
  else
    result = v14;
LABEL_19:
  *((_DWORD *)this + 2) = result;
  return result;
}

