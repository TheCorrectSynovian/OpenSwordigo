/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328C24
 * Mangled: _ZNK5Caver5Proto34BouncingMonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 23
 *   insn=0x0000000000328C30 string=0x0000000000328C34 "hr@9H"
 *   insn=0x0000000000328C34 string=0x0000000000328C38 "H"
 *   insn=0x0000000000328C38 string=0x0000000000328C3C "h"
 *   insn=0x0000000000328C3C string=0x0000000000328C68 "`"
 *   insn=0x0000000000328C40 string=0x0000000000328C44 "("
 *   insn=0x0000000000328C44 string=0x0000000000328C48 "`"
 *   insn=0x0000000000328C4C string=0x0000000000328C84 "i"
 *   insn=0x0000000000328C50 string=0x0000000000328C54 """
 *   insn=0x0000000000328C54 string=0x0000000000328C98 "N5"
 *   insn=0x0000000000328C5C string=0x0000000000328CA4 "4"
 *   insn=0x0000000000328C64 string=0x0000000000328CC0 "`\n"
 *   insn=0x0000000000328C6C string=0x0000000000328C8C "t"
 *   insn=0x0000000000328C74 string=0x0000000000328CD0 "@5"
 *   insn=0x0000000000328C78 string=0x0000000000328C7C "h"
 *   insn=0x0000000000328C7C string=0x0000000000328C80 "\n"
 *   insn=0x0000000000328C84 string=0x0000000000328C88 ""
 *   insn=0x0000000000328C98 string=0x0000000000328C9C "h"
 *   insn=0x0000000000328C98 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000328C9C string=0x0000000000328CA0 "\t"
 *   insn=0x0000000000328CB0 string=0x0000000000328CB4 "*"
 *   insn=0x0000000000328CB8 string=0x0000000000328CBC " "
 *   insn=0x0000000000328CD0 string=0x0000000000328CD4 "h"
 *   insn=0x0000000000328CD8 string=0x0000000000328CDC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BouncingMonsterControllerComponent::ByteSize(
        Caver::Proto::BouncingMonsterControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  unsigned int v10; // w9
  int v11; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_22;
  }
  if ( (*((_BYTE *)this + 28) & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 7);
      v4 = v11 + 1;
      if ( (v3 & 2) == 0 )
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
    if ( (*((_BYTE *)this + 28) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 7);
    v6 = v9 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  v10 = v4 + 5;
  if ( (v3 & 4) == 0 )
    v10 = v4;
  if ( (v3 & 8) != 0 )
    result = v10 + 5;
  else
    result = v10;
LABEL_22:
  *((_DWORD *)this + 2) = result;
  return result;
}

