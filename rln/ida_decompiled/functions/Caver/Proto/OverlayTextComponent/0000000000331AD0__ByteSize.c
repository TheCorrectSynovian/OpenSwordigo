/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331AD0
 * Mangled: _ZNK5Caver5Proto20OverlayTextComponent8ByteSizeEv
 * Demangled: Caver::Proto::OverlayTextComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *
 * Referenced strings: 39
 *   insn=0x0000000000331AE0 string=0x0000000000331AE4 "i"
 *   insn=0x0000000000331AEC string=0x0000000000331B04 "t\n@"
 *   insn=0x0000000000331AF4 string=0x0000000000331AF8 "&"
 *   insn=0x0000000000331AF8 string=0x0000000000331B90 "i"
 *   insn=0x0000000000331AFC string=0x0000000000331B00 "J"
 *   insn=0x0000000000331B00 string=0x0000000000331C28 "t\n"
 *   insn=0x0000000000331B08 string=0x0000000000331B0C ""
 *   insn=0x0000000000331B10 string=0x0000000000331B14 "b"
 *   insn=0x0000000000331B18 string=0x0000000000331B1C ""
 *   insn=0x0000000000331B1C string=0x0000000000331B38 "H"
 *   insn=0x0000000000331B24 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000331B28 string=0x0000000000331B2C "i2@"
 *   insn=0x0000000000331B30 string=0x0000000000331B34 ""
 *   insn=0x0000000000331B44 string=0x0000000000331B48 "h"
 *   insn=0x0000000000331B48 string=0x0000000000331B4C ")"
 *   insn=0x0000000000331B50 string=0x0000000000331B54 ")"
 *   insn=0x0000000000331B54 string=0x0000000000331B58 "("
 *   insn=0x0000000000331B60 string=0x00000000001FCDD0 "0'"
 *   insn=0x0000000000331B68 string=0x0000000000331B6C "b"
 *   insn=0x0000000000331B74 string=0x0000000000331B80 "i2@"
 *   insn=0x0000000000331B84 string=0x0000000000331B88 ""
 *   insn=0x0000000000331B90 string=0x0000000000331B94 "i"
 *   insn=0x0000000000331B90 string=0x0000000000331B9C "u"
 *   insn=0x0000000000331B94 string=0x0000000000331B98 "$"
 *   insn=0x0000000000331BA0 string=0x0000000000331BA4 ""
 *   insn=0x0000000000331BA8 string=0x0000000000331BAC "b"
 *   insn=0x0000000000331BB0 string=0x0000000000331BB4 ""
 *   insn=0x0000000000331BB4 string=0x0000000000331BD0 "H"
 *   insn=0x0000000000331BC0 string=0x0000000000331BC4 "i2@"
 *   insn=0x0000000000331BC8 string=0x0000000000331BCC ""
 *   insn=0x0000000000331BD8 string=0x0000000000331BDC "i"
 *   insn=0x0000000000331BE0 string=0x0000000000331BE4 "h"
 *   insn=0x0000000000331BE4 string=0x0000000000331BE8 ")"
 *   insn=0x0000000000331BEC string=0x0000000000331BF0 ")"
 *   insn=0x0000000000331BF0 string=0x0000000000331BF4 "("
 *   insn=0x0000000000331BF8 string=0x0000000000331BFC "u,"
 *   insn=0x0000000000331C04 string=0x0000000000331C08 "b"
 *   insn=0x0000000000331C14 string=0x0000000000331C18 "n"
 *   insn=0x0000000000331C1C string=0x0000000000331C20 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::ByteSize(
        Caver::Proto::OverlayTextComponent *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  Caver::Proto::OverlayTextComponent *v9; // x8
  unsigned int v10; // w21
  int v11; // w0
  _QWORD *v12; // x21
  __int64 v13; // x8
  int v14; // w10
  int v15; // w0
  Caver::Proto::OverlayTextComponent *v16; // x8
  unsigned int v17; // w1
  unsigned int v18; // w21
  int v19; // w0

  LOBYTE(v3) = *((_BYTE *)this + 48);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_31;
  }
  if ( (*((_BYTE *)this + 48) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 48) & 2) == 0 )
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
    v3 = *((_DWORD *)this + 12);
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
      v9 = (Caver::Proto::OverlayTextComponent *)Caver::Proto::OverlayTextComponent::default_instance_;
    v10 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v9 + 3));
    if ( v10 >= 0x80 )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v10,
              a2);
    else
      v11 = 1;
    v3 = *((_DWORD *)this + 12);
    v4 += v10 + v11 + 1;
  }
LABEL_17:
  if ( (v3 & 4) == 0 )
  {
    if ( (v3 & 8) == 0 )
      goto LABEL_31;
    goto LABEL_24;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 4);
  v13 = *(_QWORD *)(*v12 - 24LL);
  if ( (unsigned int)v13 >= 0x80 )
  {
    v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v13,
            a2);
    v3 = *((_DWORD *)this + 12);
    v14 = v15;
    v13 = *(_QWORD *)(*v12 - 24LL);
  }
  else
  {
    v14 = 1;
  }
  v4 += v14 + v13 + 1;
  if ( (v3 & 8) != 0 )
  {
LABEL_24:
    if ( *((_QWORD *)this + 5) )
      v16 = this;
    else
      v16 = (Caver::Proto::OverlayTextComponent *)Caver::Proto::OverlayTextComponent::default_instance_;
    v18 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v16 + 5));
    if ( v18 >= 0x80 )
      v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v18,
              v17);
    else
      v19 = 1;
    v4 += v18 + v19 + 1;
  }
LABEL_31:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

