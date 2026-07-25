/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030D49C
 * Mangled: _ZNK5Caver5Proto15DamageComponent8ByteSizeEv
 * Demangled: Caver::Proto::DamageComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 45
 *   insn=0x000000000030D4A8 string=0x000000000030D4AC "h.@"
 *   insn=0x000000000030D4B0 string=0x000000000030D4B4 "@"
 *   insn=0x000000000030D4B8 string=0x000000000030D4EC "`"
 *   insn=0x000000000030D4BC string=0x000000000030D4C0 "h"
 *   insn=0x000000000030D4C0 string=0x000000000030D4C4 "`"
 *   insn=0x000000000030D4C0 string=0x000000000030D52C ""
 *   insn=0x000000000030D4C8 string=0x000000000030D508 "i"
 *   insn=0x000000000030D4CC string=0x000000000030D4D0 "b"
 *   insn=0x000000000030D4D0 string=0x000000000030D51C "-"
 *   insn=0x000000000030D4D8 string=0x000000000030D528 "4"
 *   insn=0x000000000030D4E4 string=0x000000000030D4E8 "A"
 *   insn=0x000000000030D4E4 string=0x000000000030D5E0 "\t"
 *   insn=0x000000000030D4E8 string=0x000000000030D5EC "`\n"
 *   insn=0x000000000030D4F0 string=0x000000000030D510 "t"
 *   insn=0x000000000030D4F4 string=0x000000000030D4F8 "b"
 *   insn=0x000000000030D4FC string=0x000000000030D500 "("
 *   insn=0x000000000030D500 string=0x000000000030D504 "\n"
 *   insn=0x000000000030D508 string=0x000000000030D50C ""
 *   insn=0x000000000030D51C string=0x000000000030D520 "h.@"
 *   insn=0x000000000030D51C string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030D520 string=0x000000000030D524 "\t"
 *   insn=0x000000000030D52C string=0x000000000030D54C "`"
 *   insn=0x000000000030D530 string=0x000000000030D534 "`"
 *   insn=0x000000000030D538 string=0x000000000030D56C "i"
 *   insn=0x000000000030D548 string=0x000000000030D5A4 "4"
 *   insn=0x000000000030D54C string=0x000000000030D550 " "
 *   insn=0x000000000030D550 string=0x000000000030D574 "i"
 *   insn=0x000000000030D554 string=0x000000000030D558 """
 *   insn=0x000000000030D55C string=0x000000000030D560 "4"
 *   insn=0x000000000030D56C string=0x000000000030D570 ""
 *   insn=0x000000000030D574 string=0x000000000030D578 "4"
 *   insn=0x000000000030D57C string=0x000000000030D580 "\n"
 *   insn=0x000000000030D584 string=0x000000000030D588 "h.@"
 *   insn=0x000000000030D598 string=0x000000000030D59C "h.@"
 *   insn=0x000000000030D59C string=0x000000000030D5A0 "\t"
 *   insn=0x000000000030D5B4 string=0x000000000030D5B8 "*"
 *   insn=0x000000000030D5B8 string=0x000000000030D5BC ")"
 *   insn=0x000000000030D5C0 string=0x000000000030D5C4 "*"
 *   insn=0x000000000030D5C4 string=0x000000000030D5C8 ")"
 *   insn=0x000000000030D5C8 string=0x000000000030D5CC "*\t"
 *   insn=0x000000000030D5D0 string=0x000000000030D5D4 " "
 *   insn=0x000000000030D5FC string=0x000000000030D600 "h.@"
 *   insn=0x000000000030D600 string=0x000000000030D604 "\t"
 *   insn=0x000000000030D604 string=0x000000000030D608 "4"
 *   insn=0x000000000030D608 string=0x000000000030D60C "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::ByteSize(Caver::Proto::DamageComponent *this, unsigned int a2)
{
  int v3; // w8
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w9
  google::protobuf::io::CodedOutputStream *v12; // x0
  int v13; // w0
  int v14; // w0
  unsigned int v15; // w9
  int v16; // w0

  v3 = *((_DWORD *)this + 11);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    if ( (v3 & 0xFF00) == 0 )
      goto LABEL_47;
    goto LABEL_44;
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
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 11);
      v4 = v13 + 1;
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
    v3 = *((_DWORD *)this + 11);
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
    v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v12 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) == 0 )
        goto LABEL_34;
    }
    else if ( (unsigned int)v12 >= 0x80 )
    {
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2);
      v3 = *((_DWORD *)this + 11);
      v4 += v16 + 1;
      if ( (v3 & 8) == 0 )
        goto LABEL_34;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) == 0 )
        goto LABEL_34;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_34;
  }
  v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
  if ( ((unsigned int)v10 & 0x80000000) != 0 )
  {
    v11 = 11;
  }
  else if ( (unsigned int)v10 >= 0x80 )
  {
    v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
    v3 = *((_DWORD *)this + 11);
    v11 = v14 + 1;
  }
  else
  {
    v11 = 2;
  }
  v4 += v11;
LABEL_34:
  v15 = v4 + 2;
  if ( (v3 & 0x10) == 0 )
    v15 = v4;
  if ( (v3 & 0x20) != 0 )
    v15 += 5;
  if ( (v3 & 0x40) != 0 )
    v15 += 5;
  if ( (v3 & 0x80) != 0 )
    result = v15 + 2;
  else
    result = v15;
  if ( (v3 & 0xFF00) != 0 )
  {
LABEL_44:
    if ( (v3 & 0x100) != 0 )
      result = (unsigned int)(result + 2);
    else
      result = (unsigned int)result;
  }
LABEL_47:
  *((_DWORD *)this + 2) = result;
  return result;
}

