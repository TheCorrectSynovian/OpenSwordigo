/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030837C
 * Mangled: _ZNK5Caver5Proto19GroundMeshComponent8ByteSizeEv
 * Demangled: Caver::Proto::GroundMeshComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *   0x00000000001FD990  Caver::Proto::Mesh::ByteSize(void)
 *   0x00000000001FE3C0  Caver::Proto::Rectangle::ByteSize(void)
 *
 * Referenced strings: 68
 *   insn=0x000000000030838C string=0x0000000000308390 "irC9"
 *   insn=0x0000000000308398 string=0x00000000003083B0 "t\n@"
 *   insn=0x00000000003083A0 string=0x00000000003083A4 "#"
 *   insn=0x00000000003083A0 string=0x00000000003083F0 "t"
 *   insn=0x00000000003083A4 string=0x0000000000308430 "i"
 *   insn=0x00000000003083A8 string=0x00000000003083AC "N"
 *   insn=0x00000000003083AC string=0x00000000003084E4 "i*@"
 *   insn=0x00000000003083B4 string=0x00000000003083B8 ""
 *   insn=0x00000000003083BC string=0x00000000003083C0 "b"
 *   insn=0x00000000003083C4 string=0x00000000003083C8 ""
 *   insn=0x00000000003083C8 string=0x00000000003083E4 "H"
 *   insn=0x00000000003083D0 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000003083D4 string=0x00000000003083D8 "i"
 *   insn=0x00000000003083DC string=0x00000000003083E0 ""
 *   insn=0x00000000003083E8 string=0x00000000003083EC ")"
 *   insn=0x00000000003083F4 string=0x00000000003083F8 ""
 *   insn=0x00000000003083FC string=0x0000000000308400 "b"
 *   insn=0x0000000000308404 string=0x0000000000308408 ""
 *   insn=0x0000000000308408 string=0x0000000000308424 "H"
 *   insn=0x000000000030840C string=0x0000000000308410 "p"
 *   insn=0x0000000000308414 string=0x0000000000308418 "i"
 *   insn=0x000000000030841C string=0x0000000000308420 ""
 *   insn=0x0000000000308434 string=0x0000000000308438 "("
 *   insn=0x000000000030843C string=0x0000000000308440 "h.@"
 *   insn=0x0000000000308440 string=0x0000000000308444 ")"
 *   insn=0x0000000000308448 string=0x000000000030844C ")"
 *   insn=0x000000000030844C string=0x0000000000308450 "("
 *   insn=0x0000000000308460 string=0x0000000000308464 "b"
 *   insn=0x000000000030846C string=0x0000000000308478 "i"
 *   insn=0x0000000000308470 string=0x0000000000308474 "W"
 *   insn=0x000000000030847C string=0x0000000000308480 ""
 *   insn=0x000000000030848C string=0x0000000000308490 "hj@"
 *   insn=0x0000000000308490 string=0x0000000000308494 ")"
 *   insn=0x0000000000308498 string=0x000000000030849C ")"
 *   insn=0x000000000030849C string=0x00000000003084A0 "("
 *   insn=0x00000000003084A4 string=0x00000000003084A8 "F"
 *   insn=0x00000000003084A8 string=0x00000000001F9DC0 "0'"
 *   insn=0x00000000003084B0 string=0x00000000003084B4 "b"
 *   insn=0x00000000003084BC string=0x00000000003084C8 "i"
 *   insn=0x00000000003084C0 string=0x00000000003084C4 "C"
 *   insn=0x00000000003084CC string=0x00000000003084D0 ""
 *   insn=0x00000000003084D8 string=0x00000000003084DC "?"
 *   insn=0x00000000003084E4 string=0x00000000003084E8 "?"
 *   insn=0x00000000003084E8 string=0x00000000003084EC "5"
 *   insn=0x00000000003084EC string=0x00000000003084F0 "K"
 *   insn=0x00000000003084F0 string=0x0000000000308538 "hj@"
 *   insn=0x00000000003084F4 string=0x00000000003084F8 "h"
 *   insn=0x00000000003084FC string=0x0000000000308500 "$"
 *   insn=0x0000000000308500 string=0x00000000001FD990 "0'"
 *   insn=0x0000000000308508 string=0x000000000030850C "b"
 *   insn=0x0000000000308514 string=0x0000000000308520 "h*"
 *   insn=0x0000000000308518 string=0x000000000030851C "-"
 *   insn=0x0000000000308528 string=0x000000000030852C "5"
 *   insn=0x0000000000308530 string=0x0000000000308534 "+"
 *   insn=0x0000000000308540 string=0x0000000000308544 "K"
 *   insn=0x0000000000308544 string=0x000000000030858C "h"
 *   insn=0x0000000000308548 string=0x000000000030854C "h2@"
 *   insn=0x000000000030855C string=0x0000000000308560 "b"
 *   insn=0x0000000000308568 string=0x0000000000308574 "hj"
 *   insn=0x000000000030857C string=0x0000000000308580 "5"
 *   insn=0x0000000000308584 string=0x0000000000308588 "+"
 *   insn=0x0000000000308594 string=0x0000000000308598 "K"
 *   insn=0x0000000000308598 string=0x00000000003085E0 "t\n"
 *   insn=0x000000000030859C string=0x00000000003085A0 "hN@"
 *   insn=0x00000000003085B0 string=0x00000000003085B4 "b"
 *   insn=0x00000000003085BC string=0x00000000003085C8 "h"
 *   insn=0x00000000003085D0 string=0x00000000003085D4 "4"
 *   insn=0x00000000003085D8 string=0x00000000003085DC "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshComponent::ByteSize(
        Caver::Proto::GroundMeshComponent *this,
        unsigned int a2)
{
  int v3; // w9
  int v4; // w21
  int v5; // w8
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  _QWORD *v10; // x20
  __int64 v11; // x8
  int v12; // w10
  int v13; // w0
  Caver::Proto::GroundMeshComponent *v14; // x8
  unsigned int v15; // w1
  unsigned int v16; // w20
  int v17; // w0
  Caver::Proto::GroundMeshComponent *v18; // x8
  unsigned int v19; // w1
  unsigned int v20; // w20
  int v21; // w0
  int v22; // w9
  int v23; // w21
  __int64 v24; // x22
  unsigned int v25; // w1
  unsigned int v26; // w20
  int v27; // w0
  int v28; // w8
  int v29; // w21
  __int64 v30; // x22
  unsigned int v31; // w1
  unsigned int v32; // w20
  int v33; // w0
  int v34; // w8
  unsigned int v35; // w20
  __int64 v36; // x22
  unsigned int v37; // w1
  unsigned int v38; // w21
  int v39; // w0

  LOBYTE(v3) = *((_BYTE *)this + 220);
  if ( !(_BYTE)v3 )
  {
    v5 = 0;
    goto LABEL_33;
  }
  if ( (*((_BYTE *)this + 220) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 220) & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 2);
  v7 = *(_QWORD *)(*v6 - 24LL);
  if ( (unsigned int)v7 >= 0x80 )
  {
    v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
           a2);
    v3 = *((_DWORD *)this + 55);
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
LABEL_10:
    v10 = (_QWORD *)*((_QWORD *)this + 3);
    v11 = *(_QWORD *)(*v10 - 24LL);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v11,
              a2);
      v3 = *((_DWORD *)this + 55);
      v12 = v13;
      v11 = *(_QWORD *)(*v10 - 24LL);
    }
    else
    {
      v12 = 1;
    }
    v4 += v12 + v11 + 1;
  }
LABEL_14:
  if ( (v3 & 8) == 0 )
  {
    if ( (v3 & 0x40) == 0 )
      goto LABEL_31;
    goto LABEL_24;
  }
  if ( *((_QWORD *)this + 11) )
    v14 = this;
  else
    v14 = (Caver::Proto::GroundMeshComponent *)Caver::Proto::GroundMeshComponent::default_instance_;
  v16 = Caver::Proto::Rectangle::ByteSize(*((Caver::Proto::Rectangle **)v14 + 11));
  if ( v16 >= 0x80 )
    v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v16,
            v15);
  else
    v17 = 1;
  v3 = *((_DWORD *)this + 55);
  v4 += v16 + v17 + 1;
  if ( (v3 & 0x40) != 0 )
  {
LABEL_24:
    if ( *((_QWORD *)this + 26) )
      v18 = this;
    else
      v18 = (Caver::Proto::GroundMeshComponent *)Caver::Proto::GroundMeshComponent::default_instance_;
    v20 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v18 + 26));
    if ( v20 >= 0x80 )
      v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v20,
              v19);
    else
      v21 = 1;
    v3 = *((_DWORD *)this + 55);
    v4 += v20 + v21 + 1;
  }
LABEL_31:
  v5 = v4 + 2;
  if ( (v3 & 0x80) == 0 )
    v5 = v4;
LABEL_33:
  v22 = *((_DWORD *)this + 10);
  v23 = v22 + v5;
  if ( v22 >= 1 )
  {
    v24 = 0;
    do
    {
      v26 = Caver::Proto::Mesh::ByteSize(*(Caver::Proto::Mesh **)(*((_QWORD *)this + 4) + 8 * v24));
      if ( v26 >= 0x80 )
        v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v26,
                v25);
      else
        v27 = 1;
      ++v24;
      v23 += v26 + v27;
    }
    while ( v24 < *((int *)this + 10) );
  }
  v28 = *((_DWORD *)this + 26);
  v29 = v28 + v23;
  if ( v28 >= 1 )
  {
    v30 = 0;
    do
    {
      v32 = Caver::Proto::Mesh::ByteSize(*(Caver::Proto::Mesh **)(*((_QWORD *)this + 12) + 8 * v30));
      if ( v32 >= 0x80 )
        v33 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v32,
                v31);
      else
        v33 = 1;
      ++v30;
      v29 += v32 + v33;
    }
    while ( v30 < *((int *)this + 26) );
  }
  v34 = *((_DWORD *)this + 40);
  v35 = v34 + v29;
  if ( v34 >= 1 )
  {
    v36 = 0;
    do
    {
      v38 = Caver::Proto::Mesh::ByteSize(*(Caver::Proto::Mesh **)(*((_QWORD *)this + 19) + 8 * v36));
      if ( v38 >= 0x80 )
        v39 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v38,
                v37);
      else
        v39 = 1;
      ++v36;
      v35 += v38 + v39;
    }
    while ( v36 < *((int *)this + 40) );
  }
  *((_DWORD *)this + 2) = v35;
  return v35;
}

