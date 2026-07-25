/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056EDF4
 * Mangled: sub_56EDF4
 * Demangled: sub_56EDF4
 *
 * Callers: 4
 *   0x0000000000547CF0  sub_547CF0
 *   0x0000000000548A64  sub_548A64
 *   0x000000000054933C  sub_54933C
 *   0x0000000000549D84  sub_549D84
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056ECAC  sub_56ECAC
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x000000000056EE04 string=0x000000000056EE08 "3"
 *   insn=0x000000000056EE08 string=0x000000000056EE0C "_"
 *   insn=0x000000000056EE10 string=0x000000000056EE14 "c"
 *   insn=0x000000000056EE14 string=0x000000000056EE18 "`b"
 *   insn=0x000000000056EE18 string=0x000000000056EE1C "C"
 *   insn=0x000000000056EE1C string=0x000000000056EE20 "a"
 *   insn=0x000000000056EE20 string=0x000000000056EE24 "$"
 *   insn=0x000000000056EE2C string=0x000000000056EE30 "@`"
 *   insn=0x000000000056EE30 string=0x000000000056EE34 "!"
 *   insn=0x000000000056EE54 string=0x000000000056EE58 "!<G"
 *   insn=0x000000000056EE5C string=0x000000000056EE60 "B "
 *   insn=0x000000000056EE5C string=0x000000000056EED4 "A"
 *   insn=0x000000000056EE60 string=0x000000000056EE64 "A"
 *   insn=0x000000000056EE64 string=0x000000000056EE68 "#"
 *   insn=0x000000000056EE68 string=0x000000000056EE6C "C"
 *   insn=0x000000000056EE70 string=0x000000000056EE74 "?"
 *   insn=0x000000000056EE74 string=0x000000000056EE78 "L"
 *   insn=0x000000000056EE78 string=0x000000000056EE7C "!"
 *   insn=0x000000000056EE7C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056EE94 string=0x000000000056EE98 "a"
 *   insn=0x000000000056EEA8 string=0x000000000056EEAC "`""
 *   insn=0x000000000056EEA8 string=0x000000000056EEC8 "c"
 *   insn=0x000000000056EEB0 string=0x000000000056EEB4 "B"
 *   insn=0x000000000056EEC8 string=0x000000000056EECC "c"
 *   insn=0x000000000056EED4 string=0x000000000056EED8 "#"
 *   insn=0x000000000056EED8 string=0x000000000056EEDC "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56EDF4(__int64 *a1, __int64 *a2)
{
  __int64 v2; // x2
  __int64 v4; // x19
  int v5; // w3
  __int64 *v6; // x0
  void *v7; // x0
  unsigned int *v9; // x2
  int v10; // w1
  unsigned int *v11; // x0
  unsigned int v12; // w2
  char v13; // [xsp+28h] [xbp+28h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *(_DWORD *)(v4 - 8);
    v6 = (__int64 *)(v4 - 24);
    if ( v5 < 0 )
    {
      v4 = sub_56ECAC((__int64)v6, (__int64)&v13, 0);
      v2 = *a1;
    }
    else if ( v6 != &qword_6FD300 )
    {
      if ( &pthread_create )
      {
        v11 = (unsigned int *)(v4 - 8);
        do
          v12 = __ldaxr(v11);
        while ( __stlxr(v12 + 1, v11) );
        v2 = *a1;
      }
      else
      {
        *(_DWORD *)(v4 - 8) = v5 + 1;
      }
    }
    v7 = (void *)(v2 - 24);
    if ( (__int64 *)(v2 - 24) != &qword_6FD300 )
    {
      if ( &pthread_create )
      {
        v9 = (unsigned int *)(v2 - 8);
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
      }
      else
      {
        v10 = *(_DWORD *)(v2 - 8);
        *(_DWORD *)(v2 - 8) = v10 - 1;
      }
      if ( v10 <= 0 )
        operator delete(v7);
    }
    *a1 = v4;
  }
  return a1;
}

