/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514CA4
 * Mangled: _ZNK11CPVRTString4copyEPcmm
 * Demangled: CPVRTString::copy(char *,ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 3
 *   insn=0x0000000000514CAC string=0x0000000000514CB0 ""
 *   insn=0x0000000000514CC0 string=0x0000000000514CC4 "("
 *   insn=0x0000000000514CC8 string=0x0000000000514CCC "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall CPVRTString::copy(CPVRTString *this, char *a2, size_t a3, __int64 a4)
{
  __int64 v4; // x9
  size_t v5; // x19

  v4 = *((_QWORD *)this + 2);
  v5 = a3;
  if ( v4 - a4 <= a3 )
    a3 = v4 - a4;
  memcpy(a2, (const void *)(*((_QWORD *)this + 1) + a4), a3);
  if ( a2 )
    return v5;
  else
    return 0;
}

