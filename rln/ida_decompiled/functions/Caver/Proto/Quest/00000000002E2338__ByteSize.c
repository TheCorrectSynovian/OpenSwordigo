/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E2338
 * Mangled: _ZNK5Caver5Proto5Quest8ByteSizeEv
 * Demangled: Caver::Proto::Quest::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002012E0  Caver::Proto::Quest::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 38
 *   insn=0x00000000002E2348 string=0x00000000002E234C "i"
 *   insn=0x00000000002E2354 string=0x00000000002E236C "t\n@"
 *   insn=0x00000000002E235C string=0x00000000002E2360 "#"
 *   insn=0x00000000002E235C string=0x00000000002E23AC "u"
 *   insn=0x00000000002E2360 string=0x00000000002E23EC "i"
 *   insn=0x00000000002E2364 string=0x00000000002E2368 "D"
 *   insn=0x00000000002E2368 string=0x00000000002E2478 "t\n"
 *   insn=0x00000000002E2370 string=0x00000000002E2374 ""
 *   insn=0x00000000002E2378 string=0x00000000002E237C "b"
 *   insn=0x00000000002E2380 string=0x00000000002E2384 ""
 *   insn=0x00000000002E2384 string=0x00000000002E23A0 "H"
 *   insn=0x00000000002E238C string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E2390 string=0x00000000002E2394 "i2@"
 *   insn=0x00000000002E2398 string=0x00000000002E239C ""
 *   insn=0x00000000002E23A4 string=0x00000000002E23A8 ")"
 *   insn=0x00000000002E23B0 string=0x00000000002E23B4 ""
 *   insn=0x00000000002E23B8 string=0x00000000002E23BC "b"
 *   insn=0x00000000002E23C0 string=0x00000000002E23C4 ""
 *   insn=0x00000000002E23C4 string=0x00000000002E23E0 "H"
 *   insn=0x00000000002E23D0 string=0x00000000002E23D4 "i2@"
 *   insn=0x00000000002E23D8 string=0x00000000002E23DC ""
 *   insn=0x00000000002E23EC string=0x00000000002E23F0 "i"
 *   insn=0x00000000002E23EC string=0x00000000002E23F8 "u"
 *   insn=0x00000000002E23F0 string=0x00000000002E23F4 "!"
 *   insn=0x00000000002E23F0 string=0x00000000002E243C "u"
 *   insn=0x00000000002E23FC string=0x00000000002E2400 ""
 *   insn=0x00000000002E2404 string=0x00000000002E2408 "b"
 *   insn=0x00000000002E240C string=0x00000000002E2410 ""
 *   insn=0x00000000002E2410 string=0x00000000002E242C "H"
 *   insn=0x00000000002E2414 string=0x00000000002E2418 "nO"
 *   insn=0x00000000002E241C string=0x00000000002E2420 "i2@"
 *   insn=0x00000000002E2424 string=0x00000000002E2428 ""
 *   insn=0x00000000002E2434 string=0x00000000002E2438 "\t"
 *   insn=0x00000000002E2440 string=0x00000000002E2444 ""
 *   insn=0x00000000002E2448 string=0x00000000002E244C "b"
 *   insn=0x00000000002E2454 string=0x00000000002E246C "("
 *   insn=0x00000000002E2458 string=0x00000000002E245C "]O"
 *   insn=0x00000000002E2464 string=0x00000000002E2468 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Quest::ByteSize(Caver::Proto::Quest *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  _QWORD *v9; // x21
  __int64 v10; // x8
  int v11; // w10
  int v12; // w0
  _QWORD *v13; // x21
  __int64 v14; // x8
  int v15; // w10
  int v16; // w0
  _QWORD *v17; // x21
  __int64 v18; // x8
  int v19; // w9

  LOBYTE(v3) = *((_BYTE *)this + 48);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 48) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 48) & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  v6 = *(_QWORD *)(*v5 - 24LL);
  if ( (unsigned int)v6 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v6,
           a2);
    v3 = *((_DWORD *)this + 12);
    v7 = v8;
    v6 = *(_QWORD *)(*v5 - 24LL);
  }
  else
  {
    v7 = 1;
  }
  v4 = v7 + v6 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_10:
    v9 = (_QWORD *)*((_QWORD *)this + 3);
    v10 = *(_QWORD *)(*v9 - 24LL);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v3 = *((_DWORD *)this + 12);
      v11 = v12;
      v10 = *(_QWORD *)(*v9 - 24LL);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + v10 + 1;
  }
LABEL_14:
  if ( (v3 & 4) == 0 )
  {
    if ( (v3 & 8) == 0 )
      goto LABEL_25;
    goto LABEL_21;
  }
  v13 = (_QWORD *)*((_QWORD *)this + 4);
  v14 = *(_QWORD *)(*v13 - 24LL);
  if ( (unsigned int)v14 >= 0x80 )
  {
    v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v14,
            a2);
    v3 = *((_DWORD *)this + 12);
    v15 = v16;
    v14 = *(_QWORD *)(*v13 - 24LL);
  }
  else
  {
    v15 = 1;
  }
  v4 += v15 + v14 + 1;
  if ( (v3 & 8) != 0 )
  {
LABEL_21:
    v17 = (_QWORD *)*((_QWORD *)this + 5);
    v18 = *(_QWORD *)(*v17 - 24LL);
    if ( (unsigned int)v18 >= 0x80 )
    {
      v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v18,
              a2);
      v18 = *(_QWORD *)(*v17 - 24LL);
    }
    else
    {
      v19 = 1;
    }
    v4 += v19 + v18 + 1;
  }
LABEL_25:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

