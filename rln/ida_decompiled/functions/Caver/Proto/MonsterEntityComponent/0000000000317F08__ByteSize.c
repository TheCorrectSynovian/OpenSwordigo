/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317F08
 * Mangled: _ZNK5Caver5Proto22MonsterEntityComponent8ByteSizeEv
 * Demangled: Caver::Proto::MonsterEntityComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 27
 *   insn=0x0000000000317F18 string=0x0000000000317F1C "h"
 *   insn=0x0000000000317F24 string=0x0000000000317F3C "i"
 *   insn=0x0000000000317F2C string=0x0000000000317F30 ")"
 *   insn=0x0000000000317F2C string=0x0000000000317F88 "i"
 *   insn=0x0000000000317F34 string=0x0000000000317F38 "-"
 *   insn=0x0000000000317F38 string=0x0000000000317FEC "`\n"
 *   insn=0x0000000000317F3C string=0x0000000000317F40 "h\n@"
 *   insn=0x0000000000317F40 string=0x0000000000317F44 ")"
 *   insn=0x0000000000317F48 string=0x0000000000317F4C ")"
 *   insn=0x0000000000317F4C string=0x0000000000317F50 "("
 *   insn=0x0000000000317F54 string=0x0000000000317F58 "^m"
 *   insn=0x0000000000317F58 string=0x00000000001F34D0 "P'"
 *   insn=0x0000000000317F60 string=0x0000000000317F64 "b"
 *   insn=0x0000000000317F6C string=0x0000000000317F78 "h&@"
 *   insn=0x0000000000317F74 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000317F7C string=0x0000000000317F80 "5"
 *   insn=0x0000000000317F88 string=0x0000000000317F8C "h"
 *   insn=0x0000000000317F8C string=0x0000000000317F90 ")"
 *   insn=0x0000000000317F94 string=0x0000000000317F98 ")"
 *   insn=0x0000000000317F98 string=0x0000000000317F9C "("
 *   insn=0x0000000000317FA0 string=0x0000000000317FA4 "Km"
 *   insn=0x0000000000317FAC string=0x0000000000317FB0 "b"
 *   insn=0x0000000000317FB8 string=0x0000000000317FC4 "h&@"
 *   insn=0x0000000000317FC8 string=0x0000000000317FCC ")"
 *   insn=0x0000000000317FCC string=0x0000000000317FD0 "5"
 *   insn=0x0000000000317FDC string=0x0000000000317FE0 "*\t"
 *   insn=0x0000000000317FE4 string=0x0000000000317FE8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::ByteSize(Caver::Proto::MonsterEntityComponent *this)
{
  int v2; // w8
  int v3; // w21
  __int64 result; // x0
  Caver::Proto::MonsterEntityComponent *v5; // x8
  unsigned int v6; // w1
  unsigned int v7; // w20
  int v8; // w0
  Caver::Proto::MonsterEntityComponent *v9; // x8
  unsigned int v10; // w1
  unsigned int v11; // w20
  int v12; // w0
  unsigned int v13; // w9

  LOBYTE(v2) = *((_BYTE *)this + 36);
  if ( !(_BYTE)v2 )
  {
    result = 0;
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 36) & 1) == 0 )
  {
    v3 = 0;
    if ( (*((_BYTE *)this + 36) & 2) == 0 )
      goto LABEL_20;
    goto LABEL_13;
  }
  if ( *((_QWORD *)this + 2) )
    v5 = this;
  else
    v5 = (Caver::Proto::MonsterEntityComponent *)Caver::Proto::MonsterEntityComponent::default_instance_;
  v7 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v5 + 2));
  if ( v7 >= 0x80 )
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)v7,
           v6);
  else
    v8 = 1;
  v2 = *((_DWORD *)this + 9);
  v3 = v7 + v8 + 1;
  if ( (v2 & 2) != 0 )
  {
LABEL_13:
    if ( *((_QWORD *)this + 3) )
      v9 = this;
    else
      v9 = (Caver::Proto::MonsterEntityComponent *)Caver::Proto::MonsterEntityComponent::default_instance_;
    v11 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v9 + 3));
    if ( v11 >= 0x80 )
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v11,
              v10);
    else
      v12 = 1;
    v2 = *((_DWORD *)this + 9);
    v3 += v11 + v12 + 1;
  }
LABEL_20:
  v13 = v3 + 2;
  if ( (v2 & 4) == 0 )
    v13 = v3;
  if ( (v2 & 8) != 0 )
    result = v13 + 2;
  else
    result = v13;
LABEL_25:
  *((_DWORD *)this + 2) = result;
  return result;
}

