/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031FA78
 * Mangled: _ZNK5Caver5Proto17ParticleComponent8ByteSizeEv
 * Demangled: Caver::Proto::ParticleComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 13
 *   insn=0x000000000031FA84 string=0x000000000031FA88 "ir@9"
 *   insn=0x000000000031FA90 string=0x000000000031FAA4 "t\n@"
 *   insn=0x000000000031FA98 string=0x000000000031FAE0 "\n"
 *   insn=0x000000000031FAA0 string=0x000000000031FAEC "`\n"
 *   insn=0x000000000031FAA8 string=0x000000000031FAAC ""
 *   insn=0x000000000031FAB0 string=0x000000000031FAB4 "b"
 *   insn=0x000000000031FAB8 string=0x000000000031FABC ""
 *   insn=0x000000000031FABC string=0x000000000031FAD8 "H"
 *   insn=0x000000000031FAC4 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000031FAC8 string=0x000000000031FACC "i"
 *   insn=0x000000000031FAD0 string=0x000000000031FAD4 ""
 *   insn=0x000000000031FAD8 string=0x000000000031FADC ""
 *   insn=0x000000000031FAE0 string=0x000000000031FAE4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleComponent::ByteSize(Caver::Proto::ParticleComponent *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w8
  __int64 result; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 28) & 1) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 2);
      v7 = *(_QWORD *)(*v6 - 24LL);
      if ( (unsigned int)v7 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
               a2);
        v3 = *((_DWORD *)this + 7);
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
      result = v4 + 5;
    else
      result = v4;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

