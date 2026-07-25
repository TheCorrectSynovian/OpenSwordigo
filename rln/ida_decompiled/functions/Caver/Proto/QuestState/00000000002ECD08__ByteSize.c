/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECD08
 * Mangled: _ZNK5Caver5Proto10QuestState8ByteSizeEv
 * Demangled: Caver::Proto::QuestState::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 13
 *   insn=0x00000000002ECD14 string=0x00000000002ECD18 "ir@9"
 *   insn=0x00000000002ECD20 string=0x00000000002ECD34 "t\n@"
 *   insn=0x00000000002ECD28 string=0x00000000002ECD70 "\n\t"
 *   insn=0x00000000002ECD30 string=0x00000000002ECD7C "`\n"
 *   insn=0x00000000002ECD38 string=0x00000000002ECD3C ""
 *   insn=0x00000000002ECD40 string=0x00000000002ECD44 "b"
 *   insn=0x00000000002ECD48 string=0x00000000002ECD4C ""
 *   insn=0x00000000002ECD4C string=0x00000000002ECD68 "H"
 *   insn=0x00000000002ECD54 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002ECD58 string=0x00000000002ECD5C "i"
 *   insn=0x00000000002ECD60 string=0x00000000002ECD64 ""
 *   insn=0x00000000002ECD68 string=0x00000000002ECD6C ""
 *   insn=0x00000000002ECD70 string=0x00000000002ECD74 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestState::ByteSize(Caver::Proto::QuestState *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w8
  __int64 result; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 28) & 1) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 2);
      v7 = *(_QWORD *)(*v6 - 24LL);
      if ( (unsigned int)v7 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
               a2);
        v3 = *((_DWORD *)this + 7);
        v8 = v9;
        v7 = *(_QWORD *)(*v6 - 24LL);
      }
      else
      {
        v8 = 1;
      }
      v4 = v8 + v7 + 1;
    }
    else
    {
      v4 = 0;
    }
    if ( (v3 & 2) != 0 )
      result = v4 + 2;
    else
      result = v4;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

