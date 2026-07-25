/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F398
 * Mangled: _ZNK5Caver5Proto18TouchableComponent8ByteSizeEv
 * Demangled: Caver::Proto::TouchableComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 14
 *   insn=0x000000000032F3A8 string=0x000000000032F3AC "hb@9H"
 *   insn=0x000000000032F3AC string=0x000000000032F3B0 "H"
 *   insn=0x000000000032F3B0 string=0x000000000032F3B4 "\t"
 *   insn=0x000000000032F3B8 string=0x000000000032F3BC "4"
 *   insn=0x000000000032F3C0 string=0x000000000032F414 "t\n"
 *   insn=0x000000000032F3C4 string=0x000000000032F3C8 "h\n@"
 *   insn=0x000000000032F3C8 string=0x000000000032F3CC ")"
 *   insn=0x000000000032F3D0 string=0x000000000032F3D4 ")"
 *   insn=0x000000000032F3D4 string=0x000000000032F3D8 "("
 *   insn=0x000000000032F3DC string=0x000000000032F3E0 "<"
 *   insn=0x000000000032F3E0 string=0x00000000001F34D0 "P'"
 *   insn=0x000000000032F400 string=0x000000000032F404 "s"
 *   insn=0x000000000032F404 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032F408 string=0x000000000032F40C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TouchableComponent::ByteSize(Caver::Proto::TouchableComponent *this)
{
  int v2; // w8
  unsigned int v3; // w20
  Caver::Proto::TouchableComponent *v4; // x8
  unsigned int v5; // w1
  unsigned int v6; // w21
  int v7; // w0

  v2 = *((unsigned __int8 *)this + 24);
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (v2 << 31 >> 31) & 5;
    if ( (v2 & 2) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
        v4 = this;
      else
        v4 = (Caver::Proto::TouchableComponent *)Caver::Proto::TouchableComponent::default_instance_;
      v6 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v4 + 2));
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

