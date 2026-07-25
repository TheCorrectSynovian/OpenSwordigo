/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C374
 * Mangled: _ZNK5Caver5Proto19BackgroundComponent8ByteSizeEv
 * Demangled: Caver::Proto::BackgroundComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 9
 *   insn=0x000000000031C380 string=0x000000000031C384 "hb@9h"
 *   insn=0x000000000031C384 string=0x000000000031C388 "h"
 *   insn=0x000000000031C388 string=0x000000000031C394 "t\n@"
 *   insn=0x000000000031C390 string=0x000000000031C3CC "`\n"
 *   insn=0x000000000031C398 string=0x000000000031C39C ""
 *   insn=0x000000000031C3A0 string=0x000000000031C3A4 "b"
 *   insn=0x000000000031C3AC string=0x000000000031C3C4 "("
 *   insn=0x000000000031C3B4 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000031C3BC string=0x000000000031C3C0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BackgroundComponent::ByteSize(
        Caver::Proto::BackgroundComponent *this,
        unsigned int a2)
{
  __int64 result; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  int v6; // w9

  if ( (*((_BYTE *)this + 24) & 1) != 0 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    v5 = *(_QWORD *)(*v4 - 24LL);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v5,
             a2);
      v5 = *(_QWORD *)(*v4 - 24LL);
    }
    else
    {
      v6 = 1;
    }
    result = (unsigned int)(v6 + v5 + 1);
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

