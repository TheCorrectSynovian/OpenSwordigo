/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056998C
 * Mangled: sub_56998C
 * Demangled: sub_56998C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 10
 *   insn=0x0000000000569998 string=0x000000000056999C "d`"
 *   insn=0x00000000005699A0 string=0x00000000005699A4 "b"
 *   insn=0x00000000005699A8 string=0x00000000005699AC "?"
 *   insn=0x00000000005699AC string=0x00000000005699B0 "b"
 *   insn=0x00000000005699B0 string=0x00000000005699B4 "b"
 *   insn=0x00000000005699B8 string=0x00000000005699EC "`"
 *   insn=0x00000000005699C4 string=0x00000000005699C8 " "
 *   insn=0x00000000005699E4 string=0x00000000005699E8 "`"
 *   insn=0x00000000005699FC string=0x0000000000569A04 ","
 *   insn=0x00000000005699FC string=0x000000000059F9B0 "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56998C(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // x3
  unsigned __int64 v4; // x2
  int v6; // w2

  v2 = *a1;
  v4 = *(_QWORD *)(*a1 - 24);
  if ( a2 >= v4 )
    sub_5656B4("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", a2, v4);
  v6 = *(_DWORD *)(v2 - 8);
  if ( (v6 & 0x80000000) == 0 && (__int64 *)(*a1 - 24) != &qword_6FD2E0 )
  {
    if ( v6 )
    {
      sub_568CB8(a1, 0, 0, 0);
      v2 = *a1;
    }
    *(_DWORD *)(v2 - 8) = -1;
  }
  return v2 + a2;
}

