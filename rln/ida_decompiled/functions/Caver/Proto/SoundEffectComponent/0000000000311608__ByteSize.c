/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000311608
 * Mangled: _ZNK5Caver5Proto20SoundEffectComponent8ByteSizeEv
 * Demangled: Caver::Proto::SoundEffectComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 16
 *   insn=0x0000000000311614 string=0x0000000000311618 "i"
 *   insn=0x0000000000311620 string=0x0000000000311634 "t\n@"
 *   insn=0x0000000000311628 string=0x0000000000311670 "\n"
 *   insn=0x0000000000311630 string=0x0000000000311688 "`\n"
 *   insn=0x0000000000311638 string=0x000000000031163C ""
 *   insn=0x0000000000311640 string=0x0000000000311644 "b"
 *   insn=0x0000000000311648 string=0x000000000031164C ""
 *   insn=0x000000000031164C string=0x0000000000311668 "H"
 *   insn=0x0000000000311654 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000311658 string=0x000000000031165C "i"@"
 *   insn=0x0000000000311660 string=0x0000000000311664 ""
 *   insn=0x0000000000311668 string=0x000000000031166C ""
 *   insn=0x0000000000311670 string=0x0000000000311674 "?"
 *   insn=0x0000000000311674 string=0x0000000000311678 ""
 *   insn=0x0000000000311678 string=0x000000000031167C "\n"
 *   insn=0x000000000031167C string=0x0000000000311680 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffectComponent::ByteSize(
        Caver::Proto::SoundEffectComponent *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w8
  __int64 result; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0

  LOBYTE(v3) = *((_BYTE *)this + 32);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 2);
      v7 = *(_QWORD *)(*v6 - 24LL);
      if ( (unsigned int)v7 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
               a2);
        v3 = *((_DWORD *)this + 8);
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
      v4 += 5;
    if ( (v3 & 4) != 0 )
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

