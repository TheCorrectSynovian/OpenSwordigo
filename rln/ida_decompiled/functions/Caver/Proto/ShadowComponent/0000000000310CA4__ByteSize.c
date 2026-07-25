/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310CA4
 * Mangled: _ZNK5Caver5Proto15ShadowComponent8ByteSizeEv
 * Demangled: Caver::Proto::ShadowComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 13
 *   insn=0x0000000000310CB4 string=0x0000000000310CB8 "h"
 *   insn=0x0000000000310CBC string=0x0000000000310CC0 "\t"
 *   insn=0x0000000000310CC4 string=0x0000000000310CC8 ")"
 *   insn=0x0000000000310CC8 string=0x0000000000310CCC "*"
 *   insn=0x0000000000310CD0 string=0x0000000000310CD4 "4"
 *   insn=0x0000000000310CD8 string=0x0000000000310D2C "t\n"
 *   insn=0x0000000000310CDC string=0x0000000000310CE0 "h"
 *   insn=0x0000000000310CE0 string=0x0000000000310CE4 ")-A"
 *   insn=0x0000000000310CE8 string=0x0000000000310CEC ")"
 *   insn=0x0000000000310CEC string=0x0000000000310CF0 "("
 *   insn=0x0000000000310D18 string=0x0000000000310D1C "-"
 *   insn=0x0000000000310D1C string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000310D20 string=0x0000000000310D24 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShadowComponent::ByteSize(Caver::Proto::ShadowComponent *this)
{
  int v2; // w8
  unsigned int v3; // w20
  Caver::Proto::ShadowComponent *v4; // x8
  unsigned int v5; // w1
  unsigned int v6; // w21
  int v7; // w0

  v2 = *((unsigned __int8 *)this + 32);
  if ( *((_BYTE *)this + 32) )
  {
    if ( (v2 & 2) != 0 )
      v3 = ((v2 << 31 >> 31) & 5) + 5;
    else
      v3 = (v2 << 31 >> 31) & 5;
    if ( (v2 & 4) != 0 )
    {
      if ( *((_QWORD *)this + 3) )
        v4 = this;
      else
        v4 = (Caver::Proto::ShadowComponent *)Caver::Proto::ShadowComponent::default_instance_;
      v6 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v4 + 3));
      if ( v6 >= 0x80 )
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v6,
               v5);
      else
        v7 = 1;
      v3 += v6 + v7 + 1;
    }
  }
  else
  {
    v3 = 0;
  }
  *((_DWORD *)this + 2) = v3;
  return v3;
}

