/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5754
 * Mangled: _ZN6google8protobuf2io17ArrayOutputStreamC2EPvii
 * Demangled: google::protobuf::io::ArrayOutputStream::ArrayOutputStream(void *,int,int)
 *
 * Callers: 1
 *   0x00000000001FA580  google::protobuf::io::ArrayOutputStream::ArrayOutputStream(void *,int,int)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004E5754 string=0x00000000004E5758 "QF"
 *   insn=0x00000000004E575C string=0x00000000004E5760 "i"
 *   insn=0x00000000004E5764 string=0x00000000004E5768 "A"
 *   insn=0x00000000004E5768 string=0x00000000004E576C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::ArrayOutputStream::ArrayOutputStream(__int64 this, void *a2, int a3, int a4)
{
  int v4; // w9

  if ( a4 <= 0 )
    v4 = a3;
  else
    v4 = a4;
  *(_DWORD *)(this + 16) = a3;
  *(_DWORD *)(this + 20) = v4;
  *(_QWORD *)this = off_6D8470;
  *(_QWORD *)(this + 8) = a2;
  *(_QWORD *)(this + 24) = 0;
  return this;
}

