/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6200
 * Mangled: _ZNK5Caver5Proto11GameOptions8ByteSizeEv
 * Demangled: Caver::Proto::GameOptions::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FB730  Caver::Proto::MusicPlaylist::ByteSize(void)
 *   0x0000000000200D30  Caver::Proto::GUIViewLayout::ByteSize(void)
 *
 * Referenced strings: 44
 *   insn=0x00000000002E6210 string=0x00000000002E6214 "hn@"
 *   insn=0x00000000002E6218 string=0x00000000002E621C " "
 *   insn=0x00000000002E621C string=0x00000000002E6220 "\t"
 *   insn=0x00000000002E6224 string=0x00000000002E6228 "*\t"
 *   insn=0x00000000002E6228 string=0x00000000002E622C ")"
 *   insn=0x00000000002E6230 string=0x00000000002E6234 "*"
 *   insn=0x00000000002E6234 string=0x00000000002E6238 ")"
 *   insn=0x00000000002E6238 string=0x00000000002E623C "*"
 *   insn=0x00000000002E6240 string=0x00000000002E6244 "5"
 *   insn=0x00000000002E6244 string=0x00000000002E6248 ""
 *   insn=0x00000000002E6248 string=0x00000000002E624C "\t "
 *   insn=0x00000000002E624C string=0x00000000002E6250 "h.@"
 *   insn=0x00000000002E6250 string=0x00000000002E6254 ")"
 *   insn=0x00000000002E6258 string=0x00000000002E625C ")"
 *   insn=0x00000000002E625C string=0x00000000002E6260 "("
 *   insn=0x00000000002E6278 string=0x00000000002E627C ""
 *   insn=0x00000000002E627C string=0x00000000002E6298 "hn@"
 *   insn=0x00000000002E6284 string=0x00000000002E6288 "!"
 *   insn=0x00000000002E6288 string=0x00000000002E628C "&"
 *   insn=0x00000000002E6288 string=0x00000000002E630C "*\t"
 *   insn=0x00000000002E628C string=0x00000000002E6324 "h"
 *   insn=0x00000000002E6294 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E629C string=0x00000000002E62A0 ")"
 *   insn=0x00000000002E62A0 string=0x00000000002E62A4 "5"
 *   insn=0x00000000002E62A8 string=0x00000000002E62AC "\t "
 *   insn=0x00000000002E62AC string=0x00000000002E62B0 "h2@"
 *   insn=0x00000000002E62B0 string=0x00000000002E62B4 ")"
 *   insn=0x00000000002E62B8 string=0x00000000002E62BC ")"
 *   insn=0x00000000002E62BC string=0x00000000002E62C0 "("
 *   insn=0x00000000002E62D0 string=0x00000000002E62D4 "b"
 *   insn=0x00000000002E62DC string=0x00000000002E62E8 "hn@"
 *   insn=0x00000000002E62EC string=0x00000000002E62F0 ")"
 *   insn=0x00000000002E62F0 string=0x00000000002E62F4 "5"
 *   insn=0x00000000002E6310 string=0x00000000002E6314 ")"
 *   insn=0x00000000002E6314 string=0x00000000002E6318 "*\t"
 *   insn=0x00000000002E631C string=0x00000000002E6320 ")"
 *   insn=0x00000000002E632C string=0x00000000002E6330 "K"
 *   insn=0x00000000002E6330 string=0x00000000002E6378 "t\n"
 *   insn=0x00000000002E6334 string=0x00000000002E6338 "h\n@"
 *   insn=0x00000000002E6340 string=0x00000000001FB730 "0'"
 *   insn=0x00000000002E6348 string=0x00000000002E634C "b"
 *   insn=0x00000000002E6354 string=0x00000000002E6360 "h"
 *   insn=0x00000000002E6368 string=0x00000000002E636C "4"
 *   insn=0x00000000002E6370 string=0x00000000002E6374 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameOptions::ByteSize(Caver::Proto::GameOptions *this)
{
  int v2; // w8
  int v3; // w9
  int v4; // w21
  Caver::Proto::GameOptions *v5; // x8
  unsigned int v6; // w1
  unsigned int v7; // w20
  int v8; // w0
  int v9; // w9
  Caver::Proto::GameOptions *v10; // x8
  unsigned int v11; // w1
  unsigned int v12; // w20
  int v13; // w0
  int v14; // w8
  unsigned int v15; // w20
  __int64 v16; // x22
  unsigned int v17; // w1
  unsigned int v18; // w21
  int v19; // w0

  v2 = *((_DWORD *)this + 27);
  if ( (v2 & 0x1FE) == 0 )
  {
    v9 = 0;
    if ( (v2 & 0xFF00) == 0 )
      goto LABEL_34;
    goto LABEL_30;
  }
  v3 = *((_DWORD *)this + 27) & 2;
  if ( (v2 & 4) != 0 )
    v3 = (*((_DWORD *)this + 27) & 2) + 2;
  if ( (v2 & 8) != 0 )
    v3 += 5;
  if ( (v2 & 0x10) != 0 )
    v4 = v3 + 5;
  else
    v4 = v3;
  if ( (v2 & 0x20) != 0 )
  {
    if ( *((_QWORD *)this + 11) )
      v5 = this;
    else
      v5 = (Caver::Proto::GameOptions *)Caver::Proto::GameOptions::default_instance_;
    v7 = Caver::Proto::GUIViewLayout::ByteSize(*((Caver::Proto::GUIViewLayout **)v5 + 11));
    if ( v7 >= 0x80 )
      v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)v7,
             v6);
    else
      v8 = 1;
    v2 = *((_DWORD *)this + 27);
    v4 += v7 + v8 + 1;
  }
  if ( (v2 & 0x40) != 0 )
  {
    if ( *((_QWORD *)this + 12) )
      v10 = this;
    else
      v10 = (Caver::Proto::GameOptions *)Caver::Proto::GameOptions::default_instance_;
    v12 = Caver::Proto::GUIViewLayout::ByteSize(*((Caver::Proto::GUIViewLayout **)v10 + 12));
    if ( v12 >= 0x80 )
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v12,
              v11);
    else
      v13 = 1;
    v2 = *((_DWORD *)this + 27);
    v4 += v12 + v13 + 1;
  }
  v9 = v4 + 2;
  if ( (v2 & 0x80) == 0 )
    v9 = v4;
  if ( (v2 & 0xFF00) != 0 )
  {
LABEL_30:
    if ( (v2 & 0x100) != 0 )
      v9 += 2;
    if ( (v2 & 0x200) != 0 )
      v9 += 2;
  }
LABEL_34:
  v14 = *((_DWORD *)this + 6);
  v15 = v14 + v9;
  if ( v14 >= 1 )
  {
    v16 = 0;
    do
    {
      v18 = Caver::Proto::MusicPlaylist::ByteSize(*(Caver::Proto::MusicPlaylist **)(*((_QWORD *)this + 2) + 8 * v16));
      if ( v18 >= 0x80 )
        v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v18,
                v17);
      else
        v19 = 1;
      ++v16;
      v15 += v18 + v19;
    }
    while ( v16 < *((int *)this + 6) );
  }
  *((_DWORD *)this + 2) = v15;
  return v15;
}

