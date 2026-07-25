/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033C37C
 * Mangled: _ZNK5Caver5Proto10PackedMesh8ByteSizeEv
 * Demangled: Caver::Proto::PackedMesh::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 27
 *   insn=0x000000000033C38C string=0x000000000033C390 "hBB9h"
 *   insn=0x000000000033C390 string=0x000000000033C394 "h"
 *   insn=0x000000000033C394 string=0x000000000033C3A0 "tF@"
 *   insn=0x000000000033C39C string=0x000000000033C3D8 "h"
 *   insn=0x000000000033C3A4 string=0x000000000033C3A8 ""
 *   insn=0x000000000033C3AC string=0x000000000033C3B0 "b"
 *   insn=0x000000000033C3B8 string=0x000000000033C3D0 "("
 *   insn=0x000000000033C3C0 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000033C3C8 string=0x000000000033C3CC ""
 *   insn=0x000000000033C3E0 string=0x000000000033C3E4 "+"
 *   insn=0x000000000033C3E4 string=0x000000000033C408 "hB@"
 *   insn=0x000000000033C3E8 string=0x000000000033C3EC "b"
 *   insn=0x000000000033C3F8 string=0x000000000033C3FC "u"
 *   insn=0x000000000033C3FC string=0x000000000033C400 ""
 *   insn=0x000000000033C408 string=0x000000000033C40C "t2"
 *   insn=0x000000000033C418 string=0x000000000033C41C "+"
 *   insn=0x000000000033C41C string=0x000000000033C440 "hj@"
 *   insn=0x000000000033C420 string=0x000000000033C424 "b"
 *   insn=0x000000000033C430 string=0x000000000033C434 "g"
 *   insn=0x000000000033C434 string=0x000000000033C438 ""
 *   insn=0x000000000033C440 string=0x000000000033C444 "tZ"
 *   insn=0x000000000033C450 string=0x000000000033C454 "+"
 *   insn=0x000000000033C458 string=0x000000000033C45C "b"
 *   insn=0x000000000033C468 string=0x000000000033C46C "Y"
 *   insn=0x000000000033C46C string=0x000000000033C470 ""
 *   insn=0x000000000033C478 string=0x000000000033C47C "t"
 *   insn=0x000000000033C47C string=0x000000000033C480 "`\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PackedMesh::ByteSize(Caver::Proto::PackedMesh *this, unsigned int a2)
{
  int v3; // w21
  _QWORD *v4; // x20
  __int64 v5; // x8
  int v6; // w9
  int v7; // w8
  unsigned int v8; // w20
  int v9; // w8
  int v10; // w8
  int v11; // w21
  unsigned int v12; // w20
  int v13; // w8
  int v14; // w8
  int v15; // w21
  unsigned int v16; // w20
  int v17; // w8
  __int64 result; // x0

  if ( (*((_BYTE *)this + 144) & 8) != 0 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 17);
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
  v7 = *((_DWORD *)this + 6);
  v8 = 4 * v7;
  if ( v7 >= 1 )
  {
    if ( v8 >= 0x80 )
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)v8,
             a2)
         + 1;
    else
      v9 = 2;
    v3 += v9;
  }
  v10 = *((_DWORD *)this + 16);
  *((_DWORD *)this + 12) = v8;
  v11 = v3 + v8;
  v12 = 4 * v10;
  if ( v10 >= 1 )
  {
    if ( v12 >= 0x80 )
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v12,
              a2)
          + 1;
    else
      v13 = 2;
    v11 += v13;
  }
  v14 = *((_DWORD *)this + 26);
  *((_DWORD *)this + 22) = v12;
  v15 = v11 + v12;
  v16 = 4 * v14;
  if ( v14 >= 1 )
  {
    if ( v16 >= 0x80 )
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v16,
              a2)
          + 1;
    else
      v17 = 2;
    v15 += v17;
  }
  result = v15 + v16;
  *((_DWORD *)this + 32) = v16;
  *((_DWORD *)this + 2) = result;
  return result;
}

