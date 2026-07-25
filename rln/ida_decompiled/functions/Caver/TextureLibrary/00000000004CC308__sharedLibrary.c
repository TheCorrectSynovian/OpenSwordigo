/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC308
 * Mangled: _ZN5Caver14TextureLibrary13sharedLibraryEv
 * Demangled: Caver::TextureLibrary::sharedLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x00000000004CC314 string=0x00000000004CC318 "`"
 *   insn=0x00000000004CC318 string=0x00000000004CC31C "@"
 *   insn=0x00000000004CC324 string=0x00000000004CC328 "H"
 *   insn=0x00000000004CC324 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004CC330 string=0x00000000004CC334 ""
 *   insn=0x00000000004CC334 string=0x00000000004CC338 "`"
 *   insn=0x00000000004CC338 string=0x00000000004CC33C "A"
 *   insn=0x00000000004CC33C string=0x00000000004CC340 ""
 *   insn=0x00000000004CC358 string=0x00000000004CC35C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::TextureLibrary::sharedLibrary(Caver::TextureLibrary *this)
{
  __int64 v1; // x0
  double result; // d0

  if ( !qword_6EA038 )
  {
    v1 = operator new(0x60u);
    result = 1.41820116e-21;
    qword_6EA038 = v1;
    *(_QWORD *)v1 = off_6D7DA0;
    *(_QWORD *)(v1 + 16) = 0;
    *(_WORD *)(v1 + 56) = 0;
    *(_QWORD *)(v1 + 80) = 0;
    *(_QWORD *)(v1 + 88) = 0;
    *(_QWORD *)(v1 + 72) = 0;
    *(_QWORD *)(v1 + 24) = 0;
    *(_QWORD *)(v1 + 32) = v1 + 16;
    *(_QWORD *)(v1 + 40) = v1 + 16;
    *(_QWORD *)(v1 + 48) = 0;
    *(_QWORD *)(v1 + 60) = 0x3B9ACA0000000000LL;
  }
  return result;
}

