/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323E8C
 * Mangled: _ZNK5Caver5Proto26MonsterControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::MonsterControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 28
 *   insn=0x0000000000323E98 string=0x0000000000323E9C "hr@9H"
 *   insn=0x0000000000323E9C string=0x0000000000323EA0 "H"
 *   insn=0x0000000000323EA0 string=0x0000000000323EA4 "h"
 *   insn=0x0000000000323EA4 string=0x0000000000323ED0 "`"
 *   insn=0x0000000000323EA8 string=0x0000000000323EAC "("
 *   insn=0x0000000000323EAC string=0x0000000000323EB0 "`"
 *   insn=0x0000000000323EAC string=0x0000000000323F10 "H"
 *   insn=0x0000000000323EB4 string=0x0000000000323EEC "i"
 *   insn=0x0000000000323EB8 string=0x0000000000323EBC """
 *   insn=0x0000000000323EC4 string=0x0000000000323F0C "4"
 *   insn=0x0000000000323EC8 string=0x0000000000323ECC "&"
 *   insn=0x0000000000323ECC string=0x0000000000323F64 "`\n"
 *   insn=0x0000000000323ED4 string=0x0000000000323EF4 "t"
 *   insn=0x0000000000323EE0 string=0x0000000000323EE4 "h"
 *   insn=0x0000000000323EE4 string=0x0000000000323EE8 "\n"
 *   insn=0x0000000000323EEC string=0x0000000000323EF0 ""
 *   insn=0x0000000000323F00 string=0x0000000000323F04 "h"
 *   insn=0x0000000000323F00 string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000323F04 string=0x0000000000323F08 "\t"
 *   insn=0x0000000000323F10 string=0x0000000000323F14 "`"
 *   insn=0x0000000000323F18 string=0x0000000000323F2C "i"
 *   insn=0x0000000000323F1C string=0x0000000000323F20 "B"
 *   insn=0x0000000000323F24 string=0x0000000000323F28 ""
 *   insn=0x0000000000323F28 string=0x0000000000323F54 "4"
 *   insn=0x0000000000323F2C string=0x0000000000323F30 "\t"
 *   insn=0x0000000000323F34 string=0x0000000000323F38 "h"
 *   insn=0x0000000000323F48 string=0x0000000000323F4C "h"
 *   insn=0x0000000000323F4C string=0x0000000000323F50 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterControllerComponent::ByteSize(
        Caver::Proto::MonsterControllerComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  __int64 result; // x0
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w9
  int v12; // w0
  int v13; // w0

  LOBYTE(v3) = *((_BYTE *)this + 28);
  if ( !(_BYTE)v3 )
  {
    result = 0;
    goto LABEL_29;
  }
  if ( (*((_BYTE *)this + 28) & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 7);
      v4 = v12 + 1;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) != 0 )
        goto LABEL_4;
    }
  }
  else
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 28) & 2) != 0 )
    {
LABEL_4:
      v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
      if ( ((unsigned int)v5 & 0x80000000) != 0 )
      {
        v6 = 11;
      }
      else if ( (unsigned int)v5 >= 0x80 )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
        v3 = *((_DWORD *)this + 7);
        v6 = v9 + 1;
      }
      else
      {
        v6 = 2;
      }
      v4 += v6;
    }
  }
  if ( (v3 & 4) != 0 )
  {
    v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
    if ( ((unsigned int)v10 & 0x80000000) != 0 )
    {
      v11 = 11;
    }
    else if ( (unsigned int)v10 >= 0x80 )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2);
      v3 = *((_DWORD *)this + 7);
      v11 = v13 + 1;
    }
    else
    {
      v11 = 2;
    }
    v4 += v11;
  }
  if ( (v3 & 8) != 0 )
    result = v4 + 5;
  else
    result = v4;
LABEL_29:
  *((_DWORD *)this + 2) = result;
  return result;
}

