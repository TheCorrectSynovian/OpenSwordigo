/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5268
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream20WriteVarint64ToArrayEmPh
 * Demangled: google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 45
 *   insn=0x00000000004E5268 string=0x00000000004E526C "\t"
 *   insn=0x00000000004E5270 string=0x00000000004E5274 "_"
 *   insn=0x00000000004E5270 string=0x00000000004E5284 "\t"
 *   insn=0x00000000004E5274 string=0x00000000004E5278 "B"
 *   insn=0x00000000004E5278 string=0x00000000004E527C "("
 *   insn=0x00000000004E5278 string=0x00000000004E52A0 ""
 *   insn=0x00000000004E5280 string=0x00000000004E52B0 "J"
 *   insn=0x00000000004E5284 string=0x00000000004E5288 "(}"
 *   insn=0x00000000004E5284 string=0x00000000004E5324 "|"
 *   insn=0x00000000004E528C string=0x00000000004E5290 "?"
 *   insn=0x00000000004E528C string=0x00000000004E533C "?"
 *   insn=0x00000000004E5290 string=0x00000000004E5294 "B"
 *   insn=0x00000000004E529C string=0x00000000004E52DC ")"
 *   insn=0x00000000004E52A0 string=0x00000000004E52A4 ""
 *   insn=0x00000000004E52A4 string=0x00000000004E52A8 "($"
 *   insn=0x00000000004E52A8 string=0x00000000004E52AC "H"
 *   insn=0x00000000004E52B0 string=0x00000000004E52B4 "* "
 *   insn=0x00000000004E52B4 string=0x00000000004E52B8 "\n"
 *   insn=0x00000000004E52B8 string=0x00000000004E52BC "J"
 *   insn=0x00000000004E52BC string=0x00000000004E52C0 "*"
 *   insn=0x00000000004E52C0 string=0x00000000004E52C4 "\n"
 *   insn=0x00000000004E52C4 string=0x00000000004E52C8 "J"
 *   insn=0x00000000004E52C8 string=0x00000000004E52CC "*"
 *   insn=0x00000000004E52CC string=0x00000000004E52D0 "\n"
 *   insn=0x00000000004E52D0 string=0x00000000004E52D4 "J"
 *   insn=0x00000000004E52D4 string=0x00000000004E52D8 "*"
 *   insn=0x00000000004E52DC string=0x00000000004E52E0 ")"
 *   insn=0x00000000004E52E0 string=0x00000000004E52E4 "\t|"
 *   insn=0x00000000004E52E4 string=0x00000000004E52E8 ")"
 *   insn=0x00000000004E52E8 string=0x00000000004E52EC ")"
 *   insn=0x00000000004E52EC string=0x00000000004E52F0 "\t|"
 *   insn=0x00000000004E52F0 string=0x00000000004E52F4 ")"
 *   insn=0x00000000004E52F4 string=0x00000000004E52F8 ")"
 *   insn=0x00000000004E52F8 string=0x00000000004E52FC "\t|S)"
 *   insn=0x00000000004E52FC string=0x00000000004E5300 ")"
 *   insn=0x00000000004E5300 string=0x00000000004E5304 ")"
 *   insn=0x00000000004E5304 string=0x00000000004E5308 "\t"
 *   insn=0x00000000004E5308 string=0x00000000004E530C ")"
 *   insn=0x00000000004E530C string=0x00000000004E5310 " "
 *   insn=0x00000000004E5310 string=0x00000000004E5314 ""
 *   insn=0x00000000004E5314 string=0x00000000004E5318 ""
 *   insn=0x00000000004E5318 string=0x00000000004E531C ""
 *   insn=0x00000000004E5324 string=0x00000000004E5328 "("
 *   insn=0x00000000004E533C string=0x00000000004E5340 """
 *   insn=0x00000000004E534C string=0x00000000004E5350 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__fastcall google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(
        unsigned __int64 this,
        _BYTE *a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v3; // x9
  int v4; // w8
  _BYTE *result; // x0

  v3 = this >> 28;
  if ( HIBYTE(this) )
  {
    if ( (unsigned int)HIBYTE(this) >= 0x80 )
    {
      a2[9] = ((this & 0x8000000000000000LL) != 0LL) | 0x80;
      v4 = 10;
    }
    else
    {
      v4 = 9;
    }
    a2[8] = HIBYTE(this) | 0x80;
    goto LABEL_10;
  }
  if ( (_DWORD)v3 )
  {
    if ( !((unsigned int)v3 >> 14) )
    {
      if ( (unsigned int)v3 < 0x80 )
      {
        v4 = 5;
LABEL_13:
        a2[4] = v3 | 0x80;
        goto LABEL_14;
      }
      v4 = 6;
LABEL_12:
      a2[5] = (this >> 35) | 0x80;
      goto LABEL_13;
    }
    if ( (unsigned int)v3 < 0x200000 )
    {
      v4 = 7;
      goto LABEL_11;
    }
    v4 = 8;
LABEL_10:
    a2[7] = (this >> 49) | 0x80;
LABEL_11:
    a2[6] = (this >> 42) | 0x80;
    goto LABEL_12;
  }
  if ( (unsigned int)this >> 14 )
  {
    if ( (unsigned int)this < 0x200000 )
    {
      v4 = 3;
      goto LABEL_15;
    }
    v4 = 4;
LABEL_14:
    a2[3] = ((unsigned int)this >> 21) | 0x80;
LABEL_15:
    a2[2] = ((unsigned int)this >> 14) | 0x80;
    goto LABEL_16;
  }
  if ( (unsigned int)this < 0x80 )
  {
    v4 = 1;
    goto LABEL_17;
  }
  v4 = 2;
LABEL_16:
  a2[1] = ((unsigned int)this >> 7) | 0x80;
LABEL_17:
  *a2 = this | 0x80;
  result = &a2[v4];
  *(result - 1) &= ~0x80u;
  return result;
}

