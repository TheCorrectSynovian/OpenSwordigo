/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514238
 * Mangled: _ZN11CPVRTStringC2ERKS_mm
 * Demangled: CPVRTString::CPVRTString(CPVRTString const&,ulong,ulong)
 *
 * Callers: 1
 *   0x00000000001FCED0  CPVRTString::CPVRTString(CPVRTString const&,ulong,ulong)
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 12
 *   insn=0x000000000051424C string=0x0000000000514250 ""
 *   insn=0x000000000051425C string=0x0000000000514260 "A"
 *   insn=0x0000000000514260 string=0x0000000000514264 "h~"
 *   insn=0x0000000000514264 string=0x0000000000514268 ")"
 *   insn=0x0000000000514268 string=0x000000000051426C ""
 *   insn=0x0000000000514278 string=0x000000000051427C "6"
 *   insn=0x0000000000514280 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000051428C string=0x0000000000514290 "u^"
 *   insn=0x0000000000514290 string=0x0000000000514294 "G"
 *   insn=0x0000000000514294 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000514298 string=0x000000000051429C "T"
 *   insn=0x000000000051429C string=0x00000000005142A0 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::CPVRTString(CPVRTString *this, const CPVRTString *a2, __int64 a3, size_t a4)
{
  size_t v5; // x21
  const void *v6; // x22
  void *v7; // x20

  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_6D8E38;
  *((_QWORD *)this + 1) = 0;
  if ( a4 == -1 )
    v5 = *((_QWORD *)a2 + 2) - a3;
  else
    v5 = a4;
  v6 = (const void *)(*((_QWORD *)a2 + 1) + a3);
  v7 = malloc(v5 + 1);
  *((_QWORD *)this + 2) = v5;
  *((_QWORD *)this + 3) = v5 + 1;
  memmove(v7, v6, v5);
  *((_BYTE *)v7 + v5) = 0;
  if ( v7 )
    *((_QWORD *)this + 1) = v7;
}

