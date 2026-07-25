/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319FFC
 * Mangled: _ZNK5Caver5Proto25EntityControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::EntityControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 51
 *   insn=0x000000000031A008 string=0x000000000031A00C "h"
 *   insn=0x000000000031A00C string=0x000000000031A010 "H"
 *   insn=0x000000000031A010 string=0x000000000031A014 "h"
 *   insn=0x000000000031A014 string=0x000000000031A040 "`"
 *   insn=0x000000000031A018 string=0x000000000031A01C "("
 *   insn=0x000000000031A01C string=0x000000000031A020 "`"
 *   insn=0x000000000031A01C string=0x000000000031A080 ""
 *   insn=0x000000000031A024 string=0x000000000031A05C "i"
 *   insn=0x000000000031A028 string=0x000000000031A02C """
 *   insn=0x000000000031A02C string=0x000000000031A070 "Xp"
 *   insn=0x000000000031A034 string=0x000000000031A07C "4"
 *   insn=0x000000000031A038 string=0x000000000031A03C "K"
 *   insn=0x000000000031A03C string=0x000000000031A168 "t\n"
 *   insn=0x000000000031A044 string=0x000000000031A064 "t"
 *   insn=0x000000000031A048 string=0x000000000031A04C "b"
 *   insn=0x000000000031A04C string=0x000000000031A0D8 ">p"
 *   insn=0x000000000031A050 string=0x000000000031A054 "h"
 *   insn=0x000000000031A054 string=0x000000000031A058 "\n"
 *   insn=0x000000000031A05C string=0x000000000031A060 ""
 *   insn=0x000000000031A070 string=0x000000000031A074 "h.@"
 *   insn=0x000000000031A070 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000031A074 string=0x000000000031A078 "\t"
 *   insn=0x000000000031A080 string=0x000000000031A0A0 "`"
 *   insn=0x000000000031A084 string=0x000000000031A088 "`"
 *   insn=0x000000000031A08C string=0x000000000031A0C0 "i"
 *   insn=0x000000000031A094 string=0x000000000031A0EC "9p"
 *   insn=0x000000000031A09C string=0x000000000031A0F8 "4"
 *   insn=0x000000000031A0A0 string=0x000000000031A0A4 " "
 *   insn=0x000000000031A0A4 string=0x000000000031A0C8 "i"
 *   insn=0x000000000031A0AC string=0x000000000031A144 "#p"
 *   insn=0x000000000031A0B0 string=0x000000000031A0B4 "4"
 *   insn=0x000000000031A0C0 string=0x000000000031A0C4 ""
 *   insn=0x000000000031A0C8 string=0x000000000031A0CC "4"
 *   insn=0x000000000031A0D0 string=0x000000000031A0D4 "\n"
 *   insn=0x000000000031A0D8 string=0x000000000031A0DC "h.@"
 *   insn=0x000000000031A0EC string=0x000000000031A0F0 "h.@"
 *   insn=0x000000000031A0F0 string=0x000000000031A0F4 "\t"
 *   insn=0x000000000031A108 string=0x000000000031A10C "*"
 *   insn=0x000000000031A10C string=0x000000000031A110 ")"
 *   insn=0x000000000031A110 string=0x000000000031A114 "*"
 *   insn=0x000000000031A118 string=0x000000000031A11C "4"
 *   insn=0x000000000031A11C string=0x000000000031A120 "H"
 *   insn=0x000000000031A120 string=0x000000000031A124 "`*@"
 *   insn=0x000000000031A128 string=0x000000000031A13C "h"
 *   insn=0x000000000031A12C string=0x000000000031A130 "b"
 *   insn=0x000000000031A134 string=0x000000000031A138 ""
 *   insn=0x000000000031A13C string=0x000000000031A140 "\t"
 *   insn=0x000000000031A144 string=0x000000000031A148 "h.@"
 *   insn=0x000000000031A148 string=0x000000000031A14C "\t"
 *   insn=0x000000000031A14C string=0x000000000031A150 "4"
 *   insn=0x000000000031A15C string=0x000000000031A160 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityControllerComponent::ByteSize(
        Caver::Proto::EntityControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  unsigned int v7; // w20
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w9
  google::protobuf::io::CodedOutputStream *v12; // x0
  int v13; // w0
  int v14; // w0
  int v15; // w9
  google::protobuf::io::CodedOutputStream *v16; // x0
  int v17; // w8
  int v18; // w0

  LOBYTE(v3) = *((_BYTE *)this + 44);
  if ( !(_BYTE)v3 )
  {
    v7 = 0;
    goto LABEL_49;
  }
  if ( (*((_BYTE *)this + 44) & 1) != 0 )
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
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 11);
      v4 = v13 + 1;
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
    if ( (*((_BYTE *)this + 44) & 2) == 0 )
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
    v3 = *((_DWORD *)this + 11);
    v6 = v9 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v12 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 8) != 0 )
        goto LABEL_19;
    }
    else if ( (unsigned int)v12 >= 0x80 )
    {
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2);
      v3 = *((_DWORD *)this + 11);
      v4 += v18 + 1;
      if ( (v3 & 8) != 0 )
        goto LABEL_19;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 8) != 0 )
        goto LABEL_19;
    }
  }
  else if ( (v3 & 8) != 0 )
  {
LABEL_19:
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
  }
  v15 = v4 + 5;
  if ( (v3 & 0x10) == 0 )
    v15 = v4;
  if ( (v3 & 0x20) != 0 )
    v15 += 5;
  if ( (v3 & 0x40) != 0 )
    v7 = v15 + 5;
  else
    v7 = v15;
  if ( (v3 & 0x80) != 0 )
  {
    v16 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 10);
    if ( ((unsigned int)v16 & 0x80000000) != 0 )
    {
      v17 = 11;
    }
    else if ( (unsigned int)v16 >= 0x80 )
    {
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, a2) + 1;
    }
    else
    {
      v17 = 2;
    }
    v7 += v17;
  }
LABEL_49:
  *((_DWORD *)this + 2) = v7;
  return v7;
}

