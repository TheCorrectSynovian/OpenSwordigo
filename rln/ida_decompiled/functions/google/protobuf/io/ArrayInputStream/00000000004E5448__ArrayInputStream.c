/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5448
 * Mangled: _ZN6google8protobuf2io16ArrayInputStreamC2EPKvii
 * Demangled: google::protobuf::io::ArrayInputStream::ArrayInputStream(void const*,int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004E5448 string=0x00000000004E544C ""
 *   insn=0x00000000004E5450 string=0x00000000004E5454 "i"
 *   insn=0x00000000004E5458 string=0x00000000004E545C "A"
 *   insn=0x00000000004E545C string=0x00000000004E5460 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::ArrayInputStream::ArrayInputStream(
        __int64 this,
        const void *a2,
        int a3,
        int a4)
{
  int v4; // w9

  if ( a4 <= 0 )
    v4 = a3;
  else
    v4 = a4;
  *(_DWORD *)(this + 16) = a3;
  *(_DWORD *)(this + 20) = v4;
  *(_QWORD *)this = off_6D8430;
  *(_QWORD *)(this + 8) = a2;
  *(_QWORD *)(this + 24) = 0;
  return this;
}

