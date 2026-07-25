/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028329C
 * Mangled: _ZN5Caver22HookshotTrailComponent14CreateVerticesEv
 * Demangled: Caver::HookshotTrailComponent::CreateVertices(void)
 *
 * Callers: 1
 *   0x00000000001F6A20  Caver::HookshotTrailComponent::CreateVertices(void)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 20
 *   insn=0x00000000002832B0 string=0x00000000002832B4 "t"
 *   insn=0x00000000002832B8 string=0x00000000002832BC "hF@"
 *   insn=0x00000000002832B8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002832BC string=0x00000000002832C0 "`F"
 *   insn=0x00000000002832C0 string=0x00000000002832C4 "h"
 *   insn=0x00000000002832C8 string=0x00000000002832CC "%"
 *   insn=0x00000000002832CC string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002832D0 string=0x00000000002832D4 "t"
 *   insn=0x00000000002832D8 string=0x00000000002832DC "hN@"
 *   insn=0x00000000002832DC string=0x00000000002832E0 "`N"
 *   insn=0x00000000002832E4 string=0x00000000002832F4 "("
 *   insn=0x00000000002832EC string=0x00000000002832F0 "`N@"
 *   insn=0x00000000002832F4 string=0x00000000002832F8 ")"
 *   insn=0x00000000002832F8 string=0x00000000002832FC "*"
 *   insn=0x00000000002832FC string=0x0000000000283300 "+"
 *   insn=0x0000000000283300 string=0x0000000000283304 ","
 *   insn=0x0000000000283304 string=0x0000000000588AE0 "\n"
 *   insn=0x0000000000283308 string=0x000000000028330C "!"
 *   insn=0x000000000028330C string=0x0000000000283310 "B"
 *   insn=0x0000000000283310 string=0x0000000000283314 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::HookshotTrailComponent::CreateVertices(Caver::HookshotTrailComponent *this)
{
  __int64 v2; // x0
  void *v3; // x8
  __int64 v4; // x0
  void *v5; // x8
  long double result; // q0

  *((_DWORD *)this + 36) = 12;
  v2 = operator new[](0xC0u);
  v3 = (void *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = v2;
  if ( v3 )
    operator delete[](v3);
  *((_DWORD *)this + 40) = 12;
  v4 = operator new[](0x48u);
  v5 = (void *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = v4;
  if ( v5 )
  {
    operator delete[](v5);
    v4 = *((_QWORD *)this + 19);
  }
  result = *(long double *)&xmmword_588AA0;
  *(_OWORD *)v4 = xmmword_588AA0;
  *(_OWORD *)(v4 + 16) = xmmword_588AB0;
  *(_OWORD *)(v4 + 32) = xmmword_588AC0;
  *(_OWORD *)(v4 + 48) = xmmword_588AD0;
  *(_QWORD *)(v4 + 64) = 0x7000A000B000ALL;
  return result;
}

