/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C3D4
 * Mangled: _ZNK5Caver5Proto19WeaponGlowComponent8ByteSizeEv
 * Demangled: Caver::Proto::WeaponGlowComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 33
 *   insn=0x000000000032C3E4 string=0x000000000032C3E8 "h"
 *   insn=0x000000000032C3F0 string=0x000000000032C408 "`"
 *   insn=0x000000000032C3F4 string=0x000000000032C3F8 "H"
 *   insn=0x000000000032C3F8 string=0x000000000032C3FC "$"
 *   insn=0x000000000032C400 string=0x000000000032C404 "9"
 *   insn=0x000000000032C404 string=0x000000000032C4E8 "`\n"
 *   insn=0x000000000032C40C string=0x000000000032C424 "u"
 *   insn=0x000000000032C414 string=0x000000000032C430 "h'"
 *   insn=0x000000000032C418 string=0x000000000032C41C "("
 *   insn=0x000000000032C41C string=0x000000000032C420 ""
 *   insn=0x000000000032C430 string=0x000000000032C434 "h&@"
 *   insn=0x000000000032C430 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032C440 string=0x000000000032C444 "h\n@"
 *   insn=0x000000000032C444 string=0x000000000032C448 ")MC"
 *   insn=0x000000000032C44C string=0x000000000032C450 ")"
 *   insn=0x000000000032C450 string=0x000000000032C454 "("
 *   insn=0x000000000032C458 string=0x000000000032C45C "Y6"
 *   insn=0x000000000032C45C string=0x00000000001F9DC0 "0'"
 *   insn=0x000000000032C464 string=0x000000000032C468 "b"
 *   insn=0x000000000032C470 string=0x000000000032C47C "h&@"
 *   insn=0x000000000032C474 string=0x000000000032C478 "V'"
 *   insn=0x000000000032C480 string=0x000000000032C484 ")"
 *   insn=0x000000000032C484 string=0x000000000032C488 "5"
 *   insn=0x000000000032C490 string=0x000000000032C494 "h"
 *   insn=0x000000000032C494 string=0x000000000032C498 ")MC"
 *   insn=0x000000000032C49C string=0x000000000032C4A0 ")"
 *   insn=0x000000000032C4A0 string=0x000000000032C4A4 "("
 *   insn=0x000000000032C4A8 string=0x000000000032C4AC "E6"
 *   insn=0x000000000032C4B4 string=0x000000000032C4B8 "b"
 *   insn=0x000000000032C4C0 string=0x000000000032C4CC "h&@"
 *   insn=0x000000000032C4C4 string=0x000000000032C4C8 "B'"
 *   insn=0x000000000032C4D0 string=0x000000000032C4D4 ")"
 *   insn=0x000000000032C4D4 string=0x000000000032C4D8 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WeaponGlowComponent::ByteSize(
        Caver::Proto::WeaponGlowComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w21
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w0
  Caver::Proto::WeaponGlowComponent *v8; // x8
  unsigned int v9; // w1
  unsigned int v10; // w20
  int v11; // w0
  Caver::Proto::WeaponGlowComponent *v12; // x8
  unsigned int v13; // w1
  unsigned int v14; // w20
  int v15; // w0

  LOBYTE(v3) = *((_BYTE *)this + 36);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_31;
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
      v8 = (Caver::Proto::WeaponGlowComponent *)Caver::Proto::WeaponGlowComponent::default_instance_;
    v10 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v8 + 2));
    if ( v10 >= 0x80 )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v10,
              v9);
    else
      v11 = 1;
    v3 = *((_DWORD *)this + 9);
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
  v3 = *((_DWORD *)this + 9);
  v4 = v7 + 1;
  if ( (v3 & 2) != 0 )
    goto LABEL_13;
LABEL_20:
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 3) )
      v12 = this;
    else
      v12 = (Caver::Proto::WeaponGlowComponent *)Caver::Proto::WeaponGlowComponent::default_instance_;
    v14 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v12 + 3));
    if ( v14 >= 0x80 )
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v14,
              v13);
    else
      v15 = 1;
    v3 = *((_DWORD *)this + 9);
    v4 += v14 + v15 + 1;
  }
  if ( (v3 & 8) != 0 )
    result = v4 + 5;
  else
    result = v4;
LABEL_31:
  *((_DWORD *)this + 2) = result;
  return result;
}

