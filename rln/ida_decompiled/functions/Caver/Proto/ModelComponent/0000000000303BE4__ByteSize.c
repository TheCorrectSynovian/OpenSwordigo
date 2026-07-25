/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303BE4
 * Mangled: _ZNK5Caver5Proto14ModelComponent8ByteSizeEv
 * Demangled: Caver::Proto::ModelComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 49
 *   insn=0x0000000000303BF4 string=0x0000000000303BF8 "i"A9"
 *   insn=0x0000000000303C00 string=0x0000000000303C18 "t\n@"
 *   insn=0x0000000000303C08 string=0x0000000000303C0C "&"
 *   insn=0x0000000000303C08 string=0x0000000000303C58 ")"
 *   insn=0x0000000000303C10 string=0x0000000000303C14 "W"
 *   insn=0x0000000000303C14 string=0x0000000000303D70 "t\n"
 *   insn=0x0000000000303C1C string=0x0000000000303C20 ""
 *   insn=0x0000000000303C24 string=0x0000000000303C28 "b"
 *   insn=0x0000000000303C2C string=0x0000000000303C30 ""
 *   insn=0x0000000000303C30 string=0x0000000000303C4C "H"
 *   insn=0x0000000000303C34 string=0x0000000000303C38 "f"
 *   insn=0x0000000000303C38 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000303C3C string=0x0000000000303C40 "iJ@"
 *   insn=0x0000000000303C44 string=0x0000000000303C48 ""
 *   insn=0x0000000000303C58 string=0x0000000000303C5C "h"
 *   insn=0x0000000000303C5C string=0x0000000000303C60 ")y@"
 *   insn=0x0000000000303C64 string=0x0000000000303C68 ")"
 *   insn=0x0000000000303C68 string=0x0000000000303C6C "("
 *   insn=0x0000000000303C70 string=0x0000000000303C74 "/"
 *   insn=0x0000000000303C7C string=0x0000000000303C80 "b"
 *   insn=0x0000000000303C88 string=0x0000000000303C94 "iJ@"
 *   insn=0x0000000000303C8C string=0x0000000000303C90 "P"
 *   insn=0x0000000000303C98 string=0x0000000000303C9C ""
 *   insn=0x0000000000303CA4 string=0x0000000000303CA8 "?"
 *   insn=0x0000000000303CAC string=0x0000000000303CB0 "?"
 *   insn=0x0000000000303CB0 string=0x0000000000303CB4 "\n"
 *   insn=0x0000000000303CB4 string=0x0000000000303CB8 ""
 *   insn=0x0000000000303CB8 string=0x0000000000303CBC "\n"
 *   insn=0x0000000000303CBC string=0x0000000000303CC0 "?"
 *   insn=0x0000000000303CC8 string=0x0000000000303CCC ")"
 *   insn=0x0000000000303CCC string=0x0000000000303CD0 "h"
 *   insn=0x0000000000303CD0 string=0x0000000000303CD4 ")y@"
 *   insn=0x0000000000303CD8 string=0x0000000000303CDC ")"
 *   insn=0x0000000000303CDC string=0x0000000000303CE0 "("
 *   insn=0x0000000000303CE4 string=0x0000000000303CE8 "6"
 *   insn=0x0000000000303CE8 string=0x00000000001F9DC0 "0'"
 *   insn=0x0000000000303CF0 string=0x0000000000303CF4 "b"
 *   insn=0x0000000000303CFC string=0x0000000000303D08 "iJ@"
 *   insn=0x0000000000303D00 string=0x0000000000303D04 "3"
 *   insn=0x0000000000303D0C string=0x0000000000303D10 ""
 *   insn=0x0000000000303D18 string=0x0000000000303D1C "?"
 *   insn=0x0000000000303D20 string=0x0000000000303D24 "i"
 *   insn=0x0000000000303D24 string=0x0000000000303D28 ")"
 *   insn=0x0000000000303D28 string=0x0000000000303D2C "h"@"
 *   insn=0x0000000000303D2C string=0x0000000000303D30 ")y@"
 *   insn=0x0000000000303D34 string=0x0000000000303D38 ")"
 *   insn=0x0000000000303D38 string=0x0000000000303D3C "("
 *   insn=0x0000000000303D4C string=0x0000000000303D50 "b"
 *   insn=0x0000000000303D64 string=0x0000000000303D68 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::ByteSize(Caver::Proto::ModelComponent *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w21
  unsigned int v5; // w20
  _QWORD *v6; // x20
  __int64 v7; // x8
  int v8; // w10
  int v9; // w0
  Caver::Proto::ModelComponent *v10; // x8
  unsigned int v11; // w1
  unsigned int v12; // w20
  int v13; // w0
  unsigned int v14; // w8
  unsigned int v15; // w21
  Caver::Proto::ModelComponent *v16; // x8
  unsigned int v17; // w1
  unsigned int v18; // w20
  int v19; // w0
  Caver::Proto::ModelComponent *v20; // x8
  unsigned int v21; // w1
  unsigned int v22; // w21
  int v23; // w0

  LOBYTE(v3) = *((_BYTE *)this + 72);
  if ( !(_BYTE)v3 )
  {
    v5 = 0;
    goto LABEL_43;
  }
  if ( (*((_BYTE *)this + 72) & 1) != 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 2);
    v7 = *(_QWORD *)(*v6 - 24LL);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
             (google::protobuf::io::CodedOutputStream *)(unsigned int)v7,
             a2);
      v3 = *((_DWORD *)this + 18);
      v8 = v9;
      v7 = *(_QWORD *)(*v6 - 24LL);
    }
    else
    {
      v8 = 1;
    }
    v4 = v8 + v7 + 1;
    if ( (v3 & 2) == 0 )
      goto LABEL_17;
    goto LABEL_10;
  }
  v4 = 0;
  if ( (*((_BYTE *)this + 72) & 2) != 0 )
  {
LABEL_10:
    if ( *((_QWORD *)this + 3) )
      v10 = this;
    else
      v10 = (Caver::Proto::ModelComponent *)Caver::Proto::ModelComponent::default_instance_;
    v12 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v10 + 3));
    if ( v12 >= 0x80 )
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v12,
              v11);
    else
      v13 = 1;
    v3 = *((_DWORD *)this + 18);
    v4 += v12 + v13 + 1;
  }
LABEL_17:
  v14 = v4 + 5;
  if ( (v3 & 4) == 0 )
    v14 = v4;
  if ( (v3 & 8) != 0 )
    v14 += 5;
  if ( (v3 & 0x10) != 0 )
    v15 = v14 + 5;
  else
    v15 = v14;
  if ( (v3 & 0x20) != 0 )
  {
    if ( *((_QWORD *)this + 6) )
      v16 = this;
    else
      v16 = (Caver::Proto::ModelComponent *)Caver::Proto::ModelComponent::default_instance_;
    v18 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v16 + 6));
    if ( v18 >= 0x80 )
      v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v18,
              v17);
    else
      v19 = 1;
    v3 = *((_DWORD *)this + 18);
    v15 += v18 + v19 + 1;
  }
  if ( (v3 & 0x40) != 0 )
    v5 = v15 + 2;
  else
    v5 = v15;
  if ( (v3 & 0x80) != 0 )
  {
    if ( *((_QWORD *)this + 8) )
      v20 = this;
    else
      v20 = (Caver::Proto::ModelComponent *)Caver::Proto::ModelComponent::default_instance_;
    v22 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v20 + 8));
    if ( v22 >= 0x80 )
      v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v22,
              v21);
    else
      v23 = 1;
    v5 += v22 + v23 + 1;
  }
LABEL_43:
  *((_DWORD *)this + 2) = v5;
  return v5;
}

