/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570F84
 * Mangled: sub_570F84
 * Demangled: sub_570F84
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000570F8C string=0x0000000000570F90 "!E"
 *   insn=0x0000000000570F94 string=0x0000000000570F98 "!@"
 *   insn=0x0000000000570FA4 string=0x0000000000570FA8 "`"
 *   insn=0x0000000000570FA8 string=0x0000000000570FAC "/"
 *   insn=0x0000000000570FB4 string=0x0000000000570FB8 "!$E"
 *   insn=0x0000000000570FB8 string=0x0000000000570FBC "!@"
 *   insn=0x0000000000570FC0 string=0x0000000000570FC4 "A,"
 *   insn=0x0000000000570FD4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000570FD8 string=0x0000000000570FDC "`"
 *   insn=0x0000000000570FDC string=0x0000000000570FE0 """
 *   insn=0x0000000000570FE8 string=0x0000000000570FEC "!$E"
 *   insn=0x0000000000570FEC string=0x0000000000570FF0 "!@"
 *   insn=0x0000000000570FF4 string=0x0000000000570FF8 "4,"
 *   insn=0x0000000000570FFC string=0x0000000000571000 "1B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_570F84(unsigned int **a1)
{
  *a1 = (unsigned int *)off_6DB410;
  sub_55F390((__int64)a1);
  sub_51F468((__int64)(a1 + 13));
  *a1 = (unsigned int *)off_6B7710;
  sub_53C0C8(a1 + 7);
  operator delete(a1);
}

