/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B598
 * Mangled: _ZNK5Caver5Proto19EntityInfoComponent8ByteSizeEv
 * Demangled: Caver::Proto::EntityInfoComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 9
 *   insn=0x000000000031B5A4 string=0x000000000031B5A8 "hb@9h"
 *   insn=0x000000000031B5A8 string=0x000000000031B5AC "h"
 *   insn=0x000000000031B5AC string=0x000000000031B5B8 "t\n@"
 *   insn=0x000000000031B5B4 string=0x000000000031B5F0 "`\n"
 *   insn=0x000000000031B5BC string=0x000000000031B5C0 ""
 *   insn=0x000000000031B5C4 string=0x000000000031B5C8 "b"
 *   insn=0x000000000031B5D0 string=0x000000000031B5E8 "("
 *   insn=0x000000000031B5D8 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000031B5E0 string=0x000000000031B5E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityInfoComponent::ByteSize(
        Caver::Proto::EntityInfoComponent *this,
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

