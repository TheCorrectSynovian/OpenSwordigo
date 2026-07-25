/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E59E8
 * Mangled: _ZN6google8protobuf2io18StringOutputStream4NextEPPvPi
 * Demangled: google::protobuf::io::StringOutputStream::Next(void **,int *)
 *
 * Callers: 1
 *   0x00000000004E59B0  google::protobuf::io::StringOutputStream::~StringOutputStream()
 *
 * Callees: 2
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569650  sub_569650
 *
 * Referenced strings: 12
 *   insn=0x00000000004E5A08 string=0x00000000004E5A0C ""
 *   insn=0x00000000004E5A0C string=0x00000000004E5A10 "\t"
 *   insn=0x00000000004E5A10 string=0x00000000004E5A14 "7}@"
 *   insn=0x00000000004E5A18 string=0x00000000004E5A1C "b"
 *   insn=0x00000000004E5A1C string=0x00000000004E5A28 "(y"
 *   insn=0x00000000004E5A44 string=0x00000000004E5A48 "\t"
 *   insn=0x00000000004E5A4C string=0x00000000004E5A50 "\t"
 *   insn=0x00000000004E5A54 string=0x00000000004E5A6C ""
 *   insn=0x00000000004E5A78 string=0x00000000004E5A7C ""
 *   insn=0x00000000004E5A7C string=0x00000000004E5A80 ""
 *   insn=0x00000000004E5A80 string=0x00000000004E5A84 ""
 *   insn=0x00000000004E5A84 string=0x00000000004E5A88 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::StringOutputStream::Next(
        google::protobuf::io::StringOutputStream *this,
        void **a2,
        int *a3)
{
  _QWORD *v4; // x0
  __int64 v7; // x9
  __int64 v8; // x23
  __int64 v9; // x1
  __int64 *v10; // x22
  __int64 v11; // x8
  __int64 result; // x0

  v4 = (_QWORD *)*((_QWORD *)this + 1);
  v7 = *(_QWORD *)(*v4 - 24LL);
  v8 = (int)v7;
  if ( (unsigned __int64)(int)v7 >= *(_QWORD *)(*v4 - 16LL) )
  {
    if ( 2 * (int)v7 <= 16 )
      v9 = 16;
    else
      v9 = (unsigned int)(2 * v7);
  }
  else
  {
    v9 = *(_QWORD *)(*v4 - 16LL);
  }
  sub_569650(v4, v9, 0);
  v10 = (__int64 *)*((_QWORD *)this + 1);
  v11 = *v10;
  if ( *(_QWORD *)(*v10 - 24) )
  {
    if ( (*(_DWORD *)(v11 - 8) & 0x80000000) == 0 )
    {
      sub_568EA8(*((_QWORD *)this + 1));
      v11 = *v10;
    }
  }
  else
  {
    v11 = 0;
  }
  *a2 = (void *)(v11 + v8);
  result = 1;
  *a3 = *(_DWORD *)(**((_QWORD **)this + 1) - 24LL) - v8;
  return result;
}

