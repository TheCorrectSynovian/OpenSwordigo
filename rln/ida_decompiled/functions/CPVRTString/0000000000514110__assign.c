/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514110
 * Mangled: _ZN11CPVRTString6assignEPKc
 * Demangled: CPVRTString::assign(char const*)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 14
 *   insn=0x000000000051412C string=0x0000000000514130 "@"
 *   insn=0x0000000000514130 string=0x0000000000514134 "h"
 *   insn=0x000000000051413C string=0x0000000000514140 "i"
 *   insn=0x0000000000514140 string=0x0000000000514144 "u"
 *   insn=0x0000000000514150 string=0x0000000000514154 "G"
 *   insn=0x0000000000514154 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000514158 string=0x000000000051415C "w"
 *   insn=0x0000000000514168 string=0x000000000051416C "v\n"
 *   insn=0x0000000000514170 string=0x0000000000514174 "h\n@"
 *   insn=0x0000000000514170 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000514178 string=0x000000000051417C "`"
 *   insn=0x0000000000514180 string=0x0000000000514184 "`"
 *   insn=0x0000000000514188 string=0x000000000051418C "u"
 *   insn=0x0000000000514188 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::assign(CPVRTString *this, const char *a2)
{
  size_t v4; // x0
  size_t v5; // x22
  void *v6; // x21
  void *v7; // x0

  v4 = strlen(a2);
  v5 = v4;
  if ( *((_QWORD *)this + 3) <= v4 )
  {
    v6 = malloc(v4 + 1);
    *((_QWORD *)this + 3) = v5 + 1;
  }
  else
  {
    v6 = (void *)*((_QWORD *)this + 1);
  }
  *((_QWORD *)this + 2) = v5;
  memmove(v6, a2, v5);
  *((_BYTE *)v6 + *((_QWORD *)this + 2)) = 0;
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v6 != v7 )
  {
    free(v7);
    *((_QWORD *)this + 1) = v6;
  }
  return this;
}

