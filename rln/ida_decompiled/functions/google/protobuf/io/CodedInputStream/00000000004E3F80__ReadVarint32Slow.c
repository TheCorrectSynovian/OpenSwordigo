/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3F80
 * Mangled: _ZN6google8protobuf2io16CodedInputStream16ReadVarint32SlowEPj
 * Demangled: google::protobuf::io::CodedInputStream::ReadVarint32Slow(uint *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203580  google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
 *
 * Referenced strings: 4
 *   insn=0x00000000004E3F8C string=0x00000000004E3F90 "T"
 *   insn=0x00000000004E3FA0 string=0x00000000004E3FA4 "w}"
 *   insn=0x00000000004E3FB0 string=0x00000000004E3FB4 "h"
 *   insn=0x00000000004E3FE0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::ReadVarint32Slow(
        google::protobuf::io::CodedInputStream *this,
        unsigned int *a2)
{
  __int64 result; // x0
  unsigned __int64 v4[2]; // [xsp+0h] [xbp-20h] BYREF

  v4[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this, v4) & 1) == 0 )
    return 0;
  result = 1;
  *a2 = v4[0];
  return result;
}

