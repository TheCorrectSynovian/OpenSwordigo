/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F23A8
 * Mangled: _ZNK5Caver5Proto10LevelState8ByteSizeEv
 * Demangled: Caver::Proto::LevelState::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002029A0  Caver::Proto::LevelState::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 48
 *   insn=0x00000000002F23BC string=0x00000000002F23C0 "i"
 *   insn=0x00000000002F23C8 string=0x00000000002F23DC "t\n@"
 *   insn=0x00000000002F23D0 string=0x00000000002F2418 "\n\t"
 *   insn=0x00000000002F23D4 string=0x00000000002F23D8 "Z"
 *   insn=0x00000000002F23D8 string=0x00000000002F2540 "t\n"
 *   insn=0x00000000002F23E0 string=0x00000000002F23E4 ""
 *   insn=0x00000000002F23E8 string=0x00000000002F23EC "b"
 *   insn=0x00000000002F23F0 string=0x00000000002F23F4 ""
 *   insn=0x00000000002F23F4 string=0x00000000002F2410 "H"
 *   insn=0x00000000002F23F8 string=0x00000000002F23FC "u"
 *   insn=0x00000000002F23FC string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002F2400 string=0x00000000002F2404 "i2@"
 *   insn=0x00000000002F2408 string=0x00000000002F240C ""
 *   insn=0x00000000002F2410 string=0x00000000002F2414 ""
 *   insn=0x00000000002F2418 string=0x00000000002F241C "?"
 *   insn=0x00000000002F2420 string=0x00000000002F2424 ")"
 *   insn=0x00000000002F2428 string=0x00000000002F2504 "`*@"
 *   insn=0x00000000002F242C string=0x00000000002F2430 "`.@"
 *   insn=0x00000000002F2434 string=0x00000000002F24C8 "h"
 *   insn=0x00000000002F243C string=0x00000000002F2534 "'"
 *   insn=0x00000000002F2440 string=0x00000000002F2444 ">"
 *   insn=0x00000000002F2448 string=0x00000000002F244C "h"
 *   insn=0x00000000002F244C string=0x00000000002F2450 ")!A"
 *   insn=0x00000000002F2454 string=0x00000000002F2458 ")"
 *   insn=0x00000000002F2458 string=0x00000000002F245C "("
 *   insn=0x00000000002F2464 string=0x00000000002F2468 "?"
 *   insn=0x00000000002F2468 string=0x00000000002F246C "+"
 *   insn=0x00000000002F247C string=0x00000000002F2480 ""
 *   insn=0x00000000002F2480 string=0x00000000002F2484 ""
 *   insn=0x00000000002F2488 string=0x00000000002F248C "b"
 *   insn=0x00000000002F2490 string=0x00000000002F2494 ""
 *   insn=0x00000000002F2494 string=0x00000000002F24B0 "H"
 *   insn=0x00000000002F2498 string=0x00000000002F249C "M"
 *   insn=0x00000000002F249C string=0x00000000002F24A0 ""
 *   insn=0x00000000002F24A8 string=0x00000000002F24AC ""
 *   insn=0x00000000002F24D8 string=0x00000000002F24DC "b"
 *   insn=0x00000000002F24E4 string=0x00000000002F24F0 "i2@"
 *   insn=0x00000000002F24E8 string=0x00000000002F24EC "9"
 *   insn=0x00000000002F24F4 string=0x00000000002F24F8 ""
 *   insn=0x00000000002F24FC string=0x00000000002F2500 "i"
 *   insn=0x00000000002F2508 string=0x00000000002F2524 "h"
 *   insn=0x00000000002F250C string=0x00000000002F2510 "b"
 *   insn=0x00000000002F251C string=0x00000000002F2520 ""
 *   insn=0x00000000002F2528 string=0x00000000002F252C ")"
 *   insn=0x00000000002F2534 string=0x00000000002F2538 ""
 *   insn=0x00000000002F255C string=0x00000000002F2560 "i2@"
 *   insn=0x00000000002F2560 string=0x00000000002F2564 ""
 *   insn=0x00000000002F2568 string=0x00000000002F256C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LevelState::ByteSize(Caver::Proto::LevelState *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w8
  unsigned int v5; // w20
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w8
  Caver::Proto::LevelState *v12; // x8
  __int64 v13; // x22
  int v14; // w9
  __int64 v15; // x23
  unsigned int v16; // w21
  _QWORD *v17; // x24
  __int64 v18; // x8
  int v19; // w10
  int v20; // w0
  int v21; // w0
  google::protobuf::io::CodedOutputStream *v22; // x0

  LOBYTE(v3) = *((_BYTE *)this + 48);
  if ( !(_BYTE)v3 )
  {
    v5 = 0;
    goto LABEL_42;
  }
  if ( (*((_BYTE *)this + 48) & 1) != 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 2);
    v7 = *(_QWORD *)(*v6 - 24LL);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
             a2);
      v3 = *((_DWORD *)this + 12);
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
    v5 = v4 + 2;
  else
    v5 = v4;
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 4) )
      v12 = this;
    else
      v12 = (Caver::Proto::LevelState *)Caver::Proto::LevelState::default_instance_;
    v13 = *((_QWORD *)v12 + 4);
    v14 = *(_DWORD *)(v13 + 24);
    if ( v14 < 1 )
    {
      v16 = *(_DWORD *)(v13 + 24);
    }
    else
    {
      v15 = 0;
      v16 = *(_DWORD *)(v13 + 24);
      do
      {
        v17 = *(_QWORD **)(*(_QWORD *)(v13 + 16) + 8 * v15);
        v18 = *(_QWORD *)(*v17 - 24LL);
        if ( (unsigned int)v18 >= 0x80 )
        {
          v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)(unsigned int)v18,
                  a2);
          v14 = *(_DWORD *)(v13 + 24);
          v19 = v20;
          v18 = *(_QWORD *)(*v17 - 24LL);
        }
        else
        {
          v19 = 1;
        }
        ++v15;
        v16 += v19 + v18;
      }
      while ( v15 < v14 );
    }
    *(_DWORD *)(v13 + 8) = v16;
    if ( v16 >= 0x80 )
      v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v16,
              a2);
    else
      v21 = 1;
    v3 = *((_DWORD *)this + 12);
    v5 += v16 + v21 + 1;
    if ( (v3 & 8) == 0 )
    {
LABEL_14:
      if ( (v3 & 0x10) == 0 )
        goto LABEL_42;
      goto LABEL_15;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_14;
  }
  v22 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 10);
  if ( ((unsigned int)v22 & 0x80000000) != 0 )
  {
    v5 += 11;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_42;
  }
  else if ( (unsigned int)v22 >= 0x80 )
  {
    v5 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, a2) + 1;
    if ( (*((_DWORD *)this + 12) & 0x10) == 0 )
      goto LABEL_42;
  }
  else
  {
    v5 += 2;
    if ( (v3 & 0x10) == 0 )
      goto LABEL_42;
  }
LABEL_15:
  v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 11);
  if ( ((unsigned int)v10 & 0x80000000) != 0 )
  {
    v11 = 11;
  }
  else if ( (unsigned int)v10 >= 0x80 )
  {
    v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2) + 1;
  }
  else
  {
    v11 = 2;
  }
  v5 += v11;
LABEL_42:
  *((_DWORD *)this + 2) = v5;
  return v5;
}

