/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DC430
 * Mangled: _ZNK5Caver5Proto14MapNode_Portal8ByteSizeEv
 * Demangled: Caver::Proto::MapNode_Portal::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FCCB0  Caver::Proto::MapNode_Portal::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 28
 *   insn=0x00000000002DC43C string=0x00000000002DC440 "i"
 *   insn=0x00000000002DC440 string=0x00000000002DC444 "I"
 *   insn=0x00000000002DC444 string=0x00000000002DC448 "i"
 *   insn=0x00000000002DC448 string=0x00000000002DC474 "t\n@"
 *   insn=0x00000000002DC44C string=0x00000000002DC450 "\t"
 *   insn=0x00000000002DC450 string=0x00000000002DC454 "`"
 *   insn=0x00000000002DC458 string=0x00000000002DC4B8 "h"
 *   insn=0x00000000002DC460 string=0x00000000002DC4C0 "Dg"
 *   insn=0x00000000002DC46C string=0x00000000002DC470 "("
 *   insn=0x00000000002DC470 string=0x00000000002DC510 "`\n"
 *   insn=0x00000000002DC478 string=0x00000000002DC47C ""
 *   insn=0x00000000002DC480 string=0x00000000002DC484 "b"
 *   insn=0x00000000002DC488 string=0x00000000002DC48C ""
 *   insn=0x00000000002DC48C string=0x00000000002DC4A8 "H"
 *   insn=0x00000000002DC490 string=0x00000000002DC494 "Og"
 *   insn=0x00000000002DC494 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002DC498 string=0x00000000002DC49C "i&@"
 *   insn=0x00000000002DC4A0 string=0x00000000002DC4A4 ""
 *   insn=0x00000000002DC4AC string=0x00000000002DC4B0 ")"
 *   insn=0x00000000002DC4B0 string=0x00000000002DC4B4 ""
 *   insn=0x00000000002DC4C0 string=0x00000000002DC4C4 "i&@"
 *   insn=0x00000000002DC4C4 string=0x00000000002DC4C8 ""
 *   insn=0x00000000002DC4D0 string=0x00000000002DC4D4 "`"
 *   insn=0x00000000002DC4D8 string=0x00000000002DC4EC "h"
 *   insn=0x00000000002DC4E0 string=0x00000000002DC4F4 "7g"
 *   insn=0x00000000002DC4F4 string=0x00000000002DC4F8 "i&@"
 *   insn=0x00000000002DC4F8 string=0x00000000002DC4FC ""
 *   insn=0x00000000002DC504 string=0x00000000002DC508 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapNode_Portal::ByteSize(Caver::Proto::MapNode_Portal *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w8
  __int64 result; // x0
  _QWORD *v8; // x20
  __int64 v9; // x8
  int v10; // w10
  int v11; // w0
  int v12; // w0
  google::protobuf::io::CodedOutputStream *v13; // x0
  int v14; // w8
  int v15; // w0

  LOBYTE(v3) = *((_BYTE *)this + 36);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_26;
  }
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 2);
    v9 = *(_QWORD *)(*v8 - 24LL);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v9,
              a2);
      v3 = *((_DWORD *)this + 9);
      v10 = v11;
      v9 = *(_QWORD *)(*v8 - 24LL);
    }
    else
    {
      v10 = 1;
    }
    v4 = v10 + v9 + 1;
    if ( (v3 & 2) == 0 )
      goto LABEL_16;
    goto LABEL_4;
  }
  v4 = 0;
  if ( (*((_BYTE *)this + 36) & 2) != 0 )
  {
LABEL_4:
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v5 & 0x80000000) != 0 )
    {
      v6 = 11;
    }
    else if ( (unsigned int)v5 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
      v3 = *((_DWORD *)this + 9);
      v6 = v12 + 1;
    }
    else
    {
      v6 = 2;
    }
    v4 += v6;
  }
LABEL_16:
  if ( (v3 & 4) != 0 )
  {
    v13 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 7);
    if ( ((unsigned int)v13 & 0x80000000) != 0 )
    {
      v14 = 11;
    }
    else if ( (unsigned int)v13 >= 0x80 )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, a2);
      v3 = *((_DWORD *)this + 9);
      v14 = v15 + 1;
    }
    else
    {
      v14 = 2;
    }
    v4 += v14;
  }
  if ( (v3 & 8) != 0 )
    result = v4 + 2;
  else
    result = v4;
LABEL_26:
  *((_DWORD *)this + 2) = result;
  return result;
}

