/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032635C
 * Mangled: _ZNK5Caver5Proto15AttackComponent8ByteSizeEv
 * Demangled: Caver::Proto::AttackComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 73
 *   insn=0x000000000032636C string=0x0000000000326370 "hJ@"
 *   insn=0x0000000000326374 string=0x0000000000326378 "@"
 *   insn=0x000000000032637C string=0x00000000003263B0 "`"
 *   insn=0x0000000000326380 string=0x0000000000326384 "h"
 *   insn=0x0000000000326384 string=0x0000000000326388 "`"
 *   insn=0x000000000032638C string=0x00000000003263CC "i"
 *   insn=0x0000000000326390 string=0x0000000000326394 "b"
 *   insn=0x0000000000326394 string=0x00000000003263E0 "|?"
 *   insn=0x000000000032639C string=0x00000000003263EC "5"
 *   insn=0x00000000003263A4 string=0x00000000003263A8 "a"
 *   insn=0x00000000003263A8 string=0x00000000003263AC "i"
 *   insn=0x00000000003263A8 string=0x0000000000326514 "\t"
 *   insn=0x00000000003263AC string=0x0000000000326550 "`\n"
 *   insn=0x00000000003263B4 string=0x00000000003263D4 "u"
 *   insn=0x00000000003263BC string=0x000000000032645C "]?"
 *   insn=0x00000000003263C0 string=0x00000000003263C4 "("
 *   insn=0x00000000003263C4 string=0x00000000003263C8 "\n"
 *   insn=0x00000000003263CC string=0x00000000003263D0 ""
 *   insn=0x00000000003263E0 string=0x00000000003263E4 "hJ@"
 *   insn=0x00000000003263E0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003263E4 string=0x00000000003263E8 "\t"
 *   insn=0x00000000003263F0 string=0x00000000003263F4 "H"
 *   insn=0x00000000003263F0 string=0x0000000000326400 "`"
 *   insn=0x00000000003263F4 string=0x00000000003263F8 "("
 *   insn=0x00000000003263F4 string=0x000000000032641C "`"
 *   insn=0x00000000003263F8 string=0x00000000003263FC ";"
 *   insn=0x00000000003263F8 string=0x000000000032649C "\t"
 *   insn=0x0000000000326404 string=0x000000000032643C "i"
 *   insn=0x0000000000326408 string=0x000000000032640C """
 *   insn=0x000000000032640C string=0x0000000000326470 "X?"
 *   insn=0x0000000000326410 string=0x0000000000326414 "5"
 *   insn=0x0000000000326414 string=0x0000000000326418 ""
 *   insn=0x000000000032641C string=0x0000000000326420 "`"
 *   insn=0x0000000000326420 string=0x000000000032644C "i"
 *   insn=0x0000000000326428 string=0x0000000000326488 "R?"
 *   insn=0x000000000032642C string=0x0000000000326430 "5"
 *   insn=0x0000000000326430 string=0x0000000000326434 "H"
 *   insn=0x0000000000326434 string=0x0000000000326438 ","
 *   insn=0x000000000032643C string=0x0000000000326440 "5"
 *   insn=0x000000000032644C string=0x0000000000326450 "5"
 *   insn=0x0000000000326450 string=0x0000000000326454 "H"
 *   insn=0x0000000000326454 string=0x0000000000326458 "$"
 *   insn=0x000000000032645C string=0x0000000000326460 "hJ@"
 *   insn=0x0000000000326464 string=0x0000000000326468 ""
 *   insn=0x0000000000326470 string=0x0000000000326474 "hJ@"
 *   insn=0x0000000000326474 string=0x0000000000326478 "\t"
 *   insn=0x0000000000326478 string=0x000000000032647C "5"
 *   insn=0x0000000000326488 string=0x000000000032648C "hJ@"
 *   insn=0x000000000032648C string=0x0000000000326490 "\t"
 *   insn=0x0000000000326490 string=0x0000000000326494 "5"
 *   insn=0x000000000032649C string=0x00000000003264A0 "h"
 *   insn=0x00000000003264A0 string=0x00000000003264A4 ")iE"
 *   insn=0x00000000003264A8 string=0x00000000003264AC ")"
 *   insn=0x00000000003264AC string=0x00000000003264B0 "("
 *   insn=0x00000000003264B8 string=0x00000000001F34D0 "P'"
 *   insn=0x00000000003264C0 string=0x00000000003264C4 "b"
 *   insn=0x00000000003264CC string=0x00000000003264D8 "hJ@"
 *   insn=0x00000000003264D0 string=0x00000000003264D4 "??"
 *   insn=0x00000000003264DC string=0x00000000003264E0 ")"
 *   insn=0x00000000003264E0 string=0x00000000003264E4 "5"
 *   insn=0x00000000003264F4 string=0x00000000003264F8 "*"
 *   insn=0x00000000003264F8 string=0x00000000003264FC ")"
 *   insn=0x00000000003264FC string=0x0000000000326500 "*"
 *   insn=0x0000000000326504 string=0x0000000000326508 " "
 *   insn=0x0000000000326518 string=0x000000000032651C "\t"
 *   insn=0x0000000000326520 string=0x0000000000326524 "*"
 *   insn=0x0000000000326524 string=0x0000000000326528 ")"
 *   insn=0x000000000032652C string=0x0000000000326530 "*"
 *   insn=0x0000000000326530 string=0x0000000000326534 ")"
 *   insn=0x0000000000326538 string=0x000000000032653C "*"
 *   insn=0x000000000032653C string=0x0000000000326540 ")"
 *   insn=0x0000000000326540 string=0x0000000000326544 "*"
 *   insn=0x0000000000326548 string=0x000000000032654C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::ByteSize(Caver::Proto::AttackComponent *this, unsigned int a2)
{
  int v3; // w8
  int v4; // w21
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  google::protobuf::io::CodedOutputStream *v11; // x0
  int v12; // w0
  int v13; // w0
  int v14; // w0
  Caver::Proto::AttackComponent *v15; // x8
  unsigned int v16; // w1
  unsigned int v17; // w20
  int v18; // w0
  unsigned int v19; // w9
  unsigned int v20; // w9

  v3 = *((_DWORD *)this + 18);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    if ( (v3 & 0xFF00) == 0 )
      goto LABEL_64;
    goto LABEL_53;
  }
  if ( (v3 & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 18);
      v4 = v12 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
  }
  else
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_18;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 18);
    v6 = v9 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_18:
  if ( (v3 & 4) != 0 )
  {
    v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v10 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) != 0 )
        goto LABEL_25;
    }
    else if ( (unsigned int)v10 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v3 = *((_DWORD *)this + 18);
      v4 += v13 + 1;
      if ( (v3 & 8) != 0 )
        goto LABEL_25;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) != 0 )
        goto LABEL_25;
    }
LABEL_20:
    if ( (v3 & 0x10) == 0 )
      goto LABEL_45;
    goto LABEL_38;
  }
  if ( (v3 & 8) == 0 )
    goto LABEL_20;
LABEL_25:
  v11 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
  if ( ((unsigned int)v11 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_45;
  }
  else if ( (unsigned int)v11 >= 0x80 )
  {
    v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, a2);
    v3 = *((_DWORD *)this + 18);
    v4 += v14 + 1;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_45;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_45;
  }
LABEL_38:
  if ( *((_QWORD *)this + 4) )
    v15 = this;
  else
    v15 = (Caver::Proto::AttackComponent *)Caver::Proto::AttackComponent::default_instance_;
  v17 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v15 + 4));
  if ( v17 >= 0x80 )
    v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v17,
            v16);
  else
    v18 = 1;
  v3 = *((_DWORD *)this + 18);
  v4 += v17 + v18 + 1;
LABEL_45:
  v19 = v4 + 5;
  if ( (v3 & 0x20) == 0 )
    v19 = v4;
  if ( (v3 & 0x40) != 0 )
    v19 += 5;
  if ( (v3 & 0x80) != 0 )
    result = v19 + 5;
  else
    result = v19;
  if ( (v3 & 0xFF00) != 0 )
  {
LABEL_53:
    v20 = result + 5;
    if ( (v3 & 0x100) == 0 )
      v20 = result;
    if ( (v3 & 0x200) != 0 )
      v20 += 5;
    if ( (v3 & 0x400) != 0 )
      v20 += 5;
    if ( (v3 & 0x800) != 0 )
      v20 += 5;
    if ( (v3 & 0x1000) != 0 )
      result = v20 + 5;
    else
      result = v20;
  }
LABEL_64:
  *((_DWORD *)this + 2) = result;
  return result;
}

