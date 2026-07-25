/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D548
 * Mangled: _ZNK5Caver5Proto15PortalComponent8ByteSizeEv
 * Demangled: Caver::Proto::PortalComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 28
 *   insn=0x000000000032D558 string=0x000000000032D55C "i"
 *   insn=0x000000000032D564 string=0x000000000032D57C "`"
 *   insn=0x000000000032D568 string=0x000000000032D56C "I"
 *   insn=0x000000000032D56C string=0x000000000032D570 "!"
 *   insn=0x000000000032D56C string=0x000000000032D5B4 "u\n@"
 *   insn=0x000000000032D570 string=0x000000000032D5F4 ")"
 *   insn=0x000000000032D574 string=0x000000000032D578 "3"
 *   insn=0x000000000032D578 string=0x000000000032D644 "`\n"
 *   insn=0x000000000032D580 string=0x000000000032D598 "t"
 *   insn=0x000000000032D588 string=0x000000000032D5A4 "#"
 *   insn=0x000000000032D58C string=0x000000000032D590 ")"
 *   insn=0x000000000032D5A4 string=0x000000000032D5A8 "i&@"
 *   insn=0x000000000032D5A4 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032D5AC string=0x000000000032D5B0 ")"
 *   insn=0x000000000032D5B8 string=0x000000000032D5BC ""
 *   insn=0x000000000032D5C0 string=0x000000000032D5C4 "b"
 *   insn=0x000000000032D5C8 string=0x000000000032D5CC ""
 *   insn=0x000000000032D5CC string=0x000000000032D5E8 "H"
 *   insn=0x000000000032D5D8 string=0x000000000032D5DC "i&@"
 *   insn=0x000000000032D5E0 string=0x000000000032D5E4 ""
 *   insn=0x000000000032D5F4 string=0x000000000032D5F8 "u"
 *   insn=0x000000000032D5FC string=0x000000000032D600 ""
 *   insn=0x000000000032D604 string=0x000000000032D608 "b"
 *   insn=0x000000000032D60C string=0x000000000032D610 ""
 *   insn=0x000000000032D610 string=0x000000000032D62C "H"
 *   insn=0x000000000032D61C string=0x000000000032D620 "i&@"
 *   insn=0x000000000032D624 string=0x000000000032D628 ""
 *   insn=0x000000000032D638 string=0x000000000032D63C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalComponent::ByteSize(Caver::Proto::PortalComponent *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  _QWORD *v8; // x21
  __int64 v9; // x8
  int v10; // w10
  int v11; // w0
  _QWORD *v12; // x21
  __int64 v13; // x8
  int v14; // w10
  int v15; // w0

  LOBYTE(v3) = *((_BYTE *)this + 36);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 36) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 36) & 2) == 0 )
      goto LABEL_17;
LABEL_13:
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
    v4 += v10 + v9 + 1;
    goto LABEL_17;
  }
  v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
  if ( ((unsigned int)v6 & 0x80000000) != 0 )
  {
    v4 = 11;
    if ( (v3 & 2) == 0 )
      goto LABEL_17;
    goto LABEL_13;
  }
  if ( (unsigned int)v6 < 0x80 )
  {
    v4 = 2;
    if ( (v3 & 2) == 0 )
      goto LABEL_17;
    goto LABEL_13;
  }
  v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
  v3 = *((_DWORD *)this + 9);
  v4 = v7 + 1;
  if ( (v3 & 2) != 0 )
    goto LABEL_13;
LABEL_17:
  if ( (v3 & 4) != 0 )
  {
    v12 = (_QWORD *)*((_QWORD *)this + 3);
    v13 = *(_QWORD *)(*v12 - 24LL);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v13,
              a2);
      v3 = *((_DWORD *)this + 9);
      v14 = v15;
      v13 = *(_QWORD *)(*v12 - 24LL);
    }
    else
    {
      v14 = 1;
    }
    v4 += v14 + v13 + 1;
  }
  if ( (v3 & 8) != 0 )
    result = v4 + 2;
  else
    result = v4;
LABEL_25:
  *((_DWORD *)this + 2) = result;
  return result;
}

