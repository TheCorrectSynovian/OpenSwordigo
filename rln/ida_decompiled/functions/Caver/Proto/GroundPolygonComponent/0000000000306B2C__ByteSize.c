/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000306B2C
 * Mangled: _ZNK5Caver5Proto22GroundPolygonComponent8ByteSizeEv
 * Demangled: Caver::Proto::GroundPolygonComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *   0x0000000000203210  Caver::Proto::Polygon::ByteSize(void)
 *
 * Referenced strings: 43
 *   insn=0x0000000000306B3C string=0x0000000000306B40 "h"
 *   insn=0x0000000000306B40 string=0x0000000000306B44 "H"
 *   insn=0x0000000000306B44 string=0x0000000000306C2C "i"@"
 *   insn=0x0000000000306B50 string=0x0000000000306B54 "'"
 *   insn=0x0000000000306B58 string=0x0000000000306B5C "h\n@"
 *   insn=0x0000000000306B5C string=0x0000000000306B60 ")"
 *   insn=0x0000000000306B64 string=0x0000000000306B68 ")"
 *   insn=0x0000000000306B68 string=0x0000000000306B6C "("
 *   insn=0x0000000000306B70 string=0x0000000000306B74 "W"
 *   insn=0x0000000000306B74 string=0x00000000001F34D0 "P'"
 *   insn=0x0000000000306B7C string=0x0000000000306B80 "b"
 *   insn=0x0000000000306B88 string=0x0000000000306B94 "hn@"
 *   insn=0x0000000000306B90 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000306B98 string=0x0000000000306B9C "5"
 *   insn=0x0000000000306BA4 string=0x0000000000306BA8 "h*@"
 *   insn=0x0000000000306BA8 string=0x0000000000306BAC ")"
 *   insn=0x0000000000306BB0 string=0x0000000000306BB4 ")"
 *   insn=0x0000000000306BB4 string=0x0000000000306BB8 "("
 *   insn=0x0000000000306BC8 string=0x0000000000306BCC "b"
 *   insn=0x0000000000306BD4 string=0x0000000000306BE0 "hn@"
 *   insn=0x0000000000306BD8 string=0x0000000000306BDC "}"
 *   insn=0x0000000000306BE4 string=0x0000000000306BE8 ")"
 *   insn=0x0000000000306BE8 string=0x0000000000306BEC "5"
 *   insn=0x0000000000306BFC string=0x0000000000306C00 "*"
 *   insn=0x0000000000306C00 string=0x0000000000306C04 ")"
 *   insn=0x0000000000306C08 string=0x0000000000306C0C "*"
 *   insn=0x0000000000306C0C string=0x0000000000306C10 ")"
 *   insn=0x0000000000306C14 string=0x0000000000306C18 "*"
 *   insn=0x0000000000306C18 string=0x0000000000306C1C ")"
 *   insn=0x0000000000306C1C string=0x0000000000306C20 "*\t"
 *   insn=0x0000000000306C24 string=0x0000000000306C28 "("
 *   insn=0x0000000000306C2C string=0x0000000000306C30 "?"
 *   insn=0x0000000000306C30 string=0x0000000000306C34 "4"
 *   insn=0x0000000000306C34 string=0x0000000000306C38 "K"
 *   insn=0x0000000000306C38 string=0x0000000000306C80 "t\n"
 *   insn=0x0000000000306C3C string=0x0000000000306C40 "h"
 *   insn=0x0000000000306C44 string=0x0000000000306C48 "b"
 *   insn=0x0000000000306C48 string=0x00000000001FCDD0 "0'"
 *   insn=0x0000000000306C50 string=0x0000000000306C54 "b"
 *   insn=0x0000000000306C5C string=0x0000000000306C68 "h""
 *   insn=0x0000000000306C60 string=0x0000000000306C64 "["
 *   insn=0x0000000000306C70 string=0x0000000000306C74 "4"
 *   insn=0x0000000000306C78 string=0x0000000000306C7C "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundPolygonComponent::ByteSize(Caver::Proto::GroundPolygonComponent *this)
{
  int v2; // w8
  int v3; // w21
  Caver::Proto::GroundPolygonComponent *v4; // x8
  unsigned int v5; // w1
  unsigned int v6; // w20
  int v7; // w0
  Caver::Proto::GroundPolygonComponent *v8; // x8
  unsigned int v9; // w1
  unsigned int v10; // w20
  int v11; // w0
  int v12; // w9
  int v13; // w9
  unsigned int v14; // w20
  __int64 v15; // x22
  unsigned int v16; // w1
  unsigned int v17; // w21
  int v18; // w0

  v2 = *((unsigned __int8 *)this + 108);
  if ( !*((_BYTE *)this + 108) )
    goto LABEL_30;
  if ( (v2 & 1) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      v4 = this;
    else
      v4 = (Caver::Proto::GroundPolygonComponent *)Caver::Proto::GroundPolygonComponent::default_instance_;
    v6 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v4 + 2));
    if ( v6 >= 0x80 )
      v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)v6,
             v5);
    else
      v7 = 1;
    v2 = *((_DWORD *)this + 27);
    v3 = v6 + v7 + 1;
    if ( (v2 & 4) == 0 )
      goto LABEL_19;
    goto LABEL_12;
  }
  v3 = 0;
  if ( (v2 & 4) != 0 )
  {
LABEL_12:
    if ( *((_QWORD *)this + 10) )
      v8 = this;
    else
      v8 = (Caver::Proto::GroundPolygonComponent *)Caver::Proto::GroundPolygonComponent::default_instance_;
    v10 = Caver::Proto::Polygon::ByteSize(*((Caver::Proto::Polygon **)v8 + 10));
    if ( v10 >= 0x80 )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v10,
              v9);
    else
      v11 = 1;
    v2 = *((_DWORD *)this + 27);
    v3 += v10 + v11 + 1;
  }
LABEL_19:
  v12 = v3 + 2;
  if ( (v2 & 8) == 0 )
    v12 = v3;
  if ( (v2 & 0x10) != 0 )
    v12 += 5;
  if ( (v2 & 0x20) != 0 )
    v12 += 5;
  if ( (v2 & 0x40) != 0 )
    v12 += 5;
  if ( (v2 & 0x80) != 0 )
    v2 = v12 + 2;
  else
    v2 = v12;
LABEL_30:
  v13 = *((_DWORD *)this + 8);
  v14 = v13 + v2;
  if ( v13 >= 1 )
  {
    v15 = 0;
    do
    {
      v17 = Caver::Proto::Vector2::ByteSize(*(Caver::Proto::Vector2 **)(*((_QWORD *)this + 3) + 8 * v15));
      if ( v17 >= 0x80 )
        v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
                (google::protobuf::io::CodedOutputStream *)v17,
                v16);
      else
        v18 = 1;
      ++v15;
      v14 += v17 + v18;
    }
    while ( v15 < *((int *)this + 8) );
  }
  *((_DWORD *)this + 2) = v14;
  return v14;
}

