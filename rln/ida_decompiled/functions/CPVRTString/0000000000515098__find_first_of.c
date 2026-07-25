/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515098
 * Mangled: _ZNK11CPVRTString13find_first_ofEPKcm
 * Demangled: CPVRTString::find_first_of(char const*,ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000005150A0 string=0x00000000005150A4 ")"
 *   insn=0x00000000005150A4 string=0x00000000005150A8 ")"
 *   insn=0x00000000005150A8 string=0x00000000005150AC "\n"
 *   insn=0x00000000005150A8 string=0x00000000005150CC "B"
 *   insn=0x00000000005150B4 string=0x00000000005150B8 "Jib8_"
 *   insn=0x00000000005150B8 string=0x00000000005150BC "_"
 *   insn=0x00000000005150C0 string=0x00000000005150C4 "l"
 *   insn=0x00000000005150CC string=0x00000000005150D0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall CPVRTString::find_first_of(CPVRTString *this, const char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x8
  const char *v4; // x1
  int v5; // w9
  int v6; // t1
  const char *v7; // x11
  unsigned __int8 v8; // w12
  int v9; // t1

  v3 = *((_QWORD *)this + 2);
  if ( v3 <= a3 )
    return -1;
  v6 = *(unsigned __int8 *)a2;
  v4 = a2 + 1;
  v5 = v6;
  while ( !v5 )
  {
LABEL_7:
    if ( ++a3 >= v3 )
      return -1;
  }
  v7 = v4;
  v8 = v5;
  while ( *(unsigned __int8 *)(*((_QWORD *)this + 1) + a3) != v8 )
  {
    v9 = *(unsigned __int8 *)v7++;
    v8 = v9;
    if ( !v9 )
      goto LABEL_7;
  }
  return a3;
}

