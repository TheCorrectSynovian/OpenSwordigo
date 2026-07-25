/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3AD4
 * Mangled: _ZNK5Caver5Proto23GuideTarget_LevelObject8ByteSizeEv
 * Demangled: Caver::Proto::GuideTarget_LevelObject::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 18
 *   insn=0x00000000002E3AE4 string=0x00000000002E3AE8 "i"
 *   insn=0x00000000002E3AF0 string=0x00000000002E3B08 "t\n@"
 *   insn=0x00000000002E3AF8 string=0x00000000002E3AFC """
 *   insn=0x00000000002E3AF8 string=0x00000000002E3B48 "u"
 *   insn=0x00000000002E3AFC string=0x00000000002E3B84 "t\n"
 *   insn=0x00000000002E3B00 string=0x00000000002E3B04 " "
 *   insn=0x00000000002E3B0C string=0x00000000002E3B10 ""
 *   insn=0x00000000002E3B14 string=0x00000000002E3B18 "b"
 *   insn=0x00000000002E3B1C string=0x00000000002E3B20 ""
 *   insn=0x00000000002E3B20 string=0x00000000002E3B3C "H"
 *   insn=0x00000000002E3B28 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E3B2C string=0x00000000002E3B30 "i"@"
 *   insn=0x00000000002E3B34 string=0x00000000002E3B38 ""
 *   insn=0x00000000002E3B40 string=0x00000000002E3B44 "\t"
 *   insn=0x00000000002E3B4C string=0x00000000002E3B50 ""
 *   insn=0x00000000002E3B54 string=0x00000000002E3B58 "b"
 *   insn=0x00000000002E3B60 string=0x00000000002E3B78 "("
 *   insn=0x00000000002E3B70 string=0x00000000002E3B74 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::ByteSize(
        Caver::Proto::GuideTarget_LevelObject *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  _QWORD *v9; // x21
  __int64 v10; // x8
  int v11; // w9

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_14;
  }
  if ( (*((_BYTE *)this + 32) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 32) & 2) == 0 )
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
    v3 = *((_DWORD *)this + 8);
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
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v10 = *(_QWORD *)(*v9 - 24LL);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + v10 + 1;
  }
LABEL_14:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

