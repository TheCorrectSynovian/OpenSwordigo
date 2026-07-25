/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030DE88
 * Mangled: _ZNK5Caver5Proto15HealthComponent8ByteSizeEv
 * Demangled: Caver::Proto::HealthComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *
 * Referenced strings: 27
 *   insn=0x000000000030DE98 string=0x000000000030DE9C "h"
 *   insn=0x000000000030DE9C string=0x000000000030DEA0 "H"
 *   insn=0x000000000030DEA0 string=0x000000000030DEA4 "h"
 *   insn=0x000000000030DEA4 string=0x000000000030DED0 "`"
 *   insn=0x000000000030DEA8 string=0x000000000030DEAC "("
 *   insn=0x000000000030DEAC string=0x000000000030DEB0 "`"
 *   insn=0x000000000030DEAC string=0x000000000030DF10 "h"
 *   insn=0x000000000030DEB4 string=0x000000000030DEEC "i"
 *   insn=0x000000000030DEB8 string=0x000000000030DEBC """
 *   insn=0x000000000030DEC4 string=0x000000000030DF0C "4"
 *   insn=0x000000000030DEC8 string=0x000000000030DECC "$"
 *   insn=0x000000000030DECC string=0x000000000030DF5C "t\n"
 *   insn=0x000000000030DED4 string=0x000000000030DEF4 "t"
 *   insn=0x000000000030DEE0 string=0x000000000030DEE4 "h"
 *   insn=0x000000000030DEE4 string=0x000000000030DEE8 "\n"
 *   insn=0x000000000030DEEC string=0x000000000030DEF0 ""
 *   insn=0x000000000030DF00 string=0x000000000030DF04 "h"@"
 *   insn=0x000000000030DF00 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030DF04 string=0x000000000030DF08 "\t"
 *   insn=0x000000000030DF14 string=0x000000000030DF18 "h"
 *   insn=0x000000000030DF18 string=0x000000000030DF1C ")"
 *   insn=0x000000000030DF20 string=0x000000000030DF24 ")"
 *   insn=0x000000000030DF24 string=0x000000000030DF28 "("
 *   insn=0x000000000030DF30 string=0x00000000001FCDD0 "0'"
 *   insn=0x000000000030DF38 string=0x000000000030DF3C "b"
 *   insn=0x000000000030DF50 string=0x000000000030DF54 ""
 *   insn=0x000000000030DF74 string=0x000000000030DF78 "h"@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HealthComponent::ByteSize(Caver::Proto::HealthComponent *this, unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  Caver::Proto::HealthComponent *v9; // x8
  unsigned int v10; // w1
  unsigned int v11; // w21
  int v12; // w0
  int v14; // w0

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
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
      v3 = *((_DWORD *)this + 8);
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
    if ( (*((_BYTE *)this + 32) & 2) == 0 )
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
    v3 = *((_DWORD *)this + 8);
    v6 = v8 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 3) )
      v9 = this;
    else
      v9 = (Caver::Proto::HealthComponent *)Caver::Proto::HealthComponent::default_instance_;
    v11 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v9 + 3));
    if ( v11 >= 0x80 )
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v11,
              v10);
    else
      v12 = 1;
    v4 += v11 + v12 + 1;
  }
LABEL_25:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

