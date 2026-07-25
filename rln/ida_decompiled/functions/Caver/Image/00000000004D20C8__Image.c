/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D20C8
 * Mangled: _ZN5Caver5ImageC2ERKS0_
 * Demangled: Caver::Image::Image(Caver::Image const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 6
 *   insn=0x00000000004D20E0 string=0x00000000004D20E4 "h"
 *   insn=0x00000000004D20E8 string=0x00000000004D20EC "`B"
 *   insn=0x00000000004D20F0 string=0x00000000004D20F4 "u"
 *   insn=0x00000000004D2100 string=0x00000000004D2104 ""
 *   insn=0x00000000004D2104 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D2108 string=0x00000000004D210C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::Image::Image(Caver::Image *this, const Caver::Image *a2)
{
  signed __int64 v4; // x21
  unsigned __int64 v5; // x0
  void *v6; // x0

  *((_QWORD *)this + 3) = 0;
  *(_BYTE *)this = *(_BYTE *)a2;
  *(_OWORD *)((char *)this + 4) = *(_OWORD *)((char *)a2 + 4);
  v4 = *((int *)a2 + 5);
  if ( v4 < 0 )
    v5 = -1;
  else
    v5 = *((int *)a2 + 5);
  *((_DWORD *)this + 5) = v4;
  v6 = (void *)operator new[](v5);
  *((_QWORD *)this + 3) = v6;
  return memcpy(v6, *((const void **)a2 + 3), v4);
}

