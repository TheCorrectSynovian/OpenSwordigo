/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566174
 * Mangled: sub_566174
 * Demangled: sub_566174
 *
 * Callers: 1
 *   0x0000000000565D50  sub_565D50
 *
 * Callees: 5
 *   0x000000000054AB28  sub_54AB28
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 30
 *   insn=0x000000000056618C string=0x000000000059F8D0 "regex_error"
 *   insn=0x0000000000566190 string=0x0000000000566194 "!@#"
 *   insn=0x00000000005661A8 string=0x00000000005661AC "_"
 *   insn=0x00000000005661B4 string=0x00000000005661B8 "@`"
 *   insn=0x00000000005661B8 string=0x00000000005661BC "!"
 *   insn=0x00000000005661C0 string=0x00000000005661C4 "!"
 *   insn=0x00000000005661E8 string=0x00000000005661EC "!<G"
 *   insn=0x00000000005661EC string=0x00000000005661F0 "a"
 *   insn=0x00000000005661F0 string=0x00000000005661F4 "B "
 *   insn=0x00000000005661F0 string=0x000000000056621C "A"
 *   insn=0x00000000005661F4 string=0x00000000005661F8 "A"
 *   insn=0x00000000005661F8 string=0x00000000005661FC "#"
 *   insn=0x00000000005661FC string=0x0000000000566200 "C"
 *   insn=0x0000000000566204 string=0x0000000000566208 "?"
 *   insn=0x0000000000566210 string=0x0000000000566214 "d"
 *   insn=0x000000000056621C string=0x0000000000566220 "#"
 *   insn=0x0000000000566220 string=0x0000000000566224 "C"
 *   insn=0x0000000000566234 string=0x0000000000566238 "@`"
 *   insn=0x0000000000566238 string=0x000000000056623C "!"
 *   insn=0x0000000000566240 string=0x0000000000566244 "a"
 *   insn=0x0000000000566254 string=0x0000000000566258 "!<G"
 *   insn=0x0000000000566258 string=0x000000000056625C "A"
 *   insn=0x000000000056625C string=0x0000000000566260 "a"
 *   insn=0x000000000056625C string=0x0000000000566284 "A"
 *   insn=0x0000000000566260 string=0x0000000000566264 """
 *   insn=0x0000000000566264 string=0x0000000000566268 "b"
 *   insn=0x000000000056626C string=0x0000000000566270 "?"
 *   insn=0x0000000000566278 string=0x000000000056627C "J"
 *   insn=0x0000000000566284 string=0x0000000000566288 "#"
 *   insn=0x0000000000566288 string=0x000000000056628C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall **__fastcall sub_566174(__int64 a1, int a2))()
{
  void *v4; // x0
  __int64 (__fastcall **result)(); // x0
  unsigned int *v6; // x2
  int v7; // w1
  __int64 v8; // [xsp+48h] [xbp+48h] BYREF

  sub_566BB8((int)&v8, "regex_error");
  sub_54AB28((_QWORD *)a1, (__int64)&v8);
  v4 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v6 = (unsigned int *)(v8 - 8);
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = *(_DWORD *)(v8 - 8);
      *(_DWORD *)(v8 - 8) = v7 - 1;
    }
    if ( v7 <= 0 )
      operator delete(v4);
  }
  *(_DWORD *)(a1 + 16) = a2;
  result = off_6DB980;
  *(_QWORD *)a1 = off_6DB980;
  return result;
}

