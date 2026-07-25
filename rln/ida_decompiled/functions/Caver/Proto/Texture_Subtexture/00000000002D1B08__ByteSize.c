/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1B08
 * Mangled: _ZNK5Caver5Proto18Texture_Subtexture8ByteSizeEv
 * Demangled: Caver::Proto::Texture_Subtexture::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FBF90  Caver::Proto::Texture_Subtexture::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 38
 *   insn=0x00000000002D1B14 string=0x00000000002D1B18 "i"
 *   insn=0x00000000002D1B20 string=0x00000000002D1B38 "t\n@"
 *   insn=0x00000000002D1B28 string=0x00000000002D1B2C ","
 *   insn=0x00000000002D1B2C string=0x00000000002D1BDC "\n"
 *   insn=0x00000000002D1B30 string=0x00000000002D1B34 "-"
 *   insn=0x00000000002D1B34 string=0x00000000002D1BE8 "`\n"
 *   insn=0x00000000002D1B3C string=0x00000000002D1B40 ""
 *   insn=0x00000000002D1B44 string=0x00000000002D1B48 "b"
 *   insn=0x00000000002D1B4C string=0x00000000002D1B50 ""
 *   insn=0x00000000002D1B50 string=0x00000000002D1B6C "H"
 *   insn=0x00000000002D1B58 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D1B5C string=0x00000000002D1B60 "i&@"
 *   insn=0x00000000002D1B64 string=0x00000000002D1B68 ""
 *   insn=0x00000000002D1B6C string=0x00000000002D1B70 ""
 *   insn=0x00000000002D1B70 string=0x00000000002D1B74 "I"
 *   insn=0x00000000002D1B78 string=0x00000000002D1B7C "i"
 *   insn=0x00000000002D1B7C string=0x00000000002D1B80 "J-D"
 *   insn=0x00000000002D1B80 string=0x00000000002D1B84 "?"
 *   insn=0x00000000002D1B84 string=0x00000000002D1B88 "J"
 *   insn=0x00000000002D1B88 string=0x00000000002D1B8C "I"
 *   insn=0x00000000002D1B8C string=0x00000000002D1B90 ")@"
 *   insn=0x00000000002D1B90 string=0x00000000002D1B94 "*q@9"
 *   insn=0x00000000002D1B98 string=0x00000000002D1B9C "K"
 *   insn=0x00000000002D1B98 string=0x00000000002D1BCC "*\t"
 *   insn=0x00000000002D1BA0 string=0x00000000002D1BA4 "k"
 *   insn=0x00000000002D1BA4 string=0x00000000002D1BA8 "_"
 *   insn=0x00000000002D1BA8 string=0x00000000002D1BAC "l"
 *   insn=0x00000000002D1BAC string=0x00000000002D1BB0 "k"
 *   insn=0x00000000002D1BB0 string=0x00000000002D1BB4 "_"
 *   insn=0x00000000002D1BB4 string=0x00000000002D1BB8 "l"
 *   insn=0x00000000002D1BB8 string=0x00000000002D1BBC "k"
 *   insn=0x00000000002D1BBC string=0x00000000002D1BC0 "l"
 *   insn=0x00000000002D1BC0 string=0x00000000002D1BC4 "_"
 *   insn=0x00000000002D1BC4 string=0x00000000002D1BC8 "j"
 *   insn=0x00000000002D1BCC string=0x00000000002D1BD0 "i&@"
 *   insn=0x00000000002D1BD0 string=0x00000000002D1BD4 ""
 *   insn=0x00000000002D1BD4 string=0x00000000002D1BD8 "\t"
 *   insn=0x00000000002D1BDC string=0x00000000002D1BE0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::ByteSize(Caver::Proto::Texture_Subtexture *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w8
  __int64 result; // x0
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  Caver::Proto::Texture_Subtexture *v10; // x9
  __int64 v11; // x9
  int v12; // w10
  int v13; // w11

  LOBYTE(v3) = *((_BYTE *)this + 36);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 2);
    v7 = *(_QWORD *)(*v6 - 24LL);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
             a2);
      v3 = *((_DWORD *)this + 9);
      v8 = v9;
      v7 = *(_QWORD *)(*v6 - 24LL);
    }
    else
    {
      v8 = 1;
    }
    v4 = v8 + v7 + 1;
    if ( (v3 & 2) == 0 )
      goto LABEL_22;
LABEL_10:
    if ( *((_QWORD *)this + 3) )
      v10 = this;
    else
      v10 = (Caver::Proto::Texture_Subtexture *)Caver::Proto::Texture_Subtexture::default_instance_;
    v11 = *((_QWORD *)v10 + 3);
    v12 = *(unsigned __int8 *)(v11 + 28);
    if ( *(_BYTE *)(v11 + 28) )
    {
      v13 = (v12 << 31 >> 31) & 5;
      if ( (v12 & 2) != 0 )
        v13 += 5;
      if ( (v12 & 4) != 0 )
        v13 += 5;
      if ( (v12 & 8) != 0 )
        v12 = v13 + 5;
      else
        v12 = v13;
    }
    *(_DWORD *)(v11 + 8) = v12;
    v3 = *((_DWORD *)this + 9);
    v4 += v12 + 2;
    goto LABEL_22;
  }
  v4 = 0;
  if ( (*((_BYTE *)this + 36) & 2) != 0 )
    goto LABEL_10;
LABEL_22:
  if ( (v3 & 4) != 0 )
    result = v4 + 5;
  else
    result = v4;
LABEL_25:
  *((_DWORD *)this + 2) = result;
  return result;
}

