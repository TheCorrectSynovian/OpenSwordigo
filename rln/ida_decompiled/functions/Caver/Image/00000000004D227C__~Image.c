/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D227C
 * Mangled: _ZN5Caver5ImageD2Ev
 * Demangled: Caver::Image::~Image()
 *
 * Callers: 1
 *   0x00000000001FA1D0  Caver::Image::~Image()
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 3
 *   insn=0x00000000004D227C string=0x00000000004D2280 "@"
 *   insn=0x00000000004D2280 string=0x00000000004D2284 "7"
 *   insn=0x00000000004D2284 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Image::~Image(Caver::Image *this)
{
  void *v1; // x0

  v1 = (void *)*((_QWORD *)this + 3);
  if ( v1 )
    operator delete[](v1);
}

