/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514058
 * Mangled: _ZN11CPVRTStringC2EPKcm
 * Demangled: CPVRTString::CPVRTString(char const*,ulong)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 13
 *   insn=0x000000000051406C string=0x0000000000514070 ""
 *   insn=0x0000000000514080 string=0x0000000000514084 "A"
 *   insn=0x0000000000514084 string=0x0000000000514088 "h~"
 *   insn=0x0000000000514098 string=0x000000000051409C "u"
 *   insn=0x000000000051409C string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005140A8 string=0x00000000005140AC "u^"
 *   insn=0x00000000005140B4 string=0x00000000005140B8 "6"
 *   insn=0x00000000005140B8 string=0x00000000005140BC "v"
 *   insn=0x00000000005140C4 string=0x00000000005140C8 "Z"
 *   insn=0x00000000005140D4 string=0x00000000005140D8 "f"
 *   insn=0x00000000005140E4 string=0x00000000005140E8 "v^"
 *   insn=0x00000000005140F0 string=0x00000000005140F4 "U"
 *   insn=0x00000000005140F4 string=0x00000000005140F8 "u"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::CPVRTString(CPVRTString *this, const char *a2, size_t a3)
{
  void *v6; // x22
  size_t v7; // x22
  void *v8; // x21

  *(_QWORD *)this = off_6D8E38;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 3) = 0;
  if ( a3 == -1 )
  {
    v7 = strlen(a2);
    v8 = malloc(v7 + 1);
    *((_QWORD *)this + 2) = v7;
    *((_QWORD *)this + 3) = v7 + 1;
    memcpy(v8, a2, v7);
    *((_BYTE *)v8 + v7) = 0;
    if ( v8 )
      *((_QWORD *)this + 1) = v8;
  }
  else
  {
    v6 = malloc(a3 + 1);
    *((_QWORD *)this + 2) = a3;
    *((_QWORD *)this + 3) = a3 + 1;
    memcpy(v6, a2, a3);
    *((_BYTE *)v6 + a3) = 0;
    if ( v6 )
      *((_QWORD *)this + 1) = v6;
  }
}

