/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A860
 * Mangled: _ZNK5Caver5Proto18WaterMeshComponent8ByteSizeEv
 * Demangled: Caver::Proto::WaterMeshComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 41
 *   insn=0x000000000030A870 string=0x000000000030A874 "h"
 *   insn=0x000000000030A874 string=0x000000000030A878 "H"
 *   insn=0x000000000030A878 string=0x000000000030A87C "h"
 *   insn=0x000000000030A87C string=0x000000000030A8A8 "`"
 *   insn=0x000000000030A880 string=0x000000000030A884 "("
 *   insn=0x000000000030A884 string=0x000000000030A888 "`"
 *   insn=0x000000000030A884 string=0x000000000030A8E8 "h"
 *   insn=0x000000000030A88C string=0x000000000030A8C4 "i"
 *   insn=0x000000000030A890 string=0x000000000030A894 """
 *   insn=0x000000000030A894 string=0x000000000030A8D8 ">"
 *   insn=0x000000000030A89C string=0x000000000030A8E4 "4"
 *   insn=0x000000000030A8A0 string=0x000000000030A8A4 ":"
 *   insn=0x000000000030A8A4 string=0x000000000030A98C "t\n"
 *   insn=0x000000000030A8AC string=0x000000000030A8CC "t"
 *   insn=0x000000000030A8B4 string=0x000000000030A9A4 ""
 *   insn=0x000000000030A8B8 string=0x000000000030A8BC "h"
 *   insn=0x000000000030A8BC string=0x000000000030A8C0 "\n"
 *   insn=0x000000000030A8C4 string=0x000000000030A8C8 ""
 *   insn=0x000000000030A8D8 string=0x000000000030A8DC "h*@"
 *   insn=0x000000000030A8D8 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030A8DC string=0x000000000030A8E0 "\t"
 *   insn=0x000000000030A8EC string=0x000000000030A8F0 "'"
 *   insn=0x000000000030A8F4 string=0x000000000030A8F8 "h"
 *   insn=0x000000000030A8F8 string=0x000000000030A8FC ")"
 *   insn=0x000000000030A900 string=0x000000000030A904 ")"
 *   insn=0x000000000030A904 string=0x000000000030A908 "("
 *   insn=0x000000000030A90C string=0x000000000030A910 ","
 *   insn=0x000000000030A910 string=0x00000000001F9DC0 "0'"
 *   insn=0x000000000030A918 string=0x000000000030A91C "b"
 *   insn=0x000000000030A924 string=0x000000000030A930 "h*@"
 *   insn=0x000000000030A928 string=0x000000000030A92C ")"
 *   insn=0x000000000030A934 string=0x000000000030A938 ")"
 *   insn=0x000000000030A938 string=0x000000000030A93C "4"
 *   insn=0x000000000030A93C string=0x000000000030A940 "h"
 *   insn=0x000000000030A944 string=0x000000000030A948 "h"
 *   insn=0x000000000030A948 string=0x000000000030A94C ")"
 *   insn=0x000000000030A950 string=0x000000000030A954 ")"
 *   insn=0x000000000030A954 string=0x000000000030A958 "("
 *   insn=0x000000000030A968 string=0x000000000030A96C "b"
 *   insn=0x000000000030A980 string=0x000000000030A984 ""
 *   insn=0x000000000030A9A4 string=0x000000000030A9A8 "h*@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::ByteSize(Caver::Proto::WaterMeshComponent *this, unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  Caver::Proto::WaterMeshComponent *v9; // x8
  unsigned int v10; // w1
  unsigned int v11; // w21
  int v12; // w0
  Caver::Proto::WaterMeshComponent *v13; // x8
  unsigned int v14; // w1
  unsigned int v15; // w21
  int v16; // w0
  int v18; // w0

  LOBYTE(v3) = *((_BYTE *)this + 40);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_34;
  }
  if ( (*((_BYTE *)this + 40) & 1) != 0 )
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
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 10);
      v4 = v18 + 1;
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
    if ( (*((_BYTE *)this + 40) & 2) == 0 )
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
    v3 = *((_DWORD *)this + 10);
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
      goto LABEL_34;
    goto LABEL_27;
  }
  if ( *((_QWORD *)this + 3) )
    v9 = this;
  else
    v9 = (Caver::Proto::WaterMeshComponent *)Caver::Proto::WaterMeshComponent::default_instance_;
  v11 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v9 + 3));
  if ( v11 >= 0x80 )
    v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v11,
            v10);
  else
    v12 = 1;
  v4 += v11 + v12 + 1;
  if ( (*((_DWORD *)this + 10) & 8) != 0 )
  {
LABEL_27:
    if ( *((_QWORD *)this + 4) )
      v13 = this;
    else
      v13 = (Caver::Proto::WaterMeshComponent *)Caver::Proto::WaterMeshComponent::default_instance_;
    v15 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v13 + 4));
    if ( v15 >= 0x80 )
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v15,
              v14);
    else
      v16 = 1;
    v4 += v15 + v16 + 1;
  }
LABEL_34:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

