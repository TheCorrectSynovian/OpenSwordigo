/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515544
 * Mangled: _ZN11CPVRTString7reserveEm
 * Demangled: CPVRTString::reserve(ulong)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002008E0  .realloc
 *
 * Referenced strings: 5
 *   insn=0x0000000000515550 string=0x0000000000515554 "h"
 *   insn=0x000000000051555C string=0x0000000000515560 "`"
 *   insn=0x0000000000515560 string=0x0000000000515564 "4"
 *   insn=0x000000000051556C string=0x0000000000515570 "`"
 *   insn=0x0000000000515570 string=0x0000000000515574 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void **__fastcall CPVRTString::reserve(void **this, unsigned __int64 a2)
{
  void **v2; // x19
  void *v3; // x20

  v2 = this;
  if ( (unsigned __int64)this[3] <= a2 )
  {
    v3 = (void *)(a2 + 1);
    this = (void **)realloc(this[1], a2 + 1);
    v2[1] = this;
    v2[3] = v3;
  }
  return this;
}

