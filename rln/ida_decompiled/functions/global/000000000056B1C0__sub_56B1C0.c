/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B1C0
 * Mangled: sub_56B1C0
 * Demangled: sub_56B1C0
 *
 * Callers: 2
 *   0x000000000056DA58  sub_56DA58
 *   0x000000000056EFD4  sub_56EFD4
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 11
 *   insn=0x000000000056B1C0 string=0x000000000056B1C4 "!<G"
 *   insn=0x000000000056B1C4 string=0x000000000056B1C8 "!"
 *   insn=0x000000000056B1CC string=0x000000000056B1D0 "A"
 *   insn=0x000000000056B1D0 string=0x000000000056B1D4 "#"
 *   insn=0x000000000056B1D4 string=0x000000000056B1D8 "C"
 *   insn=0x000000000056B1DC string=0x000000000056B1E0 "?"
 *   insn=0x000000000056B1E4 string=0x000000000056B200 ",0"
 *   insn=0x000000000056B1EC string=0x000000000056B1F0 """
 *   insn=0x000000000056B1F0 string=0x000000000056B1F4 "?"
 *   insn=0x000000000056B1F8 string=0x000000000056B1FC "l"
 *   insn=0x000000000056B200 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56B1C0(unsigned int *a1)
{
  unsigned int *v1; // x2
  int v2; // w1
  int v3; // w1

  if ( !&pthread_create )
  {
    v3 = a1[4];
    a1[4] = v3 - 1;
    if ( v3 > 0 )
      return;
LABEL_7:
    operator delete(a1);
    return;
  }
  v1 = a1 + 4;
  do
    v2 = __ldaxr(v1);
  while ( __stlxr(v2 - 1, v1) );
  if ( v2 <= 0 )
    goto LABEL_7;
}

