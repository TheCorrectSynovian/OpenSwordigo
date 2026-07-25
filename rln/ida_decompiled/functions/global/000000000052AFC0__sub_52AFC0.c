/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AFC0
 * Mangled: sub_52AFC0
 * Demangled: sub_52AFC0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053F0E4  sub_53F0E4
 *
 * Referenced strings: 4
 *   insn=0x000000000052AFC0 string=0x000000000052AFC4 "a"
 *   insn=0x000000000052AFCC string=0x000000000052AFD0 "!@3"
 *   insn=0x000000000052AFD8 string=0x000000000052AFDC "BP"
 *   insn=0x000000000052AFEC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_52AFC0(_QWORD *a1)
{
  *a1 = off_6B6CD0;
  sub_53F0E4();
  operator delete(a1);
}

