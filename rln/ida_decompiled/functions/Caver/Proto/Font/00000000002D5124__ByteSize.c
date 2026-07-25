/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5124
 * Mangled: _ZNK5Caver5Proto4Font8ByteSizeEv
 * Demangled: Caver::Proto::Font::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F66D0  Caver::Proto::Font_Glyph::ByteSize(void)
 *   0x00000000001FA200  Caver::Proto::Texture::ByteSize(void)
 *
 * Referenced strings: 62
 *   insn=0x00000000002D5134 string=0x00000000002D5138 "i"
 *   insn=0x00000000002D5140 string=0x00000000002D5158 "t\n@"
 *   insn=0x00000000002D5148 string=0x00000000002D514C "&"
 *   insn=0x00000000002D5150 string=0x00000000002D5154 "b"
 *   insn=0x00000000002D5154 string=0x00000000002D52DC "h*@"
 *   insn=0x00000000002D515C string=0x00000000002D5160 ""
 *   insn=0x00000000002D5164 string=0x00000000002D5168 "b"
 *   insn=0x00000000002D516C string=0x00000000002D5170 ""
 *   insn=0x00000000002D5170 string=0x00000000002D518C "H"
 *   insn=0x00000000002D5178 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002D517C string=0x00000000002D5180 "ir@"
 *   insn=0x00000000002D5184 string=0x00000000002D5188 ""
 *   insn=0x00000000002D5198 string=0x00000000002D519C "h"
 *   insn=0x00000000002D519C string=0x00000000002D51A0 ")!D"
 *   insn=0x00000000002D51A4 string=0x00000000002D51A8 ")"
 *   insn=0x00000000002D51A8 string=0x00000000002D51AC "("
 *   insn=0x00000000002D51B4 string=0x00000000001FA200 "0'"
 *   insn=0x00000000002D51BC string=0x00000000002D51C0 "b"
 *   insn=0x00000000002D51C8 string=0x00000000002D51D4 "ir@"
 *   insn=0x00000000002D51D8 string=0x00000000002D51DC ""
 *   insn=0x00000000002D51E4 string=0x00000000002D51F4 "t.@"
 *   insn=0x00000000002D51E8 string=0x00000000002D5238 "`b@"
 *   insn=0x00000000002D51EC string=0x00000000002D51F0 ";"
 *   insn=0x00000000002D51F8 string=0x00000000002D51FC ""
 *   insn=0x00000000002D5200 string=0x00000000002D5204 "b"
 *   insn=0x00000000002D5208 string=0x00000000002D520C ""
 *   insn=0x00000000002D520C string=0x00000000002D5228 "H"
 *   insn=0x00000000002D5218 string=0x00000000002D521C "ir@"
 *   insn=0x00000000002D5220 string=0x00000000002D5224 ""
 *   insn=0x00000000002D523C string=0x00000000002D5258 "h"
 *   insn=0x00000000002D5240 string=0x00000000002D5244 """
 *   insn=0x00000000002D524C string=0x00000000002D5250 "i"
 *   insn=0x00000000002D5250 string=0x00000000002D5254 """
 *   insn=0x00000000002D5268 string=0x00000000002D526C "ir@"
 *   insn=0x00000000002D526C string=0x00000000002D5270 ""
 *   insn=0x00000000002D5274 string=0x00000000002D5278 ")"
 *   insn=0x00000000002D527C string=0x00000000002D5280 "h6@"
 *   insn=0x00000000002D5280 string=0x00000000002D5284 ")!D"
 *   insn=0x00000000002D5288 string=0x00000000002D528C ")"
 *   insn=0x00000000002D528C string=0x00000000002D5290 "("
 *   insn=0x00000000002D5290 string=0x00000000002D5294 "5@"
 *   insn=0x00000000002D5294 string=0x00000000002D5298 "\tq@9"
 *   insn=0x00000000002D529C string=0x00000000002D52A0 "*"
 *   insn=0x00000000002D529C string=0x00000000002D52D0 "\t\t"
 *   insn=0x00000000002D52A4 string=0x00000000002D52A8 "J"
 *   insn=0x00000000002D52A8 string=0x00000000002D52AC "?"
 *   insn=0x00000000002D52AC string=0x00000000002D52B0 "K"
 *   insn=0x00000000002D52B0 string=0x00000000002D52B4 "J"
 *   insn=0x00000000002D52B4 string=0x00000000002D52B8 "?"
 *   insn=0x00000000002D52B8 string=0x00000000002D52BC "K"
 *   insn=0x00000000002D52BC string=0x00000000002D52C0 "J"
 *   insn=0x00000000002D52C0 string=0x00000000002D52C4 "K"
 *   insn=0x00000000002D52C4 string=0x00000000002D52C8 "?"
 *   insn=0x00000000002D52C8 string=0x00000000002D52CC "I"
 *   insn=0x00000000002D52E4 string=0x00000000002D52E8 "K"
 *   insn=0x00000000002D52E8 string=0x00000000002D5330 "t\n"
 *   insn=0x00000000002D52EC string=0x00000000002D52F0 "h"
 *   insn=0x00000000002D52F8 string=0x00000000001F66D0 "0'"
 *   insn=0x00000000002D5300 string=0x00000000002D5304 "b"
 *   insn=0x00000000002D530C string=0x00000000002D5318 "h*"
 *   insn=0x00000000002D5320 string=0x00000000002D5324 "4"
 *   insn=0x00000000002D5328 string=0x00000000002D532C "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font::ByteSize(Caver::Proto::Font *this, unsigned int a2)
{
  int v3; // w9
  int v4; // w21
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  Caver::Proto::Font *v9; // x8
  unsigned int v10; // w20
  int v11; // w0
  _QWORD *v12; // x20
  __int64 v13; // x8
  int v14; // w10
  int v15; // w0
  google::protobuf::io::CodedOutputStream *v16; // x0
  Caver::Proto::Font *v17; // x8
  __int64 v18; // x8
  int v19; // w9
  int v20; // w10
  int v21; // w8
  unsigned int v22; // w20
  __int64 v23; // x22
  unsigned int v24; // w1
  unsigned int v25; // w21
  int v26; // w0

  LOBYTE(v3) = *((_BYTE *)this + 112);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_44;
  }
  if ( (*((_BYTE *)this + 112) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 112) & 2) == 0 )
      goto LABEL_17;
    goto LABEL_10;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  v6 = *(_QWORD *)(*v5 - 24LL);
  if ( (unsigned int)v6 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v6,
           a2);
    v3 = *((_DWORD *)this + 28);
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
    if ( *((_QWORD *)this + 3) )
      v9 = this;
    else
      v9 = (Caver::Proto::Font *)Caver::Proto::Font::default_instance_;
    v10 = Caver::Proto::Texture::ByteSize(*((Caver::Proto::Texture **)v9 + 3));
    if ( v10 >= 0x80 )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v10,
              a2);
    else
      v11 = 1;
    v3 = *((_DWORD *)this + 28);
    v4 += v10 + v11 + 1;
  }
LABEL_17:
  if ( (v3 & 8) != 0 )
  {
    v12 = (_QWORD *)*((_QWORD *)this + 11);
    v13 = *(_QWORD *)(*v12 - 24LL);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v13,
              a2);
      v3 = *((_DWORD *)this + 28);
      v14 = v15;
      v13 = *(_QWORD *)(*v12 - 24LL);
    }
    else
    {
      v14 = 1;
    }
    v4 += v14 + v13 + 1;
    if ( (v3 & 0x10) == 0 )
    {
LABEL_19:
      if ( (v3 & 0x20) == 0 )
        goto LABEL_44;
      goto LABEL_32;
    }
  }
  else if ( (v3 & 0x10) == 0 )
  {
    goto LABEL_19;
  }
  v16 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 24);
  if ( ((unsigned int)v16 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x20) == 0 )
      goto LABEL_44;
  }
  else if ( (unsigned int)v16 >= 0x80 )
  {
    v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, a2) + 1;
    if ( (*((_DWORD *)this + 28) & 0x20) == 0 )
      goto LABEL_44;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 0x20) == 0 )
      goto LABEL_44;
  }
LABEL_32:
  if ( *((_QWORD *)this + 13) )
    v17 = this;
  else
    v17 = (Caver::Proto::Font *)Caver::Proto::Font::default_instance_;
  v18 = *((_QWORD *)v17 + 13);
  v19 = *(unsigned __int8 *)(v18 + 28);
  if ( *(_BYTE *)(v18 + 28) )
  {
    v20 = (v19 << 31 >> 31) & 5;
    if ( (v19 & 2) != 0 )
      v20 += 5;
    if ( (v19 & 4) != 0 )
      v20 += 5;
    if ( (v19 & 8) != 0 )
      v19 = v20 + 5;
    else
      v19 = v20;
  }
  *(_DWORD *)(v18 + 8) = v19;
  v4 += v19 + 2;
LABEL_44:
  v21 = *((_DWORD *)this + 10);
  v22 = v21 + v4;
  if ( v21 >= 1 )
  {
    v23 = 0;
    do
    {
      v25 = Caver::Proto::Font_Glyph::ByteSize(*(Caver::Proto::Font_Glyph **)(*((_QWORD *)this + 4) + 8 * v23));
      if ( v25 >= 0x80 )
        v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v25,
                v24);
      else
        v26 = 1;
      ++v23;
      v22 += v25 + v26;
    }
    while ( v23 < *((int *)this + 10) );
  }
  *((_DWORD *)this + 2) = v22;
  return v22;
}

