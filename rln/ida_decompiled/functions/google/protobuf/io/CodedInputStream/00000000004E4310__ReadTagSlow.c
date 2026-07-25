/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4310
 * Mangled: _ZN6google8protobuf2io16CodedInputStream11ReadTagSlowEv
 * Demangled: google::protobuf::io::CodedInputStream::ReadTagSlow(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *   0x0000000000203580  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Referenced strings: 21
 *   insn=0x00000000004E431C string=0x00000000004E4320 "T"
 *   insn=0x00000000004E432C string=0x00000000004E4330 "h"
 *   insn=0x00000000004E4334 string=0x00000000004E4338 "@"
 *   insn=0x00000000004E4340 string=0x00000000004E4344 "\t"
 *   insn=0x00000000004E4348 string=0x00000000004E434C " "
 *   insn=0x00000000004E434C string=0x00000000004E4350 ""
 *   insn=0x00000000004E4354 string=0x00000000004E4358 "h"
 *   insn=0x00000000004E4360 string=0x00000000004E4364 "3V"
 *   insn=0x00000000004E4364 string=0x00000000004E4368 "@"
 *   insn=0x00000000004E4364 string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E4368 string=0x00000000004E436C "h"
 *   insn=0x00000000004E4368 string=0x00000000004E4390 "i"
 *   insn=0x00000000004E4380 string=0x00000000004E4384 "`"
 *   insn=0x00000000004E4390 string=0x00000000004E4394 "j"
 *   insn=0x00000000004E4394 string=0x00000000004E4398 ")"
 *   insn=0x00000000004E4398 string=0x00000000004E439C "?"
 *   insn=0x00000000004E43A0 string=0x00000000004E43B8 "i*@"
 *   insn=0x00000000004E43A8 string=0x00000000004E43AC ""
 *   insn=0x00000000004E43AC string=0x00000000004E43C8 "h"
 *   insn=0x00000000004E43BC string=0x00000000004E43C0 "?"
 *   insn=0x00000000004E43EC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadTagSlow(google::protobuf::io::CodedInputStream *this)
{
  char *v2; // x8
  unsigned __int8 *v3; // x9
  __int64 result; // x0
  int v5; // w8
  bool v6; // w8
  unsigned __int64 v7[2]; // [xsp+0h] [xbp-20h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (char *)*((_QWORD *)this + 1);
  v3 = (unsigned __int8 *)*((_QWORD *)this + 2);
  if ( v2 != (char *)v3 )
  {
    if ( v2 < (char *)v3 )
      goto LABEL_3;
    goto LABEL_7;
  }
  if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) != 0 )
  {
    v2 = (char *)*((_QWORD *)this + 1);
    if ( (unsigned __int64)v2 < *((_QWORD *)this + 2) )
    {
LABEL_3:
      if ( (*v2 & 0x80000000) == 0 )
      {
        result = (unsigned __int8)*v2;
        v7[0] = result;
        *((_QWORD *)this + 1) = v2 + 1;
        return result;
      }
    }
LABEL_7:
    if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this, v7) & 1) != 0 )
      return v7[0];
    else
      return 0;
  }
  v5 = *((_DWORD *)this + 12);
  if ( *((_DWORD *)this + 6) - *((_DWORD *)this + 11) >= v5 )
  {
    result = 0;
    v6 = *((_DWORD *)this + 10) == v5;
  }
  else
  {
    v6 = 1;
    result = 0;
  }
  *((_BYTE *)this + 36) = v6;
  return result;
}

