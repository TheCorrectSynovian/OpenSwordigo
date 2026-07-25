/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B404
 * Mangled: _ZNK5Caver5Proto14ShapeComponent8ByteSizeEv
 * Demangled: Caver::Proto::ShapeComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F3B40  Caver::Proto::Circle::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE3C0  Caver::Proto::Rectangle::ByteSize(void)
 *   0x0000000000203210  Caver::Proto::Polygon::ByteSize(void)
 *
 * Referenced strings: 32
 *   insn=0x000000000030B414 string=0x000000000030B418 "h"
 *   insn=0x000000000030B428 string=0x000000000030B42C ")"
 *   insn=0x000000000030B42C string=0x000000000030B4D0 "h"
 *   insn=0x000000000030B430 string=0x000000000030B434 ":"
 *   insn=0x000000000030B434 string=0x000000000030B51C "t\n"
 *   insn=0x000000000030B438 string=0x000000000030B43C "h\n@"
 *   insn=0x000000000030B43C string=0x000000000030B440 ")"
 *   insn=0x000000000030B444 string=0x000000000030B448 ")"
 *   insn=0x000000000030B448 string=0x000000000030B44C "("
 *   insn=0x000000000030B45C string=0x000000000030B460 "b"
 *   insn=0x000000000030B468 string=0x000000000030B474 "h*@"
 *   insn=0x000000000030B46C string=0x000000000030B470 "X"
 *   insn=0x000000000030B470 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030B478 string=0x000000000030B47C "4"
 *   insn=0x000000000030B484 string=0x000000000030B488 "h"
 *   insn=0x000000000030B488 string=0x000000000030B48C ")"
 *   insn=0x000000000030B490 string=0x000000000030B494 ")"
 *   insn=0x000000000030B494 string=0x000000000030B498 "("
 *   insn=0x000000000030B4A0 string=0x00000000001F3B40 "P'"
 *   insn=0x000000000030B4A8 string=0x000000000030B4AC "b"
 *   insn=0x000000000030B4B4 string=0x000000000030B4C0 "h*@"
 *   insn=0x000000000030B4B8 string=0x000000000030B4BC "E"
 *   insn=0x000000000030B4C4 string=0x000000000030B4C8 ")"
 *   insn=0x000000000030B4C8 string=0x000000000030B4CC "4"
 *   insn=0x000000000030B4D4 string=0x000000000030B4D8 "h"
 *   insn=0x000000000030B4D8 string=0x000000000030B4DC ")"
 *   insn=0x000000000030B4E0 string=0x000000000030B4E4 ")"
 *   insn=0x000000000030B4E4 string=0x000000000030B4E8 "("
 *   insn=0x000000000030B4EC string=0x000000000030B4F0 "H"
 *   insn=0x000000000030B4F8 string=0x000000000030B4FC "b"
 *   insn=0x000000000030B508 string=0x000000000030B50C "1"
 *   insn=0x000000000030B510 string=0x000000000030B514 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShapeComponent::ByteSize(Caver::Proto::ShapeComponent *this)
{
  int v2; // w8
  unsigned int v3; // w20
  Caver::Proto::ShapeComponent *v4; // x8
  unsigned int v5; // w1
  unsigned int v6; // w20
  int v7; // w0
  Caver::Proto::ShapeComponent *v8; // x8
  unsigned int v9; // w1
  unsigned int v10; // w21
  int v11; // w0
  Caver::Proto::ShapeComponent *v12; // x8
  unsigned int v13; // w1
  unsigned int v14; // w21
  int v15; // w0

  LOBYTE(v2) = *((_BYTE *)this + 40);
  if ( !(_BYTE)v2 )
  {
    v3 = 0;
    goto LABEL_28;
  }
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v3 = 0;
    if ( (*((_BYTE *)this + 40) & 2) == 0 )
      goto LABEL_20;
    goto LABEL_13;
  }
  if ( *((_QWORD *)this + 2) )
    v4 = this;
  else
    v4 = (Caver::Proto::ShapeComponent *)Caver::Proto::ShapeComponent::default_instance_;
  v6 = Caver::Proto::Rectangle::ByteSize(*((Caver::Proto::Rectangle **)v4 + 2));
  if ( v6 >= 0x80 )
    v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)v6,
           v5);
  else
    v7 = 1;
  v2 = *((_DWORD *)this + 10);
  v3 = v6 + v7 + 1;
  if ( (v2 & 2) != 0 )
  {
LABEL_13:
    if ( *((_QWORD *)this + 3) )
      v8 = this;
    else
      v8 = (Caver::Proto::ShapeComponent *)Caver::Proto::ShapeComponent::default_instance_;
    v10 = Caver::Proto::Circle::ByteSize(*((Caver::Proto::Circle **)v8 + 3));
    if ( v10 >= 0x80 )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v10,
              v9);
    else
      v11 = 1;
    v2 = *((_DWORD *)this + 10);
    v3 += v10 + v11 + 1;
  }
LABEL_20:
  if ( (v2 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 4) )
      v12 = this;
    else
      v12 = (Caver::Proto::ShapeComponent *)Caver::Proto::ShapeComponent::default_instance_;
    v14 = Caver::Proto::Polygon::ByteSize(*((Caver::Proto::Polygon **)v12 + 4));
    if ( v14 >= 0x80 )
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v14,
              v13);
    else
      v15 = 1;
    v3 += v14 + v15 + 1;
  }
LABEL_28:
  *((_DWORD *)this + 2) = v3;
  return v3;
}

