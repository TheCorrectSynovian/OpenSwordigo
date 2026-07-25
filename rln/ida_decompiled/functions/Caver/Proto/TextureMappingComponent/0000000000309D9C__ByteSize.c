/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309D9C
 * Mangled: _ZNK5Caver5Proto23TextureMappingComponent8ByteSizeEv
 * Demangled: Caver::Proto::TextureMappingComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *
 * Referenced strings: 22
 *   insn=0x0000000000309DAC string=0x0000000000309DB0 "i"
 *   insn=0x0000000000309DB8 string=0x0000000000309DCC "t\n@"
 *   insn=0x0000000000309DC0 string=0x0000000000309E08 "\n"
 *   insn=0x0000000000309DC4 string=0x0000000000309DC8 "&"
 *   insn=0x0000000000309DC8 string=0x0000000000309E60 "t\n"
 *   insn=0x0000000000309DD0 string=0x0000000000309DD4 ""
 *   insn=0x0000000000309DD8 string=0x0000000000309DDC "b"
 *   insn=0x0000000000309DE0 string=0x0000000000309DE4 ""
 *   insn=0x0000000000309DE4 string=0x0000000000309E00 "H"
 *   insn=0x0000000000309DEC string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000309DF0 string=0x0000000000309DF4 "i*@"
 *   insn=0x0000000000309DF8 string=0x0000000000309DFC ""
 *   insn=0x0000000000309E00 string=0x0000000000309E04 ""
 *   insn=0x0000000000309E08 string=0x0000000000309E0C "?"
 *   insn=0x0000000000309E10 string=0x0000000000309E14 "i"
 *   insn=0x0000000000309E18 string=0x0000000000309E1C "h"
 *   insn=0x0000000000309E1C string=0x0000000000309E20 ")"
 *   insn=0x0000000000309E24 string=0x0000000000309E28 ")"
 *   insn=0x0000000000309E28 string=0x0000000000309E2C "("
 *   insn=0x0000000000309E34 string=0x00000000001FCDD0 "0'"
 *   insn=0x0000000000309E3C string=0x0000000000309E40 "b"
 *   insn=0x0000000000309E54 string=0x0000000000309E58 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::ByteSize(
        Caver::Proto::TextureMappingComponent *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w8
  unsigned int v5; // w20
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  Caver::Proto::TextureMappingComponent *v10; // x8
  unsigned int v11; // w1
  unsigned int v12; // w21
  int v13; // w0

  LOBYTE(v3) = *((_BYTE *)this + 40);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 40) & 1) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 2);
      v7 = *(_QWORD *)(*v6 - 24LL);
      if ( (unsigned int)v7 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
               a2);
        v3 = *((_DWORD *)this + 10);
        v8 = v9;
        v7 = *(_QWORD *)(*v6 - 24LL);
      }
      else
      {
        v8 = 1;
      }
      v4 = v8 + v7 + 1;
    }
    else
    {
      v4 = 0;
    }
    if ( (v3 & 2) != 0 )
      v5 = v4 + 5;
    else
      v5 = v4;
    if ( (v3 & 4) != 0 )
    {
      if ( *((_QWORD *)this + 4) )
        v10 = this;
      else
        v10 = (Caver::Proto::TextureMappingComponent *)Caver::Proto::TextureMappingComponent::default_instance_;
      v12 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v10 + 4));
      if ( v12 >= 0x80 )
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v12,
                v11);
      else
        v13 = 1;
      v5 += v12 + v13 + 1;
    }
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 2) = v5;
  return v5;
}

