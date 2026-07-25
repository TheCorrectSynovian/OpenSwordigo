/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031257C
 * Mangled: _ZNK5Caver5Proto27CharAnimControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::CharAnimControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 56
 *   insn=0x0000000000312588 string=0x000000000031258C "h"
 *   insn=0x000000000031258C string=0x0000000000312590 "H"
 *   insn=0x0000000000312590 string=0x0000000000312594 "h"
 *   insn=0x0000000000312594 string=0x00000000003125C0 "`"
 *   insn=0x0000000000312598 string=0x000000000031259C "("
 *   insn=0x000000000031259C string=0x00000000003125A0 "`"
 *   insn=0x000000000031259C string=0x0000000000312600 "H"
 *   insn=0x00000000003125A4 string=0x00000000003125DC "i"
 *   insn=0x00000000003125A8 string=0x00000000003125AC """
 *   insn=0x00000000003125B4 string=0x00000000003125FC "4"
 *   insn=0x00000000003125B8 string=0x00000000003125BC "G"
 *   insn=0x00000000003125BC string=0x00000000003126D8 "t\n"
 *   insn=0x00000000003125C4 string=0x00000000003125E4 "t"
 *   insn=0x00000000003125C8 string=0x00000000003125CC "b"
 *   insn=0x00000000003125D0 string=0x00000000003125D4 "h"
 *   insn=0x00000000003125D4 string=0x00000000003125D8 "\n"
 *   insn=0x00000000003125DC string=0x00000000003125E0 ""
 *   insn=0x00000000003125F0 string=0x00000000003125F4 "h&@"
 *   insn=0x00000000003125F0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003125F4 string=0x00000000003125F8 "\t"
 *   insn=0x0000000000312600 string=0x0000000000312604 ""
 *   insn=0x0000000000312600 string=0x0000000000312628 "`"
 *   insn=0x0000000000312604 string=0x0000000000312644 "`"
 *   insn=0x0000000000312608 string=0x000000000031260C "h"
 *   insn=0x0000000000312608 string=0x0000000000312660 "`"
 *   insn=0x000000000031260C string=0x0000000000312610 "`"@"
 *   insn=0x0000000000312610 string=0x0000000000312614 "`"
 *   insn=0x0000000000312614 string=0x0000000000312680 "h"
 *   insn=0x0000000000312620 string=0x0000000000312624 ","
 *   insn=0x000000000031262C string=0x0000000000312688 "i"
 *   insn=0x0000000000312638 string=0x000000000031263C "4"
 *   insn=0x000000000031263C string=0x0000000000312640 "H"
 *   insn=0x0000000000312648 string=0x0000000000312698 "i"
 *   insn=0x0000000000312654 string=0x0000000000312658 "4"
 *   insn=0x0000000000312660 string=0x0000000000312664 " "
 *   insn=0x0000000000312664 string=0x00000000003126A8 "i"
 *   insn=0x0000000000312670 string=0x0000000000312674 "4"
 *   insn=0x0000000000312688 string=0x000000000031268C "4"
 *   insn=0x0000000000312698 string=0x000000000031269C "4"
 *   insn=0x000000000031269C string=0x00000000003126A0 "h"
 *   insn=0x00000000003126A8 string=0x00000000003126AC "4"
 *   insn=0x00000000003126AC string=0x00000000003126B0 ""
 *   insn=0x00000000003126B0 string=0x00000000003126B4 "\t"
 *   insn=0x00000000003126B8 string=0x00000000003126BC "h&@"
 *   insn=0x00000000003126CC string=0x00000000003126D0 ""
 *   insn=0x00000000003126EC string=0x00000000003126F0 "h&@"
 *   insn=0x00000000003126F0 string=0x00000000003126F4 "\t"
 *   insn=0x00000000003126F4 string=0x00000000003126F8 "4"
 *   insn=0x00000000003126F8 string=0x00000000003126FC "h"
 *   insn=0x0000000000312704 string=0x0000000000312708 "h&@"
 *   insn=0x0000000000312708 string=0x000000000031270C "\t"
 *   insn=0x000000000031270C string=0x0000000000312710 "4"
 *   insn=0x000000000031271C string=0x0000000000312720 "h&@"
 *   insn=0x0000000000312720 string=0x0000000000312724 "\t"
 *   insn=0x0000000000312724 string=0x0000000000312728 "4"
 *   insn=0x0000000000312728 string=0x000000000031272C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharAnimControllerComponent::ByteSize(
        Caver::Proto::CharAnimControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  google::protobuf::io::CodedOutputStream *v9; // x0
  int v10; // w8
  google::protobuf::io::CodedOutputStream *v11; // x0
  google::protobuf::io::CodedOutputStream *v12; // x0
  google::protobuf::io::CodedOutputStream *v13; // x0
  int v14; // w0
  int v16; // w0
  int v17; // w0

  LOBYTE(v3) = *((_BYTE *)this + 36);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_45;
  }
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 9);
      v4 = v14 + 1;
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
    if ( (*((_BYTE *)this + 36) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 9);
    v6 = v8 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) == 0 )
  {
    if ( (v3 & 8) == 0 )
      goto LABEL_19;
LABEL_27:
    v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v12 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 0x10) != 0 )
        goto LABEL_30;
    }
    else if ( (unsigned int)v12 >= 0x80 )
    {
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2);
      v3 = *((_DWORD *)this + 9);
      v4 += v17 + 1;
      if ( (v3 & 0x10) != 0 )
        goto LABEL_30;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 0x10) != 0 )
        goto LABEL_30;
    }
LABEL_20:
    if ( (v3 & 0x20) == 0 )
      goto LABEL_45;
    goto LABEL_21;
  }
  v11 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
  if ( ((unsigned int)v11 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 8) != 0 )
      goto LABEL_27;
  }
  else if ( (unsigned int)v11 >= 0x80 )
  {
    v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, a2);
    v3 = *((_DWORD *)this + 9);
    v4 += v16 + 1;
    if ( (v3 & 8) != 0 )
      goto LABEL_27;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 8) != 0 )
      goto LABEL_27;
  }
LABEL_19:
  if ( (v3 & 0x10) == 0 )
    goto LABEL_20;
LABEL_30:
  v13 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 7);
  if ( ((unsigned int)v13 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x20) == 0 )
      goto LABEL_45;
  }
  else if ( (unsigned int)v13 >= 0x80 )
  {
    v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, a2) + 1;
    if ( (*((_DWORD *)this + 9) & 0x20) == 0 )
      goto LABEL_45;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 0x20) == 0 )
      goto LABEL_45;
  }
LABEL_21:
  v9 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 8);
  if ( ((unsigned int)v9 & 0x80000000) != 0 )
  {
    v10 = 11;
  }
  else if ( (unsigned int)v9 >= 0x80 )
  {
    v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, a2) + 1;
  }
  else
  {
    v10 = 2;
  }
  v4 += v10;
LABEL_45:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

