/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2124
 * Mangled: _ZN5Caver5Image13InitWithImageERKS0_
 * Demangled: Caver::Image::InitWithImage(Caver::Image const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 8
 *   insn=0x00000000004D2134 string=0x00000000004D2138 "h"
 *   insn=0x00000000004D2140 string=0x00000000004D2144 "`B"
 *   insn=0x00000000004D2148 string=0x00000000004D214C "t"
 *   insn=0x00000000004D215C string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D2168 string=0x00000000004D217C "a"
 *   insn=0x00000000004D216C string=0x00000000004D2170 "|"
 *   insn=0x00000000004D2170 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004D218C string=0x00000000004D2190 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::Image::InitWithImage(Caver::Image *this, const Caver::Image *a2)
{
  signed __int64 v4; // x20
  unsigned __int64 v5; // x0
  void *v6; // x0
  void *v7; // x8

  *(_BYTE *)this = *(_BYTE *)a2;
  *(_OWORD *)((char *)this + 4) = *(_OWORD *)((char *)a2 + 4);
  v4 = *((int *)a2 + 5);
  if ( v4 < 0 )
    v5 = -1;
  else
    v5 = *((int *)a2 + 5);
  *((_DWORD *)this + 5) = v4;
  v6 = (void *)operator new[](v5);
  v7 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v6;
  if ( v7 )
  {
    operator delete[](v7);
    v6 = (void *)*((_QWORD *)this + 3);
    v4 = *((int *)this + 5);
  }
  return memcpy(v6, *((const void **)a2 + 3), v4);
}

