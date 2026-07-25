/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FDBD4
 * Mangled: _ZNK5Caver5Proto13ObjectLibrary8ByteSizeEv
 * Demangled: Caver::Proto::ObjectLibrary::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F47A0  Caver::Proto::ObjectLibrary::ByteSize(void)
 *
 * Callees: 4
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FA200  Caver::Proto::Texture::ByteSize(void)
 *   0x00000000001FF090  Caver::Proto::SceneObject::ByteSize(void)
 *
 * Referenced strings: 58
 *   insn=0x00000000002FDBE8 string=0x00000000002FDBEC "h"
 *   insn=0x00000000002FDBEC string=0x00000000002FDBF0 "h"
 *   insn=0x00000000002FDBF0 string=0x00000000002FDBFC "t\n@"
 *   insn=0x00000000002FDBF8 string=0x00000000002FDC34 "i"@"
 *   insn=0x00000000002FDC00 string=0x00000000002FDC04 ""
 *   insn=0x00000000002FDC08 string=0x00000000002FDC0C "b"
 *   insn=0x00000000002FDC14 string=0x00000000002FDC2C "("
 *   insn=0x00000000002FDC18 string=0x00000000002FDC1C "m"
 *   insn=0x00000000002FDC1C string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002FDC24 string=0x00000000002FDC28 ""
 *   insn=0x00000000002FDC2C string=0x00000000002FDC30 ""
 *   insn=0x00000000002FDC34 string=0x00000000002FDC38 "?"
 *   insn=0x00000000002FDC38 string=0x00000000002FDC3C "5"
 *   insn=0x00000000002FDC40 string=0x00000000002FDC44 "7"
 *   insn=0x00000000002FDC40 string=0x00000000002FDCFC "iZ@"
 *   insn=0x00000000002FDC4C string=0x00000000002FDC50 "h"
 *   insn=0x00000000002FDC54 string=0x00000000002FDC58 "s@9"
 *   insn=0x00000000002FDC60 string=0x00000000002FDC7C "@"
 *   insn=0x00000000002FDC68 string=0x00000000002FDCBC "*"
 *   insn=0x00000000002FDC74 string=0x00000000002FDC78 ""
 *   insn=0x00000000002FDC78 string=0x00000000002FDCE4 "h""
 *   insn=0x00000000002FDC84 string=0x00000000002FDC88 "("
 *   insn=0x00000000002FDC98 string=0x00000000002FDC9C "b"
 *   insn=0x00000000002FDCA4 string=0x00000000002FDCB0 ""
 *   insn=0x00000000002FDCA8 string=0x00000000002FDCAC "I"
 *   insn=0x00000000002FDCB4 string=0x00000000002FDCB8 ")"
 *   insn=0x00000000002FDCC0 string=0x00000000002FDCC4 "4"
 *   insn=0x00000000002FDCCC string=0x00000000002FDCD0 "b"
 *   insn=0x00000000002FDCDC string=0x00000000002FDCE0 "<"
 *   insn=0x00000000002FDCEC string=0x00000000002FDCF0 "5"
 *   insn=0x00000000002FDCFC string=0x00000000002FDD00 "?"
 *   insn=0x00000000002FDD00 string=0x00000000002FDD04 "4"
 *   insn=0x00000000002FDD08 string=0x00000000002FDD5C "h"
 *   insn=0x00000000002FDD0C string=0x00000000002FDD10 "h*@"
 *   insn=0x00000000002FDD18 string=0x00000000002FDD1C ""
 *   insn=0x00000000002FDD20 string=0x00000000002FDD24 "b"
 *   insn=0x00000000002FDD28 string=0x00000000002FDD2C ""
 *   insn=0x00000000002FDD2C string=0x00000000002FDD48 "H"
 *   insn=0x00000000002FDD30 string=0x00000000002FDD34 "'"
 *   insn=0x00000000002FDD38 string=0x00000000002FDD3C "iZ@"
 *   insn=0x00000000002FDD40 string=0x00000000002FDD44 ""
 *   insn=0x00000000002FDD64 string=0x00000000002FDD68 "K"
 *   insn=0x00000000002FDD68 string=0x00000000002FDDB0 "h"
 *   insn=0x00000000002FDD6C string=0x00000000002FDD70 "hF@"
 *   insn=0x00000000002FDD74 string=0x00000000002FDD78 """
 *   insn=0x00000000002FDD78 string=0x00000000001FA200 "0'"
 *   insn=0x00000000002FDD80 string=0x00000000002FDD84 "b"
 *   insn=0x00000000002FDD8C string=0x00000000002FDD98 "h"
 *   insn=0x00000000002FDDA0 string=0x00000000002FDDA4 "5"
 *   insn=0x00000000002FDDA8 string=0x00000000002FDDAC "+"
 *   insn=0x00000000002FDDB8 string=0x00000000002FDDBC "K"
 *   insn=0x00000000002FDDBC string=0x00000000002FDE04 "t\n"
 *   insn=0x00000000002FDDC0 string=0x00000000002FDDC4 "hb@"
 *   insn=0x00000000002FDDCC string=0x00000000001F34D0 "P'"
 *   insn=0x00000000002FDDD4 string=0x00000000002FDDD8 "b"
 *   insn=0x00000000002FDDE0 string=0x00000000002FDDEC "h"
 *   insn=0x00000000002FDDF4 string=0x00000000002FDDF8 "4"
 *   insn=0x00000000002FDDFC string=0x00000000002FDE00 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLibrary::ByteSize(Caver::Proto::ObjectLibrary *this, unsigned int a2)
{
  int v3; // w8
  _QWORD *v4; // x20
  __int64 v5; // x8
  int v6; // w9
  int v7; // w9
  int v8; // w21
  __int64 v9; // x22
  __int64 v10; // x24
  int v11; // w8
  int v12; // w9
  unsigned int v13; // w20
  int v14; // w0
  __int64 v15; // x8
  unsigned int v16; // w20
  int v17; // w0
  int v18; // w9
  int v19; // w20
  __int64 i; // x21
  _QWORD *v21; // x22
  __int64 v22; // x8
  int v23; // w10
  int v24; // w0
  int v25; // w8
  int v26; // w21
  __int64 v27; // x22
  unsigned int v28; // w1
  unsigned int v29; // w20
  int v30; // w0
  int v31; // w8
  unsigned int v32; // w20
  __int64 v33; // x22
  unsigned int v34; // w1
  unsigned int v35; // w21
  int v36; // w0

  if ( (*((_BYTE *)this + 248) & 1) != 0 )
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
    v3 = v6 + v5 + 1;
  }
  else
  {
    v3 = 0;
  }
  v7 = *((_DWORD *)this + 8);
  v8 = v7 + v3;
  if ( v7 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v9);
      LOBYTE(v11) = *(_BYTE *)(v10 + 28);
      if ( (_BYTE)v11 )
      {
        if ( (*(_BYTE *)(v10 + 28) & 1) != 0 )
        {
          if ( *(_QWORD *)(v10 + 16) )
            v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v9);
          else
            v15 = Caver::Proto::ObjectTemplate::default_instance_;
          v16 = Caver::Proto::SceneObject::ByteSize(*(Caver::Proto::SceneObject **)(v15 + 16));
          if ( v16 >= 0x80 )
            v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                    (google::protobuf::io::CodedOutputStream *)v16,
                    a2);
          else
            v17 = 1;
          v11 = *(_DWORD *)(v10 + 28);
          v12 = v16 + v17 + 1;
        }
        else
        {
          v12 = 0;
        }
        if ( (v11 & 2) != 0 )
          v13 = v12 + 5;
        else
          v13 = v12;
        *(_DWORD *)(v10 + 8) = v13;
        if ( v13 >= 0x80 )
          v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                  (google::protobuf::io::CodedOutputStream *)v13,
                  a2);
        else
          v14 = 1;
      }
      else
      {
        v13 = 0;
        *(_DWORD *)(v10 + 8) = 0;
        v14 = 1;
      }
      ++v9;
      v8 += v13 + v14;
    }
    while ( v9 < *((int *)this + 8) );
  }
  v18 = *((_DWORD *)this + 22);
  v19 = v18 + v8;
  if ( v18 >= 1 )
  {
    for ( i = 0; i < v18; ++i )
    {
      v21 = *(_QWORD **)(*((_QWORD *)this + 10) + 8 * i);
      v22 = *(_QWORD *)(*v21 - 24LL);
      if ( (unsigned int)v22 >= 0x80 )
      {
        v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v22,
                a2);
        v18 = *((_DWORD *)this + 22);
        v23 = v24;
        v22 = *(_QWORD *)(*v21 - 24LL);
      }
      else
      {
        v23 = 1;
      }
      v19 += v23 + v22;
    }
  }
  v25 = *((_DWORD *)this + 36);
  v26 = v25 + v19;
  if ( v25 >= 1 )
  {
    v27 = 0;
    do
    {
      v29 = Caver::Proto::Texture::ByteSize(*(Caver::Proto::Texture **)(*((_QWORD *)this + 17) + 8 * v27));
      if ( v29 >= 0x80 )
        v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v29,
                v28);
      else
        v30 = 1;
      ++v27;
      v26 += v29 + v30;
    }
    while ( v27 < *((int *)this + 36) );
  }
  v31 = *((_DWORD *)this + 50);
  v32 = v31 + v26;
  if ( v31 >= 1 )
  {
    v33 = 0;
    do
    {
      v35 = Caver::Proto::Program::ByteSize(*(Caver::Proto::Program **)(*((_QWORD *)this + 24) + 8 * v33));
      if ( v35 >= 0x80 )
        v36 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v35,
                v34);
      else
        v36 = 1;
      ++v33;
      v32 += v35 + v36;
    }
    while ( v33 < *((int *)this + 50) );
  }
  *((_DWORD *)this + 2) = v32;
  return v32;
}

