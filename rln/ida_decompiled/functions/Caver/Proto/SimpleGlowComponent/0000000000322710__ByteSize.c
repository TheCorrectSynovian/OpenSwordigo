/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322710
 * Mangled: _ZNK5Caver5Proto19SimpleGlowComponent8ByteSizeEv
 * Demangled: Caver::Proto::SimpleGlowComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *
 * Referenced strings: 34
 *   insn=0x0000000000322720 string=0x0000000000322724 "h"
 *   insn=0x000000000032272C string=0x0000000000322740 "\t"
 *   insn=0x0000000000322734 string=0x0000000000322788 "*"
 *   insn=0x0000000000322738 string=0x000000000032273C "@"
 *   insn=0x000000000032273C string=0x000000000032283C "`\n"
 *   insn=0x0000000000322740 string=0x0000000000322744 "h\n@"
 *   insn=0x0000000000322744 string=0x0000000000322748 ")"
 *   insn=0x000000000032274C string=0x0000000000322750 ")"
 *   insn=0x0000000000322750 string=0x0000000000322754 "("
 *   insn=0x000000000032275C string=0x00000000001F9DC0 "0'"
 *   insn=0x0000000000322764 string=0x0000000000322768 "b"
 *   insn=0x0000000000322770 string=0x000000000032277C "h:@"
 *   insn=0x0000000000322778 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000322780 string=0x0000000000322784 ")"
 *   insn=0x000000000032278C string=0x0000000000322790 "4"
 *   insn=0x0000000000322794 string=0x0000000000322798 "`"
 *   insn=0x000000000032279C string=0x00000000003227B0 "i"
 *   insn=0x00000000003227AC string=0x00000000003227C4 "4"
 *   insn=0x00000000003227B8 string=0x00000000003227BC "h:@"
 *   insn=0x00000000003227BC string=0x00000000003227C0 "\t"
 *   insn=0x00000000003227D4 string=0x00000000003227D8 "\t"
 *   insn=0x00000000003227D8 string=0x00000000003227DC "h"
 *   insn=0x00000000003227DC string=0x00000000003227E0 ")"
 *   insn=0x00000000003227E4 string=0x00000000003227E8 ")"
 *   insn=0x00000000003227E8 string=0x00000000003227EC "("
 *   insn=0x00000000003227F0 string=0x00000000003227F4 "wi"
 *   insn=0x00000000003227F4 string=0x00000000001FCDD0 "0'"
 *   insn=0x00000000003227FC string=0x0000000000322800 "b"
 *   insn=0x0000000000322808 string=0x0000000000322814 "h:@"
 *   insn=0x000000000032280C string=0x0000000000322810 "pN"
 *   insn=0x0000000000322818 string=0x000000000032281C ")"
 *   insn=0x000000000032281C string=0x0000000000322820 "5"
 *   insn=0x000000000032282C string=0x0000000000322830 "*"
 *   insn=0x0000000000322834 string=0x0000000000322838 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SimpleGlowComponent::ByteSize(
        Caver::Proto::SimpleGlowComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w9
  __int64 result; // x0
  Caver::Proto::SimpleGlowComponent *v6; // x8
  unsigned int v7; // w20
  int v8; // w0
  int v9; // w20
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w9
  int v12; // w0
  int v13; // w21
  Caver::Proto::SimpleGlowComponent *v14; // x8
  unsigned int v15; // w1
  unsigned int v16; // w20
  int v17; // w0
  unsigned int v18; // w9

  LOBYTE(v3) = *((_BYTE *)this + 56);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 56) & 1) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
        v6 = this;
      else
        v6 = (Caver::Proto::SimpleGlowComponent *)Caver::Proto::SimpleGlowComponent::default_instance_;
      v7 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v6 + 2));
      if ( v7 >= 0x80 )
        v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v7,
               a2);
      else
        v8 = 1;
      v3 = *((_DWORD *)this + 14);
      v4 = v7 + v8 + 1;
    }
    else
    {
      v4 = 0;
    }
    if ( (v3 & 2) != 0 )
      v9 = v4 + 5;
    else
      v9 = v4;
    if ( (v3 & 4) != 0 )
    {
      v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 7);
      if ( ((unsigned int)v10 & 0x80000000) != 0 )
      {
        v11 = 11;
      }
      else if ( (unsigned int)v10 >= 0x80 )
      {
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
        v3 = *((_DWORD *)this + 14);
        v11 = v12 + 1;
      }
      else
      {
        v11 = 2;
      }
      v9 += v11;
    }
    if ( (v3 & 8) != 0 )
      v13 = v9 + 5;
    else
      v13 = v9;
    if ( (v3 & 0x10) != 0 )
    {
      if ( *((_QWORD *)this + 5) )
        v14 = this;
      else
        v14 = (Caver::Proto::SimpleGlowComponent *)Caver::Proto::SimpleGlowComponent::default_instance_;
      v16 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v14 + 5));
      if ( v16 >= 0x80 )
        v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v16,
                v15);
      else
        v17 = 1;
      v3 = *((_DWORD *)this + 14);
      v13 += v16 + v17 + 1;
    }
    v18 = v13 + 5;
    if ( (v3 & 0x20) == 0 )
      v18 = v13;
    if ( (v3 & 0x40) != 0 )
      result = v18 + 5;
    else
      result = v18;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

