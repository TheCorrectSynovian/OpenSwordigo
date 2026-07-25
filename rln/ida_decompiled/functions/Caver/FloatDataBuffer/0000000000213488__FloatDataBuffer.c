/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213488
 * Mangled: _ZN5Caver15FloatDataBufferC2Ei
 * Demangled: Caver::FloatDataBuffer::FloatDataBuffer(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 8
 *   insn=0x0000000000213490 string=0x0000000000213494 "(|@"
 *   insn=0x0000000000213498 string=0x000000000021349C "}"
 *   insn=0x000000000021349C string=0x00000000002134A0 ")|~"
 *   insn=0x00000000002134A8 string=0x00000000002134AC " "
 *   insn=0x00000000002134AC string=0x00000000002134B0 "a"
 *   insn=0x00000000002134B0 string=0x00000000002134B4 "/"
 *   insn=0x00000000002134B4 string=0x00000000002134B8 "`"
 *   insn=0x00000000002134B4 string=0x00000000001F8570 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FloatDataBuffer::FloatDataBuffer(Caver::FloatDataBuffer *this, int a2)
{
  unsigned __int64 v3; // x0
  __int64 result; // x0

  if ( is_mul_ok(a2, 4u) )
    v3 = 4LL * a2;
  else
    v3 = -1;
  *(_DWORD *)this = a2;
  result = operator new[](v3);
  *((_QWORD *)this + 1) = result;
  return result;
}

