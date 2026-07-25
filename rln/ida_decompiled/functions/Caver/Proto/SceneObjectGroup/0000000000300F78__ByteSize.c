/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300F78
 * Mangled: _ZNK5Caver5Proto16SceneObjectGroup8ByteSizeEv
 * Demangled: Caver::Proto::SceneObjectGroup::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FF680  Caver::Proto::SceneObjectGroup::ByteSize(void)
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 42
 *   insn=0x0000000000300F88 string=0x0000000000300F8C "i"
 *   insn=0x0000000000300F94 string=0x0000000000300FA8 "t\n@"
 *   insn=0x0000000000300F9C string=0x0000000000300FE4 "\n\t"
 *   insn=0x0000000000300FA0 string=0x0000000000300FA4 ","
 *   insn=0x0000000000300FA4 string=0x0000000000301054 "i"@"
 *   insn=0x0000000000300FAC string=0x0000000000300FB0 ""
 *   insn=0x0000000000300FB4 string=0x0000000000300FB8 "b"
 *   insn=0x0000000000300FBC string=0x0000000000300FC0 ""
 *   insn=0x0000000000300FC0 string=0x0000000000300FDC "H"
 *   insn=0x0000000000300FC8 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000300FCC string=0x0000000000300FD0 "ib@"
 *   insn=0x0000000000300FD4 string=0x0000000000300FD8 ""
 *   insn=0x0000000000300FDC string=0x0000000000300FE0 ""
 *   insn=0x0000000000300FE4 string=0x0000000000300FE8 "?"
 *   insn=0x0000000000300FE8 string=0x0000000000300FEC ""
 *   insn=0x0000000000300FEC string=0x0000000000300FF0 "?"
 *   insn=0x0000000000300FF0 string=0x0000000000300FF4 "\n\t"
 *   insn=0x0000000000300FF4 string=0x0000000000300FF8 ""
 *   insn=0x0000000000300FF8 string=0x0000000000300FFC "\n\t"
 *   insn=0x0000000000300FFC string=0x0000000000301000 "?"
 *   insn=0x0000000000301004 string=0x0000000000301008 "i"
 *   insn=0x0000000000301008 string=0x000000000030100C "\t"
 *   insn=0x000000000030100C string=0x0000000000301010 "h.@"
 *   insn=0x0000000000301010 string=0x0000000000301014 ")yD"
 *   insn=0x0000000000301018 string=0x000000000030101C ")"
 *   insn=0x000000000030101C string=0x0000000000301020 "("
 *   insn=0x0000000000301024 string=0x0000000000301028 "*"
 *   insn=0x0000000000301028 string=0x00000000001F34D0 "P'"
 *   insn=0x0000000000301030 string=0x0000000000301034 "b"
 *   insn=0x0000000000301040 string=0x0000000000301044 "c"
 *   insn=0x0000000000301048 string=0x000000000030104C ""
 *   insn=0x0000000000301054 string=0x0000000000301058 "?"
 *   insn=0x0000000000301058 string=0x000000000030105C "4"
 *   insn=0x0000000000301060 string=0x00000000003010B4 "t\n"
 *   insn=0x0000000000301064 string=0x0000000000301068 "h"
 *   insn=0x0000000000301070 string=0x0000000000301074 ""
 *   insn=0x0000000000301078 string=0x000000000030107C "b"
 *   insn=0x0000000000301080 string=0x0000000000301084 ""
 *   insn=0x0000000000301084 string=0x00000000003010A0 "H"
 *   insn=0x0000000000301088 string=0x000000000030108C "Q"
 *   insn=0x0000000000301090 string=0x0000000000301094 "i"@"
 *   insn=0x0000000000301098 string=0x000000000030109C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::ByteSize(Caver::Proto::SceneObjectGroup *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w8
  int v5; // w21
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  Caver::Proto::SceneObjectGroup *v10; // x8
  unsigned int v11; // w20
  int v12; // w0
  int v13; // w9
  unsigned int v14; // w20
  __int64 i; // x21
  _QWORD *v16; // x22
  __int64 v17; // x8
  int v18; // w10
  int v19; // w0

  LOBYTE(v3) = *((_BYTE *)this + 96);
  if ( (_BYTE)v3 )
  {
    if ( (*((_BYTE *)this + 96) & 1) != 0 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 2);
      v7 = *(_QWORD *)(*v6 - 24LL);
      if ( (unsigned int)v7 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
               a2);
        v3 = *((_DWORD *)this + 24);
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
    if ( (v3 & 4) != 0 )
      v4 += 2;
    if ( (v3 & 8) != 0 )
      v4 += 2;
    if ( (v3 & 0x10) != 0 )
      v5 = v4 + 2;
    else
      v5 = v4;
    if ( (v3 & 0x20) != 0 )
    {
      if ( *((_QWORD *)this + 11) )
        v10 = this;
      else
        v10 = (Caver::Proto::SceneObjectGroup *)Caver::Proto::SceneObjectGroup::default_instance_;
      v11 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v10 + 11));
      if ( v11 >= 0x80 )
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v11,
                a2);
      else
        v12 = 1;
      v5 += v11 + v12 + 1;
    }
  }
  else
  {
    v5 = 0;
  }
  v13 = *((_DWORD *)this + 8);
  v14 = v13 + v5;
  if ( v13 >= 1 )
  {
    for ( i = 0; i < v13; ++i )
    {
      v16 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * i);
      v17 = *(_QWORD *)(*v16 - 24LL);
      if ( (unsigned int)v17 >= 0x80 )
      {
        v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)(unsigned int)v17,
                a2);
        v13 = *((_DWORD *)this + 8);
        v18 = v19;
        v17 = *(_QWORD *)(*v16 - 24LL);
      }
      else
      {
        v18 = 1;
      }
      v14 += v18 + v17;
    }
  }
  *((_DWORD *)this + 2) = v14;
  return v14;
}

