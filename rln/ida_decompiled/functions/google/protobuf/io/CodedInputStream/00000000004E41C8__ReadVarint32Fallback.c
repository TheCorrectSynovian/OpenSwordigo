/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E41C8
 * Mangled: _ZN6google8protobuf2io16CodedInputStream20ReadVarint32FallbackEPj
 * Demangled: google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *
 * Callers: 1
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203580  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Referenced strings: 50
 *   insn=0x00000000004E41D4 string=0x00000000004E41D8 "T"
 *   insn=0x00000000004E41E4 string=0x00000000004E41E8 "\t"
 *   insn=0x00000000004E41E8 string=0x00000000004E41EC "\n"
 *   insn=0x00000000004E41EC string=0x00000000004E41F0 "_%"
 *   insn=0x00000000004E41FC string=0x00000000004E4200 ""
 *   insn=0x00000000004E4200 string=0x00000000004E4204 "h"
 *   insn=0x00000000004E4208 string=0x00000000004E420C "K"
 *   insn=0x00000000004E420C string=0x00000000004E4210 "h"
 *   insn=0x00000000004E4210 string=0x00000000004E4214 "+"
 *   insn=0x00000000004E4214 string=0x00000000004E4218 "*"
 *   insn=0x00000000004E4214 string=0x00000000004E42D8 "h"
 *   insn=0x00000000004E4218 string=0x00000000004E421C "K"
 *   insn=0x00000000004E421C string=0x00000000004E4220 "h"
 *   insn=0x00000000004E4220 string=0x00000000004E4224 "*"
 *   insn=0x00000000004E4224 string=0x00000000004E4228 "*\t"
 *   insn=0x00000000004E4224 string=0x00000000004E4248 "*\t@9K"
 *   insn=0x00000000004E4228 string=0x00000000004E422C "+"
 *   insn=0x00000000004E4234 string=0x00000000004E4238 "`"
 *   insn=0x00000000004E423C string=0x00000000004E4240 "h"
 *   insn=0x00000000004E4240 string=0x00000000004E4244 "'"
 *   insn=0x00000000004E4248 string=0x00000000004E424C "K"
 *   insn=0x00000000004E424C string=0x00000000004E4250 "h"
 *   insn=0x00000000004E4250 string=0x00000000004E4254 "j"
 *   insn=0x00000000004E4254 string=0x00000000004E4258 "*"
 *   insn=0x00000000004E4254 string=0x00000000004E4260 "*@9K"
 *   insn=0x00000000004E4260 string=0x00000000004E4264 "K"
 *   insn=0x00000000004E4264 string=0x00000000004E4268 "h"
 *   insn=0x00000000004E4268 string=0x00000000004E426C "j"
 *   insn=0x00000000004E426C string=0x00000000004E4270 "*"
 *   insn=0x00000000004E426C string=0x00000000004E4278 "*"
 *   insn=0x00000000004E4278 string=0x00000000004E427C "q\n*j"
 *   insn=0x00000000004E427C string=0x00000000004E4280 "j"
 *   insn=0x00000000004E4280 string=0x00000000004E4284 "*"
 *   insn=0x00000000004E4280 string=0x00000000004E428C "*"
 *   insn=0x00000000004E428C string=0x00000000004E4290 "j"
 *   insn=0x00000000004E4290 string=0x00000000004E4294 "*"
 *   insn=0x00000000004E4290 string=0x00000000004E429C "*"
 *   insn=0x00000000004E429C string=0x00000000004E42A0 "j"
 *   insn=0x00000000004E42A0 string=0x00000000004E42A4 "*"
 *   insn=0x00000000004E42A0 string=0x00000000004E42AC "*"
 *   insn=0x00000000004E42AC string=0x00000000004E42B0 "j"
 *   insn=0x00000000004E42B0 string=0x00000000004E42B4 "*!"
 *   insn=0x00000000004E42B0 string=0x00000000004E42BC "*!"
 *   insn=0x00000000004E42B4 string=0x00000000004E42B8 ""
 *   insn=0x00000000004E42BC string=0x00000000004E42C0 "j"
 *   insn=0x00000000004E42C0 string=0x00000000004E42C4 "*%"
 *   insn=0x00000000004E42C0 string=0x00000000004E42CC "*%"
 *   insn=0x00000000004E42D0 string=0x00000000004E42D4 "*)"
 *   insn=0x00000000004E42D8 string=0x00000000004E42DC "\n"
 *   insn=0x00000000004E430C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
        google::protobuf::io::CodedInputStream *this,
        unsigned int *a2)
{
  unsigned __int64 v3; // x8
  _BYTE *v4; // x9
  _BYTE *v5; // x10
  int v6; // w8
  int v7; // w10
  unsigned __int64 v9[2]; // [xsp+0h] [xbp-20h] BYREF

  v9[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (_BYTE *)*((_QWORD *)this + 1);
  v3 = *((_QWORD *)this + 2);
  if ( (int)v3 - (int)v4 > 9 || v3 > (unsigned __int64)v4 && (*(char *)(v3 - 1) & 0x80000000) == 0 )
  {
    v5 = v4 + 1;
    v6 = *v4 & 0x7F;
    if ( (*v4 & 0x80) == 0 )
    {
LABEL_25:
      *a2 = v6;
      *((_QWORD *)this + 1) = v5;
      return 1;
    }
    v6 |= (v4[1] & 0x7F) << 7;
    if ( (v4[1] & 0x80) == 0 )
    {
      v5 = v4 + 2;
      goto LABEL_25;
    }
    v6 |= (v4[2] & 0x7F) << 14;
    if ( (v4[2] & 0x80) == 0 )
    {
      v5 = v4 + 3;
      goto LABEL_25;
    }
    v6 |= (v4[3] & 0x7F) << 21;
    if ( (v4[3] & 0x80) == 0 )
    {
      v5 = v4 + 4;
      goto LABEL_25;
    }
    v7 = (unsigned __int8)v4[4];
    v6 |= v7 << 28;
    if ( (v7 & 0x80) == 0 )
    {
      v5 = v4 + 5;
      goto LABEL_25;
    }
    if ( ((char)v4[5] & 0x80000000) == 0 )
    {
      v5 = v4 + 6;
      goto LABEL_25;
    }
    if ( ((char)v4[6] & 0x80000000) == 0 )
    {
      v5 = v4 + 7;
      goto LABEL_25;
    }
    if ( ((char)v4[7] & 0x80000000) == 0 )
    {
      v5 = v4 + 8;
      goto LABEL_25;
    }
    if ( ((char)v4[8] & 0x80000000) == 0 )
    {
      v5 = v4 + 9;
      goto LABEL_25;
    }
    if ( ((char)v4[9] & 0x80000000) == 0 )
    {
      v5 = v4 + 10;
      goto LABEL_25;
    }
    return 0;
  }
  if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this, v9) & 1) == 0 )
    return 0;
  *a2 = v9[0];
  return 1;
}

