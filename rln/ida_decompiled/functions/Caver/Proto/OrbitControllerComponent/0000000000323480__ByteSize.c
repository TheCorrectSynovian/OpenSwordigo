/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323480
 * Mangled: _ZNK5Caver5Proto24OrbitControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::OrbitControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 16
 *   insn=0x000000000032348C string=0x0000000000323490 "h"
 *   insn=0x0000000000323498 string=0x00000000003234AC "\t"
 *   insn=0x00000000003234A0 string=0x00000000003234F4 "*"
 *   insn=0x00000000003234A8 string=0x000000000032350C "`\n"
 *   insn=0x00000000003234AC string=0x00000000003234B0 "h\n@"
 *   insn=0x00000000003234B0 string=0x00000000003234B4 ")}D"
 *   insn=0x00000000003234B8 string=0x00000000003234BC ")"
 *   insn=0x00000000003234BC string=0x00000000003234C0 "("
 *   insn=0x00000000003234D0 string=0x00000000003234D4 "b"
 *   insn=0x00000000003234DC string=0x00000000003234E8 "h"@"
 *   insn=0x00000000003234E0 string=0x00000000003234E4 ";K"
 *   insn=0x00000000003234E4 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003234EC string=0x00000000003234F0 ")"
 *   insn=0x00000000003234F8 string=0x00000000003234FC ")"
 *   insn=0x00000000003234FC string=0x0000000000323500 "*"
 *   insn=0x0000000000323504 string=0x0000000000323508 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::ByteSize(Caver::Proto::OrbitControllerComponent *this)
{
  int v2; // w8
  unsigned int v3; // w9
  __int64 result; // x0
  Caver::Proto::OrbitControllerComponent *v5; // x8
  unsigned int v6; // w1
  unsigned int v7; // w20
  int v8; // w0

  LOBYTE(v2) = *((_BYTE *)this + 32);
  if ( (_BYTE)v2 )
  {
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
        v5 = this;
      else
        v5 = (Caver::Proto::OrbitControllerComponent *)Caver::Proto::OrbitControllerComponent::default_instance_;
      v7 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v5 + 2));
      if ( v7 >= 0x80 )
        v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v7,
               v6);
      else
        v8 = 1;
      v2 = *((_DWORD *)this + 8);
      v3 = v7 + v8 + 1;
    }
    else
    {
      v3 = 0;
    }
    if ( (v2 & 2) != 0 )
      v3 += 5;
    if ( (v2 & 4) != 0 )
      result = v3 + 5;
    else
      result = v3;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

