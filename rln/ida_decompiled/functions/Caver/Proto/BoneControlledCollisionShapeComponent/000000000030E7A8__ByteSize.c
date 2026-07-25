/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E7A8
 * Mangled: _ZNK5Caver5Proto37BoneControlledCollisionShapeComponent8ByteSizeEv
 * Demangled: Caver::Proto::BoneControlledCollisionShapeComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 17
 *   insn=0x000000000030E7B8 string=0x000000000030E7BC "hb@9"
 *   insn=0x000000000030E7C4 string=0x000000000030E7DC "`"
 *   insn=0x000000000030E7C8 string=0x000000000030E7CC "H"
 *   insn=0x000000000030E7CC string=0x000000000030E7D0 " "
 *   insn=0x000000000030E7CC string=0x000000000030E814 "u\n@"
 *   insn=0x000000000030E7D0 string=0x000000000030E850 "t\n"
 *   insn=0x000000000030E7E0 string=0x000000000030E7F8 "t"
 *   insn=0x000000000030E7E8 string=0x000000000030E804 "s"
 *   insn=0x000000000030E7EC string=0x000000000030E7F0 "("
 *   insn=0x000000000030E804 string=0x000000000030E808 "h"
 *   insn=0x000000000030E804 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030E80C string=0x000000000030E810 ""
 *   insn=0x000000000030E818 string=0x000000000030E81C ""
 *   insn=0x000000000030E820 string=0x000000000030E824 "b"
 *   insn=0x000000000030E82C string=0x000000000030E844 "("
 *   insn=0x000000000030E830 string=0x000000000030E834 "g"
 *   insn=0x000000000030E83C string=0x000000000030E840 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BoneControlledCollisionShapeComponent::ByteSize(
        Caver::Proto::BoneControlledCollisionShapeComponent *this,
        unsigned int a2)
{
  char v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  _QWORD *v6; // x21
  __int64 v7; // x8
  int v8; // w9

  v3 = *((_BYTE *)this + 24);
  if ( v3 )
  {
    if ( (*((_BYTE *)this + 24) & 1) != 0 )
    {
      v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
      if ( ((unsigned int)v5 & 0x80000000) != 0 )
      {
        v4 = 11;
        if ( (v3 & 2) == 0 )
          goto LABEL_17;
      }
      else if ( (unsigned int)v5 >= 0x80 )
      {
        v4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2) + 1;
        if ( (*((_DWORD *)this + 6) & 2) == 0 )
          goto LABEL_17;
      }
      else
      {
        v4 = 2;
        if ( (v3 & 2) == 0 )
          goto LABEL_17;
      }
    }
    else
    {
      v4 = 0;
      if ( (*((_BYTE *)this + 24) & 2) == 0 )
        goto LABEL_17;
    }
    v6 = (_QWORD *)*((_QWORD *)this + 2);
    v7 = *(_QWORD *)(*v6 - 24LL);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
             a2);
      v7 = *(_QWORD *)(*v6 - 24LL);
    }
    else
    {
      v8 = 1;
    }
    v4 += v8 + v7 + 1;
  }
  else
  {
    v4 = 0;
  }
LABEL_17:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

