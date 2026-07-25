/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002134D8
 * Mangled: _ZN5Caver15FloatDataBuffer6ResizeEi
 * Demangled: Caver::FloatDataBuffer::Resize(int)
 *
 * Callers: 1
 *   0x00000000001F73E0  Caver::FloatDataBuffer::Resize(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 8
 *   insn=0x00000000002134E4 string=0x00000000002134E8 "`"
 *   insn=0x00000000002134EC string=0x00000000002134F0 "@"
 *   insn=0x00000000002134F4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002134FC string=0x0000000000213500 "}"
 *   insn=0x0000000000213508 string=0x000000000021350C " "
 *   insn=0x000000000021350C string=0x0000000000213510 "t"
 *   insn=0x0000000000213514 string=0x0000000000213518 "`"
 *   insn=0x0000000000213514 string=0x00000000001F8570 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FloatDataBuffer::Resize(Caver::FloatDataBuffer *this, int a2)
{
  void *v3; // x0
  unsigned __int64 v5; // x0
  __int64 result; // x0

  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    operator delete[](v3);
  if ( is_mul_ok(a2, 4u) )
    v5 = 4LL * a2;
  else
    v5 = -1;
  *(_DWORD *)this = a2;
  result = operator new[](v5);
  *((_QWORD *)this + 1) = result;
  return result;
}

