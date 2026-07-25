/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EB24C
 * Mangled: _ZNK5Caver5Proto13PlayerProfile8ByteSizeEv
 * Demangled: Caver::Proto::PlayerProfile::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FE580  Caver::Proto::PlayerProfile::ByteSize(void)
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x0000000000202EF0  Caver::Proto::DateTime::ByteSize(void)
 *   0x0000000000203110  Caver::Proto::GameState::ByteSize(void)
 *
 * Referenced strings: 110
 *   insn=0x00000000002EB260 string=0x00000000002EB264 "i"
 *   insn=0x00000000002EB264 string=0x00000000002EB268 "?"
 *   insn=0x00000000002EB26C string=0x00000000002EB270 "\t"
 *   insn=0x00000000002EB270 string=0x00000000002EB290 "t\n@"
 *   insn=0x00000000002EB278 string=0x00000000002EB27C "("
 *   insn=0x00000000002EB27C string=0x00000000002EB31C "\t"
 *   insn=0x00000000002EB280 string=0x00000000002EB284 "?"
 *   insn=0x00000000002EB288 string=0x00000000002EB3C4 ")"
 *   insn=0x00000000002EB28C string=0x00000000002EB584 "hj@"
 *   insn=0x00000000002EB294 string=0x00000000002EB298 ""
 *   insn=0x00000000002EB29C string=0x00000000002EB2A0 "b"
 *   insn=0x00000000002EB2A4 string=0x00000000002EB2A8 ""
 *   insn=0x00000000002EB2A8 string=0x00000000002EB2C4 "H"
 *   insn=0x00000000002EB2B0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002EB2B4 string=0x00000000002EB2B8 "i"
 *   insn=0x00000000002EB2BC string=0x00000000002EB2C0 ""
 *   insn=0x00000000002EB2D0 string=0x00000000002EB2D4 "h"
 *   insn=0x00000000002EB2D4 string=0x00000000002EB2D8 ")"
 *   insn=0x00000000002EB2DC string=0x00000000002EB2E0 ")"
 *   insn=0x00000000002EB2E0 string=0x00000000002EB2E4 "("
 *   insn=0x00000000002EB2F4 string=0x00000000002EB2F8 "b"
 *   insn=0x00000000002EB300 string=0x00000000002EB30C "i"
 *   insn=0x00000000002EB310 string=0x00000000002EB314 ""
 *   insn=0x00000000002EB31C string=0x00000000002EB33C "t"
 *   insn=0x00000000002EB320 string=0x00000000002EB324 "`*@"
 *   insn=0x00000000002EB328 string=0x00000000002EB384 "h"
 *   insn=0x00000000002EB340 string=0x00000000002EB344 ""
 *   insn=0x00000000002EB348 string=0x00000000002EB34C "b"
 *   insn=0x00000000002EB350 string=0x00000000002EB354 ""
 *   insn=0x00000000002EB354 string=0x00000000002EB370 "H"
 *   insn=0x00000000002EB360 string=0x00000000002EB364 "i"
 *   insn=0x00000000002EB368 string=0x00000000002EB36C ""
 *   insn=0x00000000002EB378 string=0x00000000002EB37C "I"
 *   insn=0x00000000002EB37C string=0x00000000002EB380 ""
 *   insn=0x00000000002EB38C string=0x00000000002EB390 "i"
 *   insn=0x00000000002EB390 string=0x00000000002EB394 ""
 *   insn=0x00000000002EB39C string=0x00000000002EB3A0 "?"
 *   insn=0x00000000002EB3A4 string=0x00000000002EB3A8 "\n%"
 *   insn=0x00000000002EB3A8 string=0x00000000002EB3AC "?"
 *   insn=0x00000000002EB3B0 string=0x00000000002EB3B4 "\t"
 *   insn=0x00000000002EB3B4 string=0x00000000002EB3B8 "I"
 *   insn=0x00000000002EB3B8 string=0x00000000002EB3BC "?"
 *   insn=0x00000000002EB3B8 string=0x00000000002EB440 "t"@"
 *   insn=0x00000000002EB3BC string=0x00000000002EB3C0 " "
 *   insn=0x00000000002EB3C4 string=0x00000000002EB408 "t&@"
 *   insn=0x00000000002EB3C8 string=0x00000000002EB3CC "i\tP7Z"
 *   insn=0x00000000002EB3C8 string=0x00000000002EB484 "t*@"
 *   insn=0x00000000002EB3CC string=0x00000000002EB3D0 "Z"
 *   insn=0x00000000002EB3CC string=0x00000000002EB4F8 "t.@"
 *   insn=0x00000000002EB3D4 string=0x00000000002EB3D8 "h"
 *   insn=0x00000000002EB3D8 string=0x00000000002EB3DC ")"
 *   insn=0x00000000002EB3E0 string=0x00000000002EB3E4 ")"
 *   insn=0x00000000002EB3E4 string=0x00000000002EB3E8 "("
 *   insn=0x00000000002EB3EC string=0x00000000002EB3F0 "H_"
 *   insn=0x00000000002EB3F8 string=0x00000000002EB3FC "B"
 *   insn=0x00000000002EB400 string=0x00000000002EB404 "\n"
 *   insn=0x00000000002EB404 string=0x00000000002EB42C "i"
 *   insn=0x00000000002EB40C string=0x00000000002EB410 ""
 *   insn=0x00000000002EB414 string=0x00000000002EB418 """
 *   insn=0x00000000002EB420 string=0x00000000002EB474 "H"
 *   insn=0x00000000002EB424 string=0x00000000002EB428 "j+"
 *   insn=0x00000000002EB430 string=0x00000000002EB434 ""
 *   insn=0x00000000002EB438 string=0x00000000002EB43C "\t"
 *   insn=0x00000000002EB444 string=0x00000000002EB448 ""
 *   insn=0x00000000002EB458 string=0x00000000002EB4B8 "H"
 *   insn=0x00000000002EB45C string=0x00000000002EB460 "\+"
 *   insn=0x00000000002EB464 string=0x00000000002EB468 "i"
 *   insn=0x00000000002EB46C string=0x00000000002EB470 ""
 *   insn=0x00000000002EB47C string=0x00000000002EB480 "i"
 *   insn=0x00000000002EB488 string=0x00000000002EB48C ""
 *   insn=0x00000000002EB49C string=0x00000000002EB4E8 "H"
 *   insn=0x00000000002EB4A0 string=0x00000000002EB4A4 "K+"
 *   insn=0x00000000002EB4A8 string=0x00000000002EB4AC "i"
 *   insn=0x00000000002EB4B0 string=0x00000000002EB4B4 ""
 *   insn=0x00000000002EB4C0 string=0x00000000002EB4C4 "?"
 *   insn=0x00000000002EB4C8 string=0x00000000002EB4CC "."
 *   insn=0x00000000002EB4D0 string=0x00000000002EB4D4 "?+"
 *   insn=0x00000000002EB4D8 string=0x00000000002EB4DC "i"
 *   insn=0x00000000002EB4E0 string=0x00000000002EB4E4 ""
 *   insn=0x00000000002EB4F0 string=0x00000000002EB4F4 ")"
 *   insn=0x00000000002EB4FC string=0x00000000002EB500 ""
 *   insn=0x00000000002EB504 string=0x00000000002EB508 "b"
 *   insn=0x00000000002EB50C string=0x00000000002EB510 ""
 *   insn=0x00000000002EB510 string=0x00000000002EB52C "H"
 *   insn=0x00000000002EB514 string=0x00000000002EB518 ".+"
 *   insn=0x00000000002EB51C string=0x00000000002EB520 "i"
 *   insn=0x00000000002EB524 string=0x00000000002EB528 ""
 *   insn=0x00000000002EB538 string=0x00000000002EB53C "?"
 *   insn=0x00000000002EB540 string=0x00000000002EB544 "\t"
 *   insn=0x00000000002EB544 string=0x00000000002EB548 "tR@"
 *   insn=0x00000000002EB54C string=0x00000000002EB550 ""
 *   insn=0x00000000002EB554 string=0x00000000002EB558 "b"
 *   insn=0x00000000002EB560 string=0x00000000002EB578 "("
 *   insn=0x00000000002EB570 string=0x00000000002EB574 ""
 *   insn=0x00000000002EB590 string=0x00000000002EB668 "t\n"
 *   insn=0x00000000002EB594 string=0x00000000002EB598 "h2@"
 *   insn=0x00000000002EB5A0 string=0x00000000002EB5A4 "I"
 *   insn=0x00000000002EB5AC string=0x00000000002EB5B0 ")"
 *   insn=0x00000000002EB5B4 string=0x00000000002EB5B8 "@"
 *   insn=0x00000000002EB5B8 string=0x00000000002EB620 "h"
 *   insn=0x00000000002EB5BC string=0x00000000002EB5C0 "B"
 *   insn=0x00000000002EB5D8 string=0x00000000002EB650 "hj"
 *   insn=0x00000000002EB5E0 string=0x00000000002EB5E4 ""
 *   insn=0x00000000002EB5E8 string=0x00000000002EB5EC "b"
 *   insn=0x00000000002EB5F0 string=0x00000000002EB5F4 ""
 *   insn=0x00000000002EB5F4 string=0x00000000002EB610 "H"
 *   insn=0x00000000002EB608 string=0x00000000002EB60C ""
 *   insn=0x00000000002EB628 string=0x00000000002EB62C ""
 *   insn=0x00000000002EB638 string=0x00000000002EB63C "b"
 *   insn=0x00000000002EB658 string=0x00000000002EB65C "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile::ByteSize(Caver::Proto::PlayerProfile *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w21
  int v5; // w21
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  Caver::Proto::PlayerProfile *v10; // x8
  unsigned int v11; // w20
  int v12; // w0
  google::protobuf::io::CodedOutputStream *v13; // x0
  int v14; // w8
  _QWORD *v15; // x20
  __int64 v16; // x8
  int v17; // w10
  int v18; // w0
  int v19; // w0
  int v20; // w8
  Caver::Proto::PlayerProfile *v21; // x8
  unsigned int v22; // w20
  int v23; // w0
  _QWORD *v24; // x20
  __int64 v25; // x8
  int v26; // w10
  _QWORD *v27; // x20
  __int64 v28; // x8
  int v29; // w10
  int v30; // w0
  _QWORD *v31; // x20
  __int64 v32; // x8
  int v33; // w10
  int v34; // w0
  int v35; // w0
  _QWORD *v36; // x20
  __int64 v37; // x8
  int v38; // w10
  int v39; // w0
  _QWORD *v40; // x20
  __int64 v41; // x8
  int v42; // w9
  int v43; // w8
  unsigned int v44; // w20
  __int64 v45; // x22
  __int64 v46; // x23
  int v47; // w9
  unsigned int v48; // w21
  google::protobuf::io::CodedOutputStream *v49; // x0
  int v50; // w8
  int v51; // w0
  _QWORD *v52; // x21
  __int64 v53; // x8
  int v54; // w10
  int v55; // w0

  v3 = *((_DWORD *)this + 42);
  if ( !(_BYTE)v3 )
  {
    v5 = 0;
    if ( (v3 & 0xFF00) == 0 )
      goto LABEL_74;
    goto LABEL_39;
  }
  if ( (v3 & 1) == 0 )
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_18;
    goto LABEL_11;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 2);
  v7 = *(_QWORD *)(*v6 - 24LL);
  if ( (unsigned int)v7 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
           a2);
    v3 = *((_DWORD *)this + 42);
    v8 = v9;
    v7 = *(_QWORD *)(*v6 - 24LL);
  }
  else
  {
    v8 = 1;
  }
  v4 = v8 + v7 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_11:
    if ( *((_QWORD *)this + 3) )
      v10 = this;
    else
      v10 = (Caver::Proto::PlayerProfile *)Caver::Proto::PlayerProfile::default_instance_;
    v11 = Caver::Proto::DateTime::ByteSize(*((Caver::Proto::DateTime **)v10 + 3));
    if ( v11 >= 0x80 )
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v11,
              a2);
    else
      v12 = 1;
    v3 = *((_DWORD *)this + 42);
    v4 += v11 + v12 + 1;
  }
LABEL_18:
  if ( (v3 & 4) != 0 )
  {
    v15 = (_QWORD *)*((_QWORD *)this + 4);
    v16 = *(_QWORD *)(*v15 - 24LL);
    if ( (unsigned int)v16 >= 0x80 )
    {
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v16,
              a2);
      v3 = *((_DWORD *)this + 42);
      v17 = v18;
      v16 = *(_QWORD *)(*v15 - 24LL);
    }
    else
    {
      v17 = 1;
    }
    v4 += v17 + v16 + 1;
    if ( (v3 & 8) == 0 )
      goto LABEL_31;
    goto LABEL_20;
  }
  if ( (v3 & 8) != 0 )
  {
LABEL_20:
    v13 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 10);
    if ( ((unsigned int)v13 & 0x80000000) != 0 )
    {
      v14 = 11;
    }
    else if ( (unsigned int)v13 >= 0x80 )
    {
      v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, a2);
      v3 = *((_DWORD *)this + 42);
      v14 = v19 + 1;
    }
    else
    {
      v14 = 2;
    }
    v4 += v14;
  }
LABEL_31:
  v20 = v4 + 5;
  if ( (v3 & 0x10) == 0 )
    v20 = v4;
  if ( (v3 & 0x20) != 0 )
    v5 = v20 + 9;
  else
    v5 = v20;
  if ( (v3 & 0x40) != 0 )
  {
    if ( *((_QWORD *)this + 7) )
      v21 = this;
    else
      v21 = (Caver::Proto::PlayerProfile *)Caver::Proto::PlayerProfile::default_instance_;
    v22 = Caver::Proto::GameState::ByteSize(*((Caver::Proto::GameState **)v21 + 7));
    if ( v22 >= 0x80 )
      v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v22,
              a2);
    else
      v23 = 1;
    v3 = *((_DWORD *)this + 42);
    v5 += v22 + v23 + 1;
    if ( (v3 & 0x80) == 0 )
    {
LABEL_38:
      if ( (v3 & 0xFF00) == 0 )
        goto LABEL_74;
      goto LABEL_39;
    }
  }
  else if ( (v3 & 0x80) == 0 )
  {
    goto LABEL_38;
  }
  v27 = (_QWORD *)*((_QWORD *)this + 8);
  v28 = *(_QWORD *)(*v27 - 24LL);
  if ( (unsigned int)v28 >= 0x80 )
  {
    v34 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v28,
            a2);
    v3 = *((_DWORD *)this + 42);
    v29 = v34;
    v28 = *(_QWORD *)(*v27 - 24LL);
  }
  else
  {
    v29 = 1;
  }
  v5 += v29 + v28 + 1;
  if ( (v3 & 0xFF00) == 0 )
    goto LABEL_74;
LABEL_39:
  if ( (v3 & 0x100) == 0 )
  {
    if ( (v3 & 0x200) == 0 )
      goto LABEL_41;
LABEL_56:
    v31 = (_QWORD *)*((_QWORD *)this + 10);
    v32 = *(_QWORD *)(*v31 - 24LL);
    if ( (unsigned int)v32 >= 0x80 )
    {
      v35 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v32,
              a2);
      v3 = *((_DWORD *)this + 42);
      v33 = v35;
      v32 = *(_QWORD *)(*v31 - 24LL);
    }
    else
    {
      v33 = 1;
    }
    v5 += v33 + v32 + 1;
    if ( (v3 & 0x400) == 0 )
      goto LABEL_67;
    goto LABEL_63;
  }
  v24 = (_QWORD *)*((_QWORD *)this + 9);
  v25 = *(_QWORD *)(*v24 - 24LL);
  if ( (unsigned int)v25 >= 0x80 )
  {
    v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v25,
            a2);
    v3 = *((_DWORD *)this + 42);
    v26 = v30;
    v25 = *(_QWORD *)(*v24 - 24LL);
  }
  else
  {
    v26 = 1;
  }
  v5 += v26 + v25 + 1;
  if ( (v3 & 0x200) != 0 )
    goto LABEL_56;
LABEL_41:
  if ( (v3 & 0x400) != 0 )
  {
LABEL_63:
    v36 = (_QWORD *)*((_QWORD *)this + 11);
    v37 = *(_QWORD *)(*v36 - 24LL);
    if ( (unsigned int)v37 >= 0x80 )
    {
      v39 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v37,
              a2);
      v3 = *((_DWORD *)this + 42);
      v38 = v39;
      v37 = *(_QWORD *)(*v36 - 24LL);
    }
    else
    {
      v38 = 1;
    }
    v5 += v38 + v37 + 1;
  }
LABEL_67:
  if ( (v3 & 0x1000) != 0 )
    v5 += 2;
  if ( (v3 & 0x2000) != 0 )
  {
    v40 = (_QWORD *)*((_QWORD *)this + 20);
    v41 = *(_QWORD *)(*v40 - 24LL);
    if ( (unsigned int)v41 >= 0x80 )
    {
      v42 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v41,
              a2);
      v41 = *(_QWORD *)(*v40 - 24LL);
    }
    else
    {
      v42 = 1;
    }
    v5 += v42 + v41 + 1;
  }
LABEL_74:
  v43 = *((_DWORD *)this + 26);
  v44 = v43 + v5;
  if ( v43 >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      v46 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v45);
      LOBYTE(v47) = *(_BYTE *)(v46 + 28);
      if ( (_BYTE)v47 )
        break;
      v48 = 0;
      *(_DWORD *)(v46 + 8) = 0;
      v51 = 1;
LABEL_94:
      ++v45;
      v44 += v48 + v51;
      if ( v45 >= *((int *)this + 26) )
        goto LABEL_95;
    }
    if ( (*(_BYTE *)(v46 + 28) & 1) != 0 )
    {
      v52 = *(_QWORD **)(v46 + 16);
      v53 = *(_QWORD *)(*v52 - 24LL);
      if ( (unsigned int)v53 >= 0x80 )
      {
        v55 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v53,
                a2);
        v47 = *(_DWORD *)(v46 + 28);
        v54 = v55;
        v53 = *(_QWORD *)(*v52 - 24LL);
      }
      else
      {
        v54 = 1;
      }
      v48 = v54 + v53 + 1;
      if ( (v47 & 2) == 0 )
        goto LABEL_91;
    }
    else
    {
      v48 = 0;
      if ( (*(_BYTE *)(v46 + 28) & 2) == 0 )
      {
LABEL_91:
        *(_DWORD *)(v46 + 8) = v48;
        if ( v48 >= 0x80 )
          v51 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)v48,
                  a2);
        else
          v51 = 1;
        goto LABEL_94;
      }
    }
    v49 = (google::protobuf::io::CodedOutputStream *)*(unsigned int *)(v46 + 24);
    if ( ((unsigned int)v49 & 0x80000000) != 0 )
    {
      v50 = 11;
    }
    else if ( (unsigned int)v49 >= 0x80 )
    {
      v50 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v49, a2) + 1;
    }
    else
    {
      v50 = 2;
    }
    v48 += v50;
    goto LABEL_91;
  }
LABEL_95:
  *((_DWORD *)this + 2) = v44;
  return v44;
}

