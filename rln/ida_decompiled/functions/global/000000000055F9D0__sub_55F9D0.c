/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F9D0
 * Mangled: sub_55F9D0
 * Demangled: sub_55F9D0
 *
 * Callers: 2
 *   0x000000000055FA64  sub_55FA64
 *   0x000000000055FA6C  sub_55FA6C
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000051F468  sub_51F468
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 20
 *   insn=0x000000000055F9E4 string=0x000000000055F9EC "!"
 *   insn=0x000000000055F9EC string=0x000000000055F9F0 "t""
 *   insn=0x000000000055F9F0 string=0x000000000055F9F4 "`"
 *   insn=0x000000000055F9F8 string=0x000000000055F9FC "a\n"
 *   insn=0x000000000055FA04 string=0x000000000055FA08 "`"
 *   insn=0x000000000055FA08 string=0x000000000055FA0C "!@"
 *   insn=0x000000000055FA0C string=0x000000000055FA10 "`b"
 *   insn=0x000000000055FA10 string=0x000000000055FA14 "a"
 *   insn=0x000000000055FA14 string=0x000000000055FA18 "^"
 *   insn=0x000000000055FA18 string=0x000000000055FA1C "`"
 *   insn=0x000000000055FA20 string=0x000000000055FA24 "!"
 *   insn=0x000000000055FA24 string=0x000000000055FA28 "`B"
 *   insn=0x000000000055FA28 string=0x000000000055FA2C "!$E"
 *   insn=0x000000000055FA2C string=0x000000000055FA30 "!@"
 *   insn=0x000000000055FA30 string=0x000000000055FA34 "a"
 *   insn=0x000000000055FA38 string=0x000000000055FA3C "!"
 *   insn=0x000000000055FA40 string=0x000000000055FA44 "!<E"
 *   insn=0x000000000055FA44 string=0x000000000055FA48 "!@"
 *   insn=0x000000000055FA48 string=0x000000000055FA4C "a"
 *   insn=0x000000000055FA60 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_55F9D0(char *a1)
{
  _QWORD *v2; // x20

  v2 = a1 + 264;
  *(_QWORD *)a1 = off_6B7DD8;
  *((_QWORD *)a1 + 2) = off_6B7E00;
  *((_QWORD *)a1 + 33) = off_6B7E28;
  *((_QWORD *)a1 + 3) = off_6DB410;
  sub_55F390((__int64)(a1 + 24));
  sub_51F468((__int64)(a1 + 128));
  *((_QWORD *)a1 + 3) = off_6B7710;
  sub_53C0C8((unsigned int **)a1 + 10);
  *((_QWORD *)a1 + 33) = off_6B6B30;
  sub_5221DC(v2);
  operator delete(a1);
}

