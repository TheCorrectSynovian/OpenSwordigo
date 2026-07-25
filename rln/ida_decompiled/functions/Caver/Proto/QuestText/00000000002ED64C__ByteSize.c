/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED64C
 * Mangled: _ZNK5Caver5Proto9QuestText8ByteSizeEv
 * Demangled: Caver::Proto::QuestText::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 20
 *   insn=0x00000000002ED65C string=0x00000000002ED660 "hBA9h"
 *   insn=0x00000000002ED660 string=0x00000000002ED664 "h"
 *   insn=0x00000000002ED664 string=0x00000000002ED670 "t\n@"
 *   insn=0x00000000002ED66C string=0x00000000002ED6A8 "i"@"
 *   insn=0x00000000002ED674 string=0x00000000002ED678 ""
 *   insn=0x00000000002ED67C string=0x00000000002ED680 "b"
 *   insn=0x00000000002ED688 string=0x00000000002ED6A0 "("
 *   insn=0x00000000002ED690 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002ED698 string=0x00000000002ED69C ""
 *   insn=0x00000000002ED6A0 string=0x00000000002ED6A4 ""
 *   insn=0x00000000002ED6A8 string=0x00000000002ED6AC "?"
 *   insn=0x00000000002ED6AC string=0x00000000002ED6B0 "4"
 *   insn=0x00000000002ED6B4 string=0x00000000002ED708 "t\n"
 *   insn=0x00000000002ED6B8 string=0x00000000002ED6BC "h"
 *   insn=0x00000000002ED6C4 string=0x00000000002ED6C8 ""
 *   insn=0x00000000002ED6CC string=0x00000000002ED6D0 "b"
 *   insn=0x00000000002ED6D4 string=0x00000000002ED6D8 ""
 *   insn=0x00000000002ED6D8 string=0x00000000002ED6F4 "H"
 *   insn=0x00000000002ED6E4 string=0x00000000002ED6E8 "i"@"
 *   insn=0x00000000002ED6EC string=0x00000000002ED6F0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestText::ByteSize(Caver::Proto::QuestText *this, unsigned int a2)
{
  int v3; // w8
  _QWORD *v4; // x20
  __int64 v5; // x8
  int v6; // w9
  int v7; // w9
  unsigned int v8; // w20
  __int64 i; // x21
  _QWORD *v10; // x22
  __int64 v11; // x8
  int v12; // w10
  int v13; // w0

  if ( (*((_BYTE *)this + 80) & 1) != 0 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    v5 = *(_QWORD *)(*v4 - 24LL);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v5,
             a2);
      v5 = *(_QWORD *)(*v4 - 24LL);
    }
    else
    {
      v6 = 1;
    }
    v3 = v6 + v5 + 1;
  }
  else
  {
    v3 = 0;
  }
  v7 = *((_DWORD *)this + 8);
  v8 = v7 + v3;
  if ( v7 >= 1 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v10 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
      v11 = *(_QWORD *)(*v10 - 24LL);
      if ( (unsigned int)v11 >= 0x80 )
      {
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v11,
                a2);
        v7 = *((_DWORD *)this + 8);
        v12 = v13;
        v11 = *(_QWORD *)(*v10 - 24LL);
      }
      else
      {
        v12 = 1;
      }
      v8 += v12 + v11;
    }
  }
  *((_DWORD *)this + 2) = v8;
  return v8;
}

