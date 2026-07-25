/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F578
 * Mangled: sub_55F578
 * Demangled: sub_55F578
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 7
 *   insn=0x000000000055F588 string=0x000000000055F58C "!@"
 *   insn=0x000000000055F594 string=0x000000000055F598 "~"
 *   insn=0x000000000055F5A0 string=0x000000000055F5A4 "!"
 *   insn=0x000000000055F5A8 string=0x000000000055F5AC "!$E"
 *   insn=0x000000000055F5AC string=0x000000000055F5B0 "!@"
 *   insn=0x000000000055F5C4 string=0x000000000055F5C8 ":_"
 *   insn=0x000000000055F5C8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_55F578(unsigned int **a1)
{
  __int64 v2; // x20

  *a1 = (unsigned int *)off_6DB410;
  v2 = (__int64)(a1 + 13);
  sub_55F390((__int64)a1);
  sub_51F468(v2);
  *a1 = (unsigned int *)off_6B7710;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

