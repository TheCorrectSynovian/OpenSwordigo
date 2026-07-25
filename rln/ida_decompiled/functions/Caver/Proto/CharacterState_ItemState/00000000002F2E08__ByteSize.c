/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2E08
 * Mangled: _ZNK5Caver5Proto24CharacterState_ItemState8ByteSizeEv
 * Demangled: Caver::Proto::CharacterState_ItemState::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 16
 *   insn=0x00000000002F2E14 string=0x00000000002F2E18 "ir@9I"
 *   insn=0x00000000002F2E18 string=0x00000000002F2E1C "I"
 *   insn=0x00000000002F2E1C string=0x00000000002F2E20 "i"
 *   insn=0x00000000002F2E20 string=0x00000000002F2E4C "t\n@"
 *   insn=0x00000000002F2E28 string=0x00000000002F2E2C "`"
 *   insn=0x00000000002F2E28 string=0x00000000002F2EA4 "t\n"
 *   insn=0x00000000002F2E30 string=0x00000000002F2E90 "h"
 *   insn=0x00000000002F2E50 string=0x00000000002F2E54 ""
 *   insn=0x00000000002F2E58 string=0x00000000002F2E5C "b"
 *   insn=0x00000000002F2E60 string=0x00000000002F2E64 ""
 *   insn=0x00000000002F2E64 string=0x00000000002F2E80 "H"
 *   insn=0x00000000002F2E6C string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002F2E70 string=0x00000000002F2E74 "i"
 *   insn=0x00000000002F2E78 string=0x00000000002F2E7C ""
 *   insn=0x00000000002F2E84 string=0x00000000002F2E88 ")"
 *   insn=0x00000000002F2E98 string=0x00000000002F2E9C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState_ItemState::ByteSize(
        Caver::Proto::CharacterState_ItemState *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w8
  _QWORD *v7; // x20
  __int64 v8; // x8
  int v9; // w10
  int v10; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_16;
  }
  if ( (*((_BYTE *)this + 28) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 28) & 2) == 0 )
      goto LABEL_16;
    goto LABEL_4;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  v8 = *(_QWORD *)(*v7 - 24LL);
  if ( (unsigned int)v8 >= 0x80 )
  {
    v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v8,
            a2);
    v3 = *((_DWORD *)this + 7);
    v9 = v10;
    v8 = *(_QWORD *)(*v7 - 24LL);
  }
  else
  {
    v9 = 1;
  }
  v4 = v9 + v8 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_4:
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v5 & 0x80000000) != 0 )
    {
      v6 = 11;
    }
    else if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2) + 1;
    }
    else
    {
      v6 = 2;
    }
    v4 += v6;
  }
LABEL_16:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

