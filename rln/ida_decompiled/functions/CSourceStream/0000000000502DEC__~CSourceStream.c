/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000502DEC
 * Mangled: _ZN13CSourceStreamD2Ev
 * Demangled: CSourceStream::~CSourceStream()
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000502DEC string=0x0000000000502DF0 ")"
 *   insn=0x0000000000502DF4 string=0x0000000000502DF8 ")yA"
 *   insn=0x0000000000502DF8 string=0x0000000000502DFC ")A"
 *   insn=0x0000000000502DFC string=0x0000000000502E00 "\t"
 *   insn=0x0000000000502E04 string=0x0000000000502E08 ""
 *   insn=0x0000000000502E0C string=0x0000000000502E10 " "
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
}

