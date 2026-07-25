/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D3240
 * Mangled: _ZNK5Caver5Proto7Texture8ByteSizeEv
 * Demangled: Caver::Proto::Texture::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001FA200  Caver::Proto::Texture::ByteSize(void)
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9E40  Caver::Proto::Texture_ConversionInfo::ByteSize(void)
 *   0x00000000001FBF90  Caver::Proto::Texture_Subtexture::ByteSize(void)
 *
 * Referenced strings: 45
 *   insn=0x00000000002D3250 string=0x00000000002D3254 "i"
 *   insn=0x00000000002D3254 string=0x00000000002D3258 "I"
 *   insn=0x00000000002D3258 string=0x00000000002D325C "i"
 *   insn=0x00000000002D325C string=0x00000000002D3288 "t\n@"
 *   insn=0x00000000002D3260 string=0x00000000002D3264 "\t"
 *   insn=0x00000000002D3264 string=0x00000000002D3268 "`"
 *   insn=0x00000000002D3264 string=0x00000000002D32E4 "i"
 *   insn=0x00000000002D326C string=0x00000000002D32CC "h"
 *   insn=0x00000000002D3280 string=0x00000000002D3284 ">"
 *   insn=0x00000000002D3284 string=0x00000000002D337C "h*@"
 *   insn=0x00000000002D328C string=0x00000000002D3290 ""
 *   insn=0x00000000002D3294 string=0x00000000002D3298 "b"
 *   insn=0x00000000002D329C string=0x00000000002D32A0 ""
 *   insn=0x00000000002D32A0 string=0x00000000002D32BC "H"
 *   insn=0x00000000002D32A8 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D32AC string=0x00000000002D32B0 "ij@"
 *   insn=0x00000000002D32B4 string=0x00000000002D32B8 ""
 *   insn=0x00000000002D32C0 string=0x00000000002D32C4 ")"
 *   insn=0x00000000002D32C4 string=0x00000000002D32C8 ""
 *   insn=0x00000000002D32D4 string=0x00000000002D32D8 "ij@"
 *   insn=0x00000000002D32D8 string=0x00000000002D32DC ""
 *   insn=0x00000000002D32E4 string=0x00000000002D32E8 "i"
 *   insn=0x00000000002D32E4 string=0x00000000002D32F0 "`Z@"
 *   insn=0x00000000002D32E8 string=0x00000000002D32EC "$"
 *   insn=0x00000000002D32F4 string=0x00000000002D3310 "h"
 *   insn=0x00000000002D32F8 string=0x00000000002D32FC """
 *   insn=0x00000000002D3304 string=0x00000000002D3308 "i"
 *   insn=0x00000000002D3320 string=0x00000000002D3324 "ij@"
 *   insn=0x00000000002D3324 string=0x00000000002D3328 ""
 *   insn=0x00000000002D332C string=0x00000000002D3330 "i"
 *   insn=0x00000000002D3334 string=0x00000000002D3338 "h2@"
 *   insn=0x00000000002D3338 string=0x00000000002D333C ")"
 *   insn=0x00000000002D3340 string=0x00000000002D3344 ")"
 *   insn=0x00000000002D3344 string=0x00000000002D3348 "("
 *   insn=0x00000000002D3350 string=0x00000000001F9E40 "0'"
 *   insn=0x00000000002D3358 string=0x00000000002D335C "b"
 *   insn=0x00000000002D3370 string=0x00000000002D3374 ""
 *   insn=0x00000000002D3384 string=0x00000000002D3388 "K"
 *   insn=0x00000000002D3388 string=0x00000000002D33D0 "t\n"
 *   insn=0x00000000002D338C string=0x00000000002D3390 "h"
 *   insn=0x00000000002D3398 string=0x00000000001FBF90 "0'"
 *   insn=0x00000000002D33A0 string=0x00000000002D33A4 "b"
 *   insn=0x00000000002D33AC string=0x00000000002D33B8 "h*"
 *   insn=0x00000000002D33C0 string=0x00000000002D33C4 "4"
 *   insn=0x00000000002D33C8 string=0x00000000002D33CC "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::ByteSize(Caver::Proto::Texture *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w21
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w8
  _QWORD *v7; // x20
  __int64 v8; // x8
  int v9; // w10
  int v10; // w0
  int v11; // w0
  google::protobuf::io::CodedOutputStream *v12; // x0
  Caver::Proto::Texture *v13; // x8
  unsigned int v14; // w1
  unsigned int v15; // w20
  int v16; // w0
  int v17; // w8
  unsigned int v18; // w20
  __int64 v19; // x22
  unsigned int v20; // w1
  unsigned int v21; // w21
  int v22; // w0

  LOBYTE(v3) = *((_BYTE *)this + 104);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_33;
  }
  if ( (*((_BYTE *)this + 104) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 104) & 2) == 0 )
      goto LABEL_16;
    goto LABEL_4;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  v8 = *(_QWORD *)(*v7 - 24LL);
  if ( (unsigned int)v8 >= 0x80 )
  {
    v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v8,
            a2);
    v3 = *((_DWORD *)this + 26);
    v9 = v10;
    v8 = *(_QWORD *)(*v7 - 24LL);
  }
  else
  {
    v9 = 1;
  }
  v4 = v9 + v8 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_4:
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v5 & 0x80000000) != 0 )
    {
      v6 = 11;
    }
    else if ( (unsigned int)v5 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
      v3 = *((_DWORD *)this + 26);
      v6 = v11 + 1;
    }
    else
    {
      v6 = 2;
    }
    v4 += v6;
  }
LABEL_16:
  if ( (v3 & 8) != 0 )
  {
    v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 22);
    if ( ((unsigned int)v12 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 0x10) == 0 )
        goto LABEL_33;
    }
    else if ( (unsigned int)v12 >= 0x80 )
    {
      v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2) + 1;
      if ( (*((_DWORD *)this + 26) & 0x10) == 0 )
        goto LABEL_33;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 0x10) == 0 )
        goto LABEL_33;
    }
  }
  else if ( (v3 & 0x10) == 0 )
  {
    goto LABEL_33;
  }
  if ( *((_QWORD *)this + 12) )
    v13 = this;
  else
    v13 = (Caver::Proto::Texture *)Caver::Proto::Texture::default_instance_;
  v15 = Caver::Proto::Texture_ConversionInfo::ByteSize(*((Caver::Proto::Texture_ConversionInfo **)v13 + 12));
  if ( v15 >= 0x80 )
    v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v15,
            v14);
  else
    v16 = 1;
  v4 += v15 + v16 + 1;
LABEL_33:
  v17 = *((_DWORD *)this + 10);
  v18 = v17 + v4;
  if ( v17 >= 1 )
  {
    v19 = 0;
    do
    {
      v21 = Caver::Proto::Texture_Subtexture::ByteSize(*(Caver::Proto::Texture_Subtexture **)(*((_QWORD *)this + 4)
                                                                                            + 8 * v19));
      if ( v21 >= 0x80 )
        v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v21,
                v20);
      else
        v22 = 1;
      ++v19;
      v18 += v21 + v22;
    }
    while ( v19 < *((int *)this + 10) );
  }
  *((_DWORD *)this + 2) = v18;
  return v18;
}

