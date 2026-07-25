/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4F48
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream28WriteVarint32FallbackToArrayEjPh
 * Demangled: google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000004E4F4C string=0x00000000004E4F50 "("
 *   insn=0x00000000004E4F54 string=0x00000000004E4F58 "|S"
 *   insn=0x00000000004E4F54 string=0x00000000004E4FA4 ""
 *   insn=0x00000000004E4F58 string=0x00000000004E4F5C ""
 *   insn=0x00000000004E4F60 string=0x00000000004E4F64 "("
 *   insn=0x00000000004E4F68 string=0x00000000004E4F6C "|"
 *   insn=0x00000000004E4F68 string=0x00000000004E4FB8 "4S("
 *   insn=0x00000000004E4F6C string=0x00000000004E4F70 ""
 *   insn=0x00000000004E4F74 string=0x00000000004E4F78 "("
 *   insn=0x00000000004E4F7C string=0x00000000004E4F80 "|"
 *   insn=0x00000000004E4F7C string=0x00000000004E4FCC "P"
 *   insn=0x00000000004E4F80 string=0x00000000004E4F84 "\t"
 *   insn=0x00000000004E4F84 string=0x00000000004E4F88 "|"
 *   insn=0x00000000004E4F88 string=0x00000000004E4F8C ")"
 *   insn=0x00000000004E4F90 string=0x00000000004E4F94 "("
 *   insn=0x00000000004E4F90 string=0x00000000004E4FE0 "l"
 *   insn=0x00000000004E4F98 string=0x00000000004E4F9C " "
 *   insn=0x00000000004E4FA4 string=0x00000000004E4FA8 "("
 *   insn=0x00000000004E4FAC string=0x00000000004E4FB0 " "
 *   insn=0x00000000004E4FB8 string=0x00000000004E4FBC "("
 *   insn=0x00000000004E4FC0 string=0x00000000004E4FC4 " "
 *   insn=0x00000000004E4FCC string=0x00000000004E4FD0 "("
 *   insn=0x00000000004E4FD4 string=0x00000000004E4FD8 " "
 *   insn=0x00000000004E4FE0 string=0x00000000004E4FE4 "("
 *   insn=0x00000000004E4FE8 string=0x00000000004E4FEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(
        google::protobuf::io::CodedOutputStream *this,
        _BYTE *a2,
        unsigned __int8 *a3)
{
  *a2 = (unsigned __int8)this | 0x80;
  if ( (unsigned int)this < 0x80 )
  {
    *a2 = (unsigned __int8)this & 0x7F;
    return a2 + 1;
  }
  else
  {
    a2[1] = ((unsigned int)this >> 7) | 0x80;
    if ( (unsigned int)this < 0x4000 )
    {
      a2[1] = ((unsigned int)this >> 7) & 0x7F;
      return a2 + 2;
    }
    else
    {
      a2[2] = ((unsigned int)this >> 14) | 0x80;
      if ( (unsigned int)this < 0x200000 )
      {
        a2[2] = ((unsigned int)this >> 14) & 0x7F;
        return a2 + 3;
      }
      else
      {
        a2[3] = ((unsigned int)this >> 21) | 0x80;
        if ( (unsigned int)this >> 28 )
        {
          a2[4] = (unsigned int)this >> 28;
          return a2 + 5;
        }
        else
        {
          a2[3] = ((unsigned int)this >> 21) & 0x7F;
          return a2 + 4;
        }
      }
    }
  }
}

