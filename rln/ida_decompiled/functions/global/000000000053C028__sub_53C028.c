/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053C028
 * Mangled: sub_53C028
 * Demangled: sub_53C028
 *
 * Callers: 8
 *   0x0000000000521268  sub_521268
 *   0x0000000000521338  sub_521338
 *   0x0000000000521B48  sub_521B48
 *   0x0000000000521C18  sub_521C18
 *   0x0000000000522C5C  sub_522C5C
 *   0x0000000000522CAC  sub_522CAC
 *   0x000000000054B120  sub_54B120
 *   0x000000000054B5D8  sub_54B5D8
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053BE88  sub_53BE88
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 13
 *   insn=0x000000000053C034 string=0x000000000053C038 "@"
 *   insn=0x000000000053C038 string=0x000000000053C03C """
 *   insn=0x000000000053C040 string=0x000000000053C044 " "
 *   insn=0x000000000053C044 string=0x000000000053C048 "@"
 *   insn=0x000000000053C044 string=0x000000000053C0A8 "@"
 *   insn=0x000000000053C04C string=0x000000000053C050 "@"
 *   insn=0x000000000053C058 string=0x000000000053C05C "`"
 *   insn=0x000000000053C060 string=0x000000000053C064 "b"
 *   insn=0x000000000053C070 string=0x000000000053C090 "!"
 *   insn=0x000000000053C088 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000053C0B0 string=0x000000000053C0B4 "@"
 *   insn=0x000000000053C0B4 string=0x000000000053C0B8 "`"
 *   insn=0x000000000053C0BC string=0x000000000053C0C0 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int **__fastcall sub_53C028(unsigned int **a1, unsigned int **a2)
{
  unsigned int *v3; // x2
  unsigned int v4; // w0
  unsigned int *v5; // x19
  unsigned int v6; // w0
  unsigned int **result; // x0
  unsigned int **v8; // [xsp+28h] [xbp+28h]

  v3 = *a2;
  if ( &pthread_create )
  {
    do
      v4 = __ldaxr(v3);
    while ( __stlxr(v4 + 1, v3) );
    v5 = *a1;
    do
      v6 = __ldaxr(v5);
    while ( __stlxr(v6 - 1, v5) );
  }
  else
  {
    v5 = *a1;
    ++*v3;
    v6 = (*v5)--;
  }
  if ( v6 == 1 && v5 )
  {
    v8 = a2;
    sub_53BE88(v5);
    operator delete(v5);
    a2 = v8;
  }
  result = a1;
  *a1 = *a2;
  return result;
}

