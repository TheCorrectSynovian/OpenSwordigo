/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3FE4
 * Mangled: _ZN6google8protobuf2io16CodedInputStream20ReadVarint64FallbackEPm
 * Demangled: google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Callers: 1
 *   0x0000000000203580  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Callees: 1
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Referenced strings: 49
 *   insn=0x00000000004E3FF4 string=0x00000000004E3FF8 "h"
 *   insn=0x00000000004E3FFC string=0x00000000004E4000 "*"
 *   insn=0x00000000004E4000 string=0x00000000004E4004 "_%"
 *   insn=0x00000000004E4008 string=0x00000000004E400C "?"
 *   insn=0x00000000004E400C string=0x00000000004E4010 "I"
 *   insn=0x00000000004E4010 string=0x00000000004E4014 "*"
 *   insn=0x00000000004E4014 string=0x00000000004E4018 "\n"
 *   insn=0x00000000004E4020 string=0x00000000004E4024 "I"
 *   insn=0x00000000004E4028 string=0x00000000004E4098 "\n"
 *   insn=0x00000000004E4030 string=0x00000000004E4034 "V"
 *   insn=0x00000000004E4040 string=0x00000000004E4044 "a"
 *   insn=0x00000000004E4044 string=0x00000000004E4048 "["
 *   insn=0x00000000004E4054 string=0x00000000004E4068 "\n"
 *   insn=0x00000000004E405C string=0x00000000004E4060 "`"
 *   insn=0x00000000004E405C string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E4060 string=0x00000000004E4064 "T"
 *   insn=0x00000000004E4060 string=0x00000000004E404C "h"
 *   insn=0x00000000004E406C string=0x00000000004E4070 "k"
 *   insn=0x00000000004E4074 string=0x00000000004E4078 "L"
 *   insn=0x00000000004E407C string=0x00000000004E4080 "u"
 *   insn=0x00000000004E4080 string=0x00000000004E4084 "h"
 *   insn=0x00000000004E4090 string=0x00000000004E4094 "I"
 *   insn=0x00000000004E4098 string=0x00000000004E409C "K"
 *   insn=0x00000000004E409C string=0x00000000004E40A0 "i"
 *   insn=0x00000000004E40A4 string=0x00000000004E40B8 "\n\t@9K"
 *   insn=0x00000000004E40B0 string=0x00000000004E40B4 "6"
 *   insn=0x00000000004E40B8 string=0x00000000004E40BC "K"
 *   insn=0x00000000004E40BC string=0x00000000004E40C0 "i"
 *   insn=0x00000000004E40C4 string=0x00000000004E40D8 "\n@9K"
 *   insn=0x00000000004E40D0 string=0x00000000004E40D4 "."
 *   insn=0x00000000004E40D8 string=0x00000000004E40DC "K"
 *   insn=0x00000000004E40DC string=0x00000000004E40E0 "i"
 *   insn=0x00000000004E40E4 string=0x00000000004E40F8 ""
 *   insn=0x00000000004E40F0 string=0x00000000004E40F4 "&"
 *   insn=0x00000000004E40F8 string=0x00000000004E40FC "j"
 *   insn=0x00000000004E4100 string=0x00000000004E4110 ""
 *   insn=0x00000000004E4108 string=0x00000000004E410C " "
 *   insn=0x00000000004E4110 string=0x00000000004E4114 "l"
 *   insn=0x00000000004E411C string=0x00000000004E412C ""
 *   insn=0x00000000004E412C string=0x00000000004E4130 "l"
 *   insn=0x00000000004E4138 string=0x00000000004E4148 ""
 *   insn=0x00000000004E4148 string=0x00000000004E414C "l"
 *   insn=0x00000000004E415C string=0x00000000004E4160 ""
 *   insn=0x00000000004E4168 string=0x00000000004E416C "l"
 *   insn=0x00000000004E416C string=0x00000000004E4178 "%@9"
 *   insn=0x00000000004E4194 string=0x00000000004E4198 ""
 *   insn=0x00000000004E4198 string=0x00000000004E419C ")q\n"
 *   insn=0x00000000004E419C string=0x00000000004E41A0 "h"
 *   insn=0x00000000004E41A0 string=0x00000000004E41A4 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadVarint64Fallback(
        google::protobuf::io::CodedInputStream *this,
        unsigned __int64 *a2)
{
  char *v3; // x8
  char *v4; // x9
  int v6; // w12
  unsigned int v7; // w9
  unsigned int v8; // w10
  __int64 v9; // x11
  __int64 v10; // x22
  unsigned __int64 v11; // x21
  char v12; // t1
  char v13; // w11

  v3 = (char *)*((_QWORD *)this + 1);
  v4 = (char *)*((_QWORD *)this + 2);
  if ( (int)v4 - (int)v3 <= 9 && (v4 <= v3 || *(v4 - 1) < 0) )
  {
    v10 = 0;
    v11 = 0;
    while ( v10 != 10 )
    {
      while ( v3 == v4 )
      {
        if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) == 0 )
          return 0;
        v3 = (char *)*((_QWORD *)this + 1);
        v4 = (char *)*((_QWORD *)this + 2);
      }
      v12 = *v3++;
      v13 = 7 * v10++;
      v11 |= (unsigned __int64)(v12 & 0x7F) << v13;
      *((_QWORD *)this + 1) = v3;
      if ( (v12 & 0x80) == 0 )
      {
        *a2 = v11;
        return 1;
      }
    }
  }
  else
  {
    v6 = (_DWORD)v3 + 1;
    v7 = *v3 & 0x7F;
    if ( (*v3 & 0x80) == 0 )
    {
      v8 = 0;
      v9 = 0;
LABEL_33:
      *((_QWORD *)this + 1) = &v3[v6 - (int)v3];
      *a2 = v7 | ((unsigned __int64)v8 << 28) | (v9 << 56);
      return 1;
    }
    v7 |= (v3[1] & 0x7F) << 7;
    if ( (v3[1] & 0x80) == 0 )
    {
      v8 = 0;
      v9 = 0;
      v6 = (_DWORD)v3 + 2;
      goto LABEL_33;
    }
    v7 |= (v3[2] & 0x7F) << 14;
    if ( (v3[2] & 0x80) == 0 )
    {
      v8 = 0;
      v9 = 0;
      v6 = (_DWORD)v3 + 3;
      goto LABEL_33;
    }
    v7 |= (v3[3] & 0x7F) << 21;
    if ( (v3[3] & 0x80) == 0 )
    {
      v8 = 0;
      v9 = 0;
      v6 = (_DWORD)v3 + 4;
      goto LABEL_33;
    }
    v8 = v3[4] & 0x7F;
    if ( (v3[4] & 0x80) == 0 )
    {
      v9 = 0;
      v6 = (_DWORD)v3 + 5;
      goto LABEL_33;
    }
    v8 |= (v3[5] & 0x7F) << 7;
    if ( (v3[5] & 0x80) == 0 )
    {
      v9 = 0;
      v6 = (_DWORD)v3 + 6;
      goto LABEL_33;
    }
    v8 |= (v3[6] & 0x7F) << 14;
    if ( (v3[6] & 0x80) == 0 )
    {
      v9 = 0;
      v6 = (_DWORD)v3 + 7;
      goto LABEL_33;
    }
    v8 |= (v3[7] & 0x7F) << 21;
    if ( (v3[7] & 0x80) == 0 )
    {
      v9 = 0;
      v6 = (_DWORD)v3 + 8;
      goto LABEL_33;
    }
    v9 = v3[8] & 0x7F;
    if ( (v3[8] & 0x80) == 0 )
    {
      v6 = (_DWORD)v3 + 9;
      goto LABEL_33;
    }
    if ( (v3[9] & 0x80) == 0 )
    {
      v6 = (_DWORD)v3 + 10;
      v9 = ((v3[9] & 0x7F) << 7) | (unsigned int)v9;
      goto LABEL_33;
    }
  }
  return 0;
}

