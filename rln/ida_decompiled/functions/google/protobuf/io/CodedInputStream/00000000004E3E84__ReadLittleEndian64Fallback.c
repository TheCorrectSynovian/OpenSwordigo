/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3E84
 * Mangled: _ZN6google8protobuf2io16CodedInputStream26ReadLittleEndian64FallbackEPm
 * Demangled: google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *
 * Callers: 1
 *   0x00000000001FF400  google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 20
 *   insn=0x00000000004E3E9C string=0x00000000004E3EA0 "W"
 *   insn=0x00000000004E3EB0 string=0x00000000004E3EB4 "h"
 *   insn=0x00000000004E3EB4 string=0x00000000004E3EB8 "8"
 *   insn=0x00000000004E3EBC string=0x00000000004E3EC0 "i"
 *   insn=0x00000000004E3EC0 string=0x00000000004E3EC4 "\t!"
 *   insn=0x00000000004E3EC8 string=0x00000000004E3F38 "i"
 *   insn=0x00000000004E3EE4 string=0x00000000004E3EE8 "h"
 *   insn=0x00000000004E3EEC string=0x00000000004E3EF0 ""
 *   insn=0x00000000004E3EF0 string=0x00000000004E3EF4 "h"
 *   insn=0x00000000004E3EF4 string=0x00000000004E3EF8 "NW"
 *   insn=0x00000000004E3EF8 string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E3EFC string=0x00000000004E3F00 "h"
 *   insn=0x00000000004E3F00 string=0x00000000004E3F04 "9"
 *   insn=0x00000000004E3F08 string=0x00000000004E3F0C "8"
 *   insn=0x00000000004E3F0C string=0x00000000004E3F10 "?"
 *   insn=0x00000000004E3F14 string=0x00000000004E3F18 "6"
 *   insn=0x00000000004E3F28 string=0x00000000004E3F2C "h"
 *   insn=0x00000000004E3F2C string=0x00000000004E3F30 "\t"
 *   insn=0x00000000004E3F38 string=0x00000000004E3F3C ""
 *   insn=0x00000000004E3F7C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
        google::protobuf::io::CodedInputStream *this,
        unsigned __int64 *a2)
{
  unsigned __int64 *v4; // x8
  signed int v5; // w24
  unsigned __int64 *v6; // x9
  int v7; // w25
  _QWORD *v8; // x21
  __int64 result; // x0
  _QWORD v10[2]; // [xsp+0h] [xbp-50h] BYREF

  v10[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (unsigned __int64 *)*((_QWORD *)this + 1);
  v5 = *((_QWORD *)this + 2) - (_DWORD)v4;
  if ( (unsigned int)v5 <= 7 )
  {
    v7 = 8;
    v8 = v10;
    while ( 1 )
    {
      memcpy(v8, v4, v5);
      *((_QWORD *)this + 1) += v5;
      if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) == 0 )
        return 0;
      v4 = (unsigned __int64 *)*((_QWORD *)this + 1);
      v7 -= v5;
      v8 = (_QWORD *)((char *)v8 + v5);
      v5 = *((_QWORD *)this + 2) - (_DWORD)v4;
      if ( v7 <= v5 )
      {
        memcpy(v8, *((const void **)this + 1), v7);
        v6 = (unsigned __int64 *)(*((_QWORD *)this + 1) + v7);
        v4 = v10;
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

