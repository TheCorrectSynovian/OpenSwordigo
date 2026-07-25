/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEEFC
 * Mangled: sub_4EEEFC
 * Demangled: sub_4EEEFC
 *
 * Callers: 3
 *   0x00000000004F5EF0  sub_4F5EF0
 *   0x00000000004F6B64  sub_4F6B64
 *   0x0000000000502624  sub_502624
 *
 * Callees: 4
 *   0x00000000001F4A50  .strtod
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002005D0  .isspace
 *   0x0000000000201750  .strtoul
 *
 * Referenced strings: 6
 *   insn=0x00000000004EEF10 string=0x00000000004EEF14 "V"
 *   insn=0x00000000004EEF2C string=0x00000000001F4A50 "P'"
 *   insn=0x00000000004EEF38 string=0x00000000004EEF3C " "
 *   insn=0x00000000004EEF40 string=0x00000000004EEF44 "h"
 *   insn=0x00000000004EEF48 string=0x00000000004EEF4C "!"
 *   insn=0x00000000004EEFD4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_4EEEFC(const char *a1, double *a2)
{
  char *v4; // x23
  int v5; // w19
  int v6; // t1
  char *v8[2]; // [xsp+0h] [xbp-40h] BYREF

  v8[1] = *(char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  *a2 = strtod(a1, v8);
  v4 = v8[0];
  if ( v8[0] == a1 )
    return 0;
  v5 = (unsigned __int8)*v8[0];
  if ( (v5 | 0x20) == 0x78 )
  {
    *a2 = (double)strtoul(a1, v8, 16);
    v4 = v8[0];
    v5 = (unsigned __int8)*v8[0];
  }
  if ( !v5 )
    return 1;
  if ( isspace(v5) )
  {
    do
    {
      v6 = (unsigned __int8)*++v4;
      v5 = v6;
    }
    while ( isspace(v6) );
    v8[0] = v4;
  }
  return v5 == 0;
}

