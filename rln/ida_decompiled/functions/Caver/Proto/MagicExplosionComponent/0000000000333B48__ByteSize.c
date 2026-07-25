/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333B48
 * Mangled: _ZNK5Caver5Proto23MagicExplosionComponent8ByteSizeEv
 * Demangled: Caver::Proto::MagicExplosionComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 28
 *   insn=0x0000000000333B58 string=0x0000000000333B5C "h"
 *   insn=0x0000000000333B64 string=0x0000000000333B7C "`"
 *   insn=0x0000000000333B68 string=0x0000000000333B6C "H"
 *   insn=0x0000000000333B6C string=0x0000000000333B70 "$"
 *   insn=0x0000000000333B74 string=0x0000000000333B78 "4"
 *   insn=0x0000000000333B78 string=0x0000000000333C48 "t\n"
 *   insn=0x0000000000333B80 string=0x0000000000333B98 "u"
 *   insn=0x0000000000333B8C string=0x0000000000333B90 "("
 *   insn=0x0000000000333B90 string=0x0000000000333B94 ""
 *   insn=0x0000000000333BA4 string=0x0000000000333BA8 "h&@"
 *   insn=0x0000000000333BA4 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000333BB4 string=0x0000000000333BB8 "h\n@"
 *   insn=0x0000000000333BB8 string=0x0000000000333BBC ")G"
 *   insn=0x0000000000333BC0 string=0x0000000000333BC4 ")"
 *   insn=0x0000000000333BC4 string=0x0000000000333BC8 "("
 *   insn=0x0000000000333BCC string=0x0000000000333BD0 "|"
 *   insn=0x0000000000333BD0 string=0x00000000001F9DC0 "0'"
 *   insn=0x0000000000333BD8 string=0x0000000000333BDC "b"
 *   insn=0x0000000000333BE4 string=0x0000000000333BF0 "h&@"
 *   insn=0x0000000000333BE8 string=0x0000000000333BEC "y\t"
 *   insn=0x0000000000333BF4 string=0x0000000000333BF8 ")"
 *   insn=0x0000000000333BF8 string=0x0000000000333BFC "5"
 *   insn=0x0000000000333C08 string=0x0000000000333C0C "*"
 *   insn=0x0000000000333C10 string=0x0000000000333C14 "4"
 *   insn=0x0000000000333C18 string=0x0000000000333C1C "`"@"
 *   insn=0x0000000000333C20 string=0x0000000000333C34 "h"
 *   insn=0x0000000000333C28 string=0x0000000000333C3C "e\t"
 *   insn=0x0000000000333C3C string=0x0000000000333C40 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicExplosionComponent::ByteSize(
        Caver::Proto::MagicExplosionComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w21
  unsigned int v5; // w20
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  Caver::Proto::MagicExplosionComponent *v8; // x8
  unsigned int v9; // w20
  int v10; // w0
  int v11; // w9
  google::protobuf::io::CodedOutputStream *v12; // x0
  int v13; // w8

  LOBYTE(v3) = *((_BYTE *)this + 36);
  if ( !(_BYTE)v3 )
  {
    v5 = 0;
    goto LABEL_32;
  }
  if ( (*((_BYTE *)this + 36) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 36) & 2) == 0 )
      goto LABEL_20;
LABEL_13:
    if ( *((_QWORD *)this + 2) )
      v8 = this;
    else
      v8 = (Caver::Proto::MagicExplosionComponent *)Caver::Proto::MagicExplosionComponent::default_instance_;
    v9 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v8 + 2));
    if ( v9 >= 0x80 )
      v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v9,
              a2);
    else
      v10 = 1;
    v3 = *((_DWORD *)this + 9);
    v4 += v9 + v10 + 1;
    goto LABEL_20;
  }
  v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
  if ( ((unsigned int)v6 & 0x80000000) != 0 )
  {
    v4 = 11;
    if ( (v3 & 2) == 0 )
      goto LABEL_20;
    goto LABEL_13;
  }
  if ( (unsigned int)v6 < 0x80 )
  {
    v4 = 2;
    if ( (v3 & 2) == 0 )
      goto LABEL_20;
    goto LABEL_13;
  }
  v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
  v3 = *((_DWORD *)this + 9);
  v4 = v7 + 1;
  if ( (v3 & 2) != 0 )
    goto LABEL_13;
LABEL_20:
  v11 = v4 + 5;
  if ( (v3 & 4) == 0 )
    v11 = v4;
  if ( (v3 & 8) != 0 )
    v5 = v11 + 5;
  else
    v5 = v11;
  if ( (v3 & 0x10) != 0 )
  {
    v12 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 8);
    if ( ((unsigned int)v12 & 0x80000000) != 0 )
    {
      v13 = 11;
    }
    else if ( (unsigned int)v12 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, a2) + 1;
    }
    else
    {
      v13 = 2;
    }
    v5 += v13;
  }
LABEL_32:
  *((_DWORD *)this + 2) = v5;
  return v5;
}

