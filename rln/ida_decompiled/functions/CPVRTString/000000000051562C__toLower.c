/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051562C
 * Mangled: _ZN11CPVRTString7toLowerEv
 * Demangled: CPVRTString::toLower(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000051562C string=0x0000000000515630 "\t"
 *   insn=0x0000000000515630 string=0x0000000000515634 "*i"
 *   insn=0x0000000000515634 string=0x0000000000515638 "K"
 *   insn=0x0000000000515638 string=0x000000000051563C "L"
 *   insn=0x0000000000515644 string=0x0000000000515648 "*i(8_"
 *   insn=0x0000000000515648 string=0x000000000051564C "_"
 *   insn=0x000000000051564C string=0x0000000000515650 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::toLower(__int64 this)
{
  __int64 v1; // x8
  __int64 v2; // x9
  int v3; // w10

  v1 = 0;
  do
  {
    v2 = *(_QWORD *)(this + 8);
    v3 = *(char *)(v2 + v1);
    if ( (unsigned int)(v3 - 65) < 0x1A )
      LOBYTE(v3) = v3 + 32;
    *(_BYTE *)(v2 + v1++) = v3;
  }
  while ( (_BYTE)v3 );
  return this;
}

