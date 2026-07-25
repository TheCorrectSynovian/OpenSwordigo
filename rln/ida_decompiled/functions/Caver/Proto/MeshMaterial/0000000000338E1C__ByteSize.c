/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338E1C
 * Mangled: _ZNK5Caver5Proto12MeshMaterial8ByteSizeEv
 * Demangled: Caver::Proto::MeshMaterial::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F6920  Caver::Proto::MeshMaterial::ByteSize(void)
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *   0x00000000001FA200  Caver::Proto::Texture::ByteSize(void)
 *
 * Referenced strings: 41
 *   insn=0x0000000000338E2C string=0x0000000000338E30 "h"
 *   insn=0x0000000000338E38 string=0x0000000000338E50 "i"
 *   insn=0x0000000000338E40 string=0x0000000000338E44 ")"
 *   insn=0x0000000000338E40 string=0x0000000000338E9C "i"
 *   insn=0x0000000000338E48 string=0x0000000000338E4C "Q"
 *   insn=0x0000000000338E4C string=0x0000000000338F90 "t\n"
 *   insn=0x0000000000338E50 string=0x0000000000338E54 "h\n@"
 *   insn=0x0000000000338E54 string=0x0000000000338E58 ")"
 *   insn=0x0000000000338E5C string=0x0000000000338E60 ")"
 *   insn=0x0000000000338E60 string=0x0000000000338E64 "("
 *   insn=0x0000000000338E6C string=0x00000000001F9DC0 "0'"
 *   insn=0x0000000000338E74 string=0x0000000000338E78 "b"
 *   insn=0x0000000000338E80 string=0x0000000000338E8C "h:@"
 *   insn=0x0000000000338E88 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000338E90 string=0x0000000000338E94 "5"
 *   insn=0x0000000000338E9C string=0x0000000000338EA0 "h"
 *   insn=0x0000000000338EA0 string=0x0000000000338EA4 ")"
 *   insn=0x0000000000338EA8 string=0x0000000000338EAC ")"
 *   insn=0x0000000000338EAC string=0x0000000000338EB0 "("
 *   insn=0x0000000000338EC0 string=0x0000000000338EC4 "b"
 *   insn=0x0000000000338ECC string=0x0000000000338ED8 "h:@"
 *   insn=0x0000000000338EDC string=0x0000000000338EE0 ")"
 *   insn=0x0000000000338EE0 string=0x0000000000338EE4 "5"
 *   insn=0x0000000000338EE8 string=0x0000000000338EEC "i"
 *   insn=0x0000000000338EEC string=0x0000000000338EF0 "h"
 *   insn=0x0000000000338EF0 string=0x0000000000338EF4 ")"
 *   insn=0x0000000000338EF8 string=0x0000000000338EFC ")"
 *   insn=0x0000000000338EFC string=0x0000000000338F00 "("
 *   insn=0x0000000000338F10 string=0x0000000000338F14 "b"
 *   insn=0x0000000000338F1C string=0x0000000000338F28 "h:@"
 *   insn=0x0000000000338F2C string=0x0000000000338F30 ")"
 *   insn=0x0000000000338F30 string=0x0000000000338F34 "5"
 *   insn=0x0000000000338F40 string=0x0000000000338F44 "h"
 *   insn=0x0000000000338F44 string=0x0000000000338F48 "i"
 *   insn=0x0000000000338F48 string=0x0000000000338F4C "h"
 *   insn=0x0000000000338F4C string=0x0000000000338F50 ")"
 *   insn=0x0000000000338F54 string=0x0000000000338F58 ")"
 *   insn=0x0000000000338F58 string=0x0000000000338F5C "("
 *   insn=0x0000000000338F64 string=0x00000000001FA200 "0'"
 *   insn=0x0000000000338F6C string=0x0000000000338F70 "b"
 *   insn=0x0000000000338F84 string=0x0000000000338F88 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::ByteSize(Caver::Proto::MeshMaterial *this)
{
  int v2; // w8
  int v3; // w21
  unsigned int v4; // w20
  Caver::Proto::MeshMaterial *v5; // x8
  unsigned int v6; // w1
  unsigned int v7; // w20
  int v8; // w0
  Caver::Proto::MeshMaterial *v9; // x8
  unsigned int v10; // w1
  unsigned int v11; // w20
  int v12; // w0
  Caver::Proto::MeshMaterial *v13; // x8
  unsigned int v14; // w1
  unsigned int v15; // w20
  int v16; // w0
  Caver::Proto::MeshMaterial *v17; // x8
  unsigned int v18; // w1
  unsigned int v19; // w21
  int v20; // w0

  LOBYTE(v2) = *((_BYTE *)this + 56);
  if ( !(_BYTE)v2 )
  {
    v4 = 0;
    goto LABEL_39;
  }
  if ( (*((_BYTE *)this + 56) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      v5 = this;
    else
      v5 = (Caver::Proto::MeshMaterial *)Caver::Proto::MeshMaterial::default_instance_;
    v7 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v5 + 2));
    if ( v7 >= 0x80 )
      v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)v7,
             v6);
    else
      v8 = 1;
    v2 = *((_DWORD *)this + 14);
    v3 = v7 + v8 + 1;
    if ( (v2 & 2) == 0 )
      goto LABEL_20;
    goto LABEL_13;
  }
  v3 = 0;
  if ( (*((_BYTE *)this + 56) & 2) != 0 )
  {
LABEL_13:
    if ( *((_QWORD *)this + 3) )
      v9 = this;
    else
      v9 = (Caver::Proto::MeshMaterial *)Caver::Proto::MeshMaterial::default_instance_;
    v11 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v9 + 3));
    if ( v11 >= 0x80 )
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v11,
              v10);
    else
      v12 = 1;
    v2 = *((_DWORD *)this + 14);
    v3 += v11 + v12 + 1;
  }
LABEL_20:
  if ( (v2 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 4) )
      v13 = this;
    else
      v13 = (Caver::Proto::MeshMaterial *)Caver::Proto::MeshMaterial::default_instance_;
    v15 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v13 + 4));
    if ( v15 >= 0x80 )
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v15,
              v14);
    else
      v16 = 1;
    v2 = *((_DWORD *)this + 14);
    v3 += v15 + v16 + 1;
  }
  if ( (v2 & 8) != 0 )
    v4 = v3 + 5;
  else
    v4 = v3;
  if ( (v2 & 0x10) != 0 )
  {
    if ( *((_QWORD *)this + 6) )
      v17 = this;
    else
      v17 = (Caver::Proto::MeshMaterial *)Caver::Proto::MeshMaterial::default_instance_;
    v19 = Caver::Proto::Texture::ByteSize(*((Caver::Proto::Texture **)v17 + 6));
    if ( v19 >= 0x80 )
      v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v19,
              v18);
    else
      v20 = 1;
    v4 += v19 + v20 + 1;
  }
LABEL_39:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

