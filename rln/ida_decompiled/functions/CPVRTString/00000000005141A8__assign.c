/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005141A8
 * Mangled: _ZN11CPVRTString6assignEPKcm
 * Demangled: CPVRTString::assign(char const*,ulong)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 14
 *   insn=0x00000000005141BC string=0x00000000005141C0 "h"
 *   insn=0x00000000005141CC string=0x00000000005141D0 "i"
 *   insn=0x00000000005141D0 string=0x00000000005141D4 "t"
 *   insn=0x00000000005141E0 string=0x00000000005141E4 "#"
 *   insn=0x00000000005141E4 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005141E8 string=0x00000000005141EC "w"
 *   insn=0x00000000005141F8 string=0x00000000005141FC "u\n"
 *   insn=0x00000000005141FC string=0x0000000000514200 "l"
 *   insn=0x0000000000514200 string=0x0000000000514204 "h\n@"
 *   insn=0x0000000000514200 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000514208 string=0x000000000051420C "`"
 *   insn=0x0000000000514210 string=0x0000000000514214 "`"
 *   insn=0x0000000000514218 string=0x000000000051421C "t"
 *   insn=0x0000000000514218 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::assign(CPVRTString *this, const char *a2, size_t a3)
{
  void *v6; // x20
  void *v7; // x0

  if ( *((_QWORD *)this + 3) <= a3 )
  {
    v6 = malloc(a3 + 1);
    *((_QWORD *)this + 3) = a3 + 1;
  }
  else
  {
    v6 = (void *)*((_QWORD *)this + 1);
  }
  *((_QWORD *)this + 2) = a3;
  memmove(v6, a2, a3);
  *((_BYTE *)v6 + *((_QWORD *)this + 2)) = 0;
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v6 != v7 )
  {
    free(v7);
    *((_QWORD *)this + 1) = v6;
  }
  return this;
}

