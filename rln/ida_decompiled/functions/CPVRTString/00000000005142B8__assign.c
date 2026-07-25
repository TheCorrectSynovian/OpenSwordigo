/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005142B8
 * Mangled: _ZN11CPVRTString6assignERKS_mm
 * Demangled: CPVRTString::assign(CPVRTString const&,ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 17
 *   insn=0x00000000005142C8 string=0x00000000005142CC ")"
 *   insn=0x00000000005142D0 string=0x00000000005142D4 "j"
 *   insn=0x00000000005142D8 string=0x00000000005142DC ""
 *   insn=0x00000000005142E0 string=0x00000000005142E4 "_"
 *   insn=0x00000000005142E4 string=0x00000000005142E8 "6"
 *   insn=0x00000000005142E8 string=0x00000000005142EC "i"
 *   insn=0x00000000005142EC string=0x00000000005142F0 "t"
 *   insn=0x0000000000514300 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000514304 string=0x0000000000514308 "w"
 *   insn=0x0000000000514314 string=0x0000000000514318 "u\n"
 *   insn=0x0000000000514318 string=0x000000000051431C "%"
 *   insn=0x000000000051431C string=0x0000000000514320 "h\n@"
 *   insn=0x000000000051431C string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000514324 string=0x0000000000514328 "`"
 *   insn=0x000000000051432C string=0x0000000000514330 "`"
 *   insn=0x0000000000514334 string=0x0000000000514338 "t"
 *   insn=0x0000000000514334 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::assign(CPVRTString *this, const CPVRTString *a2, __int64 a3, size_t a4)
{
  size_t v5; // x21
  const void *v6; // x22
  void *v7; // x20
  void *v8; // x0

  if ( a4 == -1 )
    v5 = *((_QWORD *)a2 + 2) - a3;
  else
    v5 = a4;
  v6 = (const void *)(*((_QWORD *)a2 + 1) + a3);
  if ( *((_QWORD *)this + 3) <= v5 )
  {
    v7 = malloc(v5 + 1);
    *((_QWORD *)this + 3) = v5 + 1;
  }
  else
  {
    v7 = (void *)*((_QWORD *)this + 1);
  }
  *((_QWORD *)this + 2) = v5;
  memmove(v7, v6, v5);
  *((_BYTE *)v7 + *((_QWORD *)this + 2)) = 0;
  v8 = (void *)*((_QWORD *)this + 1);
  if ( v7 != v8 )
  {
    free(v8);
    *((_QWORD *)this + 1) = v7;
  }
  return this;
}

