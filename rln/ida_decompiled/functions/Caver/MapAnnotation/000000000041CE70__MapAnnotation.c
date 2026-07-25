/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041CE70
 * Mangled: _ZN5Caver13MapAnnotationC2Ev
 * Demangled: Caver::MapAnnotation::MapAnnotation(void)
 *
 * Callers: 1
 *   0x000000000041CD08  Caver::LoadingView::~LoadingView()
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000041CE70 string=0x000000000041CE74 ""
 *   insn=0x000000000041CE7C string=0x000000000041CE80 ""
 *   insn=0x000000000041CE80 string=0x000000000041CE84 ""
 *   insn=0x000000000041CECC string=0x000000000041CED0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::MapAnnotation::MapAnnotation(Caver::MapAnnotation *this)
{
  long double result; // q0

  *((_DWORD *)this + 4) = -16777216;
  *(_OWORD *)&result = 0u;
  *((_BYTE *)this + 44) = -1;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 20) = 0;
  *((_BYTE *)this + 168) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_BYTE *)this + 320) = 0;
  *((_QWORD *)this + 38) = 0;
  *((_QWORD *)this + 39) = 0;
  *(_OWORD *)this = 0u;
  *(_OWORD *)((char *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 120) = 0u;
  *(_OWORD *)((char *)this + 104) = 0u;
  *(_OWORD *)((char *)this + 88) = 0u;
  *((_OWORD *)this + 9) = 0u;
  *((_OWORD *)this + 3) = 0u;
  *((_OWORD *)this + 4) = 0u;
  *((_OWORD *)this + 12) = 0u;
  *((_OWORD *)this + 13) = 0u;
  *((_OWORD *)this + 11) = 0u;
  *((_DWORD *)this + 58) = -1;
  *((_OWORD *)this + 16) = 0u;
  *((_OWORD *)this + 17) = 0u;
  *((_OWORD *)this + 15) = 0u;
  *((_QWORD *)this + 37) = 0;
  return result;
}

