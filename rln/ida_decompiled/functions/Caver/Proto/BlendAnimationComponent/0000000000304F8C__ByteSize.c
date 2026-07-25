/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304F8C
 * Mangled: _ZNK5Caver5Proto23BlendAnimationComponent8ByteSizeEv
 * Demangled: Caver::Proto::BlendAnimationComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 23
 *   insn=0x0000000000304F98 string=0x0000000000304F9C "hr@9H"
 *   insn=0x0000000000304F9C string=0x0000000000304FA0 "H"
 *   insn=0x0000000000304FA0 string=0x0000000000304FA4 "h"
 *   insn=0x0000000000304FA4 string=0x0000000000304FD0 "`"
 *   insn=0x0000000000304FA8 string=0x0000000000304FAC "("
 *   insn=0x0000000000304FAC string=0x0000000000304FB0 "`"
 *   insn=0x0000000000304FB4 string=0x0000000000304FEC "i"
 *   insn=0x0000000000304FB8 string=0x0000000000304FBC """
 *   insn=0x0000000000304FBC string=0x0000000000305000 "t"
 *   insn=0x0000000000304FC4 string=0x000000000030500C "4"
 *   insn=0x0000000000304FCC string=0x0000000000305028 "`\n"
 *   insn=0x0000000000304FD4 string=0x0000000000304FF4 "t"
 *   insn=0x0000000000304FDC string=0x0000000000305038 "f"
 *   insn=0x0000000000304FE0 string=0x0000000000304FE4 "h"
 *   insn=0x0000000000304FE4 string=0x0000000000304FE8 "\n"
 *   insn=0x0000000000304FEC string=0x0000000000304FF0 ""
 *   insn=0x0000000000305000 string=0x0000000000305004 "h"
 *   insn=0x0000000000305000 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000305004 string=0x0000000000305008 "\t"
 *   insn=0x0000000000305018 string=0x000000000030501C "*"
 *   insn=0x0000000000305020 string=0x0000000000305024 " "
 *   insn=0x0000000000305038 string=0x000000000030503C "h"
 *   insn=0x0000000000305040 string=0x0000000000305044 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BlendAnimationComponent::ByteSize(
        Caver::Proto::BlendAnimationComponent *this,
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

