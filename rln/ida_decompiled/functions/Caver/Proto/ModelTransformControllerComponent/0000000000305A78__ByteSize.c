/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305A78
 * Mangled: _ZNK5Caver5Proto33ModelTransformControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::ModelTransformControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 32
 *   insn=0x0000000000305A88 string=0x0000000000305A8C "h"
 *   insn=0x0000000000305A94 string=0x0000000000305AAC "`"
 *   insn=0x0000000000305A98 string=0x0000000000305A9C "H"
 *   insn=0x0000000000305A9C string=0x0000000000305AA0 "$"
 *   insn=0x0000000000305A9C string=0x0000000000305AE4 "\t"
 *   insn=0x0000000000305AA4 string=0x0000000000305AA8 "<"
 *   insn=0x0000000000305AA8 string=0x0000000000305B98 "`\n"
 *   insn=0x0000000000305AB0 string=0x0000000000305AC8 "u"
 *   insn=0x0000000000305ABC string=0x0000000000305AC0 "("
 *   insn=0x0000000000305AC0 string=0x0000000000305AC4 ""
 *   insn=0x0000000000305AD4 string=0x0000000000305AD8 "h*@"
 *   insn=0x0000000000305AD4 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000305AE4 string=0x0000000000305AE8 "h\n@"
 *   insn=0x0000000000305AE8 string=0x0000000000305AEC ")1A"
 *   insn=0x0000000000305AF0 string=0x0000000000305AF4 ")"
 *   insn=0x0000000000305AF4 string=0x0000000000305AF8 "("
 *   insn=0x0000000000305B08 string=0x0000000000305B0C "b"
 *   insn=0x0000000000305B14 string=0x0000000000305B20 "h*@"
 *   insn=0x0000000000305B24 string=0x0000000000305B28 ")"
 *   insn=0x0000000000305B28 string=0x0000000000305B2C "5"
 *   insn=0x0000000000305B30 string=0x0000000000305B34 "\t"
 *   insn=0x0000000000305B34 string=0x0000000000305B38 "h"
 *   insn=0x0000000000305B38 string=0x0000000000305B3C ")1A"
 *   insn=0x0000000000305B40 string=0x0000000000305B44 ")"
 *   insn=0x0000000000305B44 string=0x0000000000305B48 "("
 *   insn=0x0000000000305B4C string=0x0000000000305B50 "x"
 *   insn=0x0000000000305B58 string=0x0000000000305B5C "b"
 *   insn=0x0000000000305B64 string=0x0000000000305B70 "h*@"
 *   insn=0x0000000000305B74 string=0x0000000000305B78 ")"
 *   insn=0x0000000000305B78 string=0x0000000000305B7C "5"
 *   insn=0x0000000000305B88 string=0x0000000000305B8C "*"
 *   insn=0x0000000000305B90 string=0x0000000000305B94 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::ByteSize(
        Caver::Proto::ModelTransformControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w21
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  Caver::Proto::ModelTransformControllerComponent *v8; // x8
  unsigned int v9; // w1
  unsigned int v10; // w20
  int v11; // w0
  Caver::Proto::ModelTransformControllerComponent *v12; // x8
  unsigned int v13; // w1
  unsigned int v14; // w20
  int v15; // w0
  unsigned int v16; // w9

  LOBYTE(v3) = *((_BYTE *)this + 40);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_33;
  }
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 40) & 2) == 0 )
      goto LABEL_20;
LABEL_13:
    if ( *((_QWORD *)this + 2) )
      v8 = this;
    else
      v8 = (Caver::Proto::ModelTransformControllerComponent *)Caver::Proto::ModelTransformControllerComponent::default_instance_;
    v10 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v8 + 2));
    if ( v10 >= 0x80 )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v10,
              v9);
    else
      v11 = 1;
    v3 = *((_DWORD *)this + 10);
    v4 += v10 + v11 + 1;
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
  v3 = *((_DWORD *)this + 10);
  v4 = v7 + 1;
  if ( (v3 & 2) != 0 )
    goto LABEL_13;
LABEL_20:
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 3) )
      v12 = this;
    else
      v12 = (Caver::Proto::ModelTransformControllerComponent *)Caver::Proto::ModelTransformControllerComponent::default_instance_;
    v14 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v12 + 3));
    if ( v14 >= 0x80 )
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v14,
              v13);
    else
      v15 = 1;
    v3 = *((_DWORD *)this + 10);
    v4 += v14 + v15 + 1;
  }
  v16 = v4 + 5;
  if ( (v3 & 8) == 0 )
    v16 = v4;
  if ( (v3 & 0x10) != 0 )
    result = v16 + 5;
  else
    result = v16;
LABEL_33:
  *((_DWORD *)this + 2) = result;
  return result;
}

