/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000502E18
 * Mangled: _ZN13CSourceStreamD0Ev
 * Demangled: CSourceStream::~CSourceStream()
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000502E70  CSourceStream::Init(char const*)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000502E24 string=0x0000000000502E28 "("
 *   insn=0x0000000000502E28 string=0x0000000000502E2C "`"
 *   insn=0x0000000000502E2C string=0x0000000000502E30 "yA"
 *   insn=0x0000000000502E30 string=0x0000000000502E34 "A"
 *   insn=0x0000000000502E34 string=0x0000000000502E38 "h"
 *   insn=0x0000000000502E3C string=0x0000000000502E40 ""
 *   insn=0x0000000000502E40 string=0x0000000000502E44 ""
 *   insn=0x0000000000502E58 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CSourceStream::~CSourceStream(CSourceStream *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 1);
  *(_QWORD *)this = off_6D8DB0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  operator delete(this);
}

