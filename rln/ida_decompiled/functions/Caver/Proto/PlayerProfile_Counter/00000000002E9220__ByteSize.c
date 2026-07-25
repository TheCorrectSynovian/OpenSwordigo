/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E9220
 * Mangled: _ZNK5Caver5Proto21PlayerProfile_Counter8ByteSizeEv
 * Demangled: Caver::Proto::PlayerProfile_Counter::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 16
 *   insn=0x00000000002E922C string=0x00000000002E9230 "ir@9I"
 *   insn=0x00000000002E9230 string=0x00000000002E9234 "I"
 *   insn=0x00000000002E9234 string=0x00000000002E9238 "i"
 *   insn=0x00000000002E9238 string=0x00000000002E9264 "t\n@"
 *   insn=0x00000000002E9240 string=0x00000000002E9244 "`"
 *   insn=0x00000000002E9240 string=0x00000000002E92BC "t\n"
 *   insn=0x00000000002E9248 string=0x00000000002E92A8 "h"
 *   insn=0x00000000002E9268 string=0x00000000002E926C ""
 *   insn=0x00000000002E9270 string=0x00000000002E9274 "b"
 *   insn=0x00000000002E9278 string=0x00000000002E927C ""
 *   insn=0x00000000002E927C string=0x00000000002E9298 "H"
 *   insn=0x00000000002E9284 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E9288 string=0x00000000002E928C "i"
 *   insn=0x00000000002E9290 string=0x00000000002E9294 ""
 *   insn=0x00000000002E929C string=0x00000000002E92A0 ")"
 *   insn=0x00000000002E92B0 string=0x00000000002E92B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile_Counter::ByteSize(
        Caver::Proto::PlayerProfile_Counter *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w8
  _QWORD *v7; // x20
  __int64 v8; // x8
  int v9; // w10
  int v10; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_16;
  }
  if ( (*((_BYTE *)this + 28) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 28) & 2) == 0 )
      goto LABEL_16;
    goto LABEL_4;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  v8 = *(_QWORD *)(*v7 - 24LL);
  if ( (unsigned int)v8 >= 0x80 )
  {
    v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v8,
            a2);
    v3 = *((_DWORD *)this + 7);
    v9 = v10;
    v8 = *(_QWORD *)(*v7 - 24LL);
  }
  else
  {
    v9 = 1;
  }
  v4 = v9 + v8 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_4:
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v5 & 0x80000000) != 0 )
    {
      v6 = 11;
    }
    else if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2) + 1;
    }
    else
    {
      v6 = 2;
    }
    v4 += v6;
  }
LABEL_16:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

