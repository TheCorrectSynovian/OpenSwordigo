/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514354
 * Mangled: _ZN11CPVRTStringC2Emc
 * Demangled: CPVRTString::CPVRTString(ulong,char)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 5
 *   insn=0x0000000000514368 string=0x000000000051436C ""
 *   insn=0x0000000000514378 string=0x000000000051437C "A"
 *   insn=0x000000000051438C string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005143A0 string=0x00000000005143A4 "'"
 *   insn=0x00000000005143A4 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::CPVRTString(CPVRTString *this, size_t a2, int a3)
{
  size_t v4; // x22
  void *v7; // x23

  v4 = a2 + 1;
  *(_QWORD *)this = off_6D8E38;
  v7 = malloc(a2 + 1);
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = v4;
  *((_QWORD *)this + 1) = v7;
  memset(v7, a3, a2);
  *((_BYTE *)v7 + a2) = 0;
}

