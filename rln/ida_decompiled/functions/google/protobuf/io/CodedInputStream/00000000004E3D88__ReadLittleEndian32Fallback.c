/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3D88
 * Mangled: _ZN6google8protobuf2io16CodedInputStream26ReadLittleEndian32FallbackEPj
 * Demangled: google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *
 * Callers: 1
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 21
 *   insn=0x00000000004E3DA0 string=0x00000000004E3DA4 "W"
 *   insn=0x00000000004E3DB4 string=0x00000000004E3DB8 "h"
 *   insn=0x00000000004E3DB8 string=0x00000000004E3DBC "8"
 *   insn=0x00000000004E3DC0 string=0x00000000004E3DC4 "i"
 *   insn=0x00000000004E3DC4 string=0x00000000004E3DC8 "\t"
 *   insn=0x00000000004E3DCC string=0x00000000004E3E3C "i"
 *   insn=0x00000000004E3DE4 string=0x00000000004E3DE8 "^v"
 *   insn=0x00000000004E3DE8 string=0x00000000004E3DEC "h"
 *   insn=0x00000000004E3DF0 string=0x00000000004E3DF4 ""
 *   insn=0x00000000004E3DF4 string=0x00000000004E3DF8 "h"
 *   insn=0x00000000004E3DFC string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E3E00 string=0x00000000004E3E04 "h"
 *   insn=0x00000000004E3E04 string=0x00000000004E3E08 "9"
 *   insn=0x00000000004E3E0C string=0x00000000004E3E10 "8"
 *   insn=0x00000000004E3E10 string=0x00000000004E3E14 "?"
 *   insn=0x00000000004E3E18 string=0x00000000004E3E1C "6"
 *   insn=0x00000000004E3E28 string=0x00000000004E3E2C "Mv"
 *   insn=0x00000000004E3E2C string=0x00000000004E3E30 "h"
 *   insn=0x00000000004E3E30 string=0x00000000004E3E34 "\t"
 *   insn=0x00000000004E3E3C string=0x00000000004E3E40 ""
 *   insn=0x00000000004E3E80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
        google::protobuf::io::CodedInputStream *this,
        unsigned int *a2)
{
  unsigned int *v4; // x8
  signed int v5; // w24
  unsigned int *v6; // x9
  int v7; // w25
  _BYTE *v8; // x21
  __int64 result; // x0
  _BYTE v10[4]; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v11; // [xsp+8h] [xbp-48h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (unsigned int *)*((_QWORD *)this + 1);
  v5 = *((_QWORD *)this + 2) - (_DWORD)v4;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = 4;
    v8 = v10;
    while ( 1 )
    {
      memcpy(v8, v4, v5);
      *((_QWORD *)this + 1) += v5;
      if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) == 0 )
        return 0;
      v4 = (unsigned int *)*((_QWORD *)this + 1);
      v7 -= v5;
      v8 += v5;
      v5 = *((_QWORD *)this + 2) - (_DWORD)v4;
      if ( v7 <= v5 )
      {
        memcpy(v8, *((const void **)this + 1), v7);
        v6 = (unsigned int *)(*((_QWORD *)this + 1) + v7);
        v4 = (unsigned int *)v10;
        goto LABEL_7;
      }
    }
  }
  else
  {
    v6 = v4 + 1;
LABEL_7:
    *((_QWORD *)this + 1) = v6;
    result = 1;
    *a2 = *v4;
  }
  return result;
}

