/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052BDBC
 * Mangled: sub_52BDBC
 * Demangled: sub_52BDBC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053E704  sub_53E704
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000052BDBC string=0x000000000052BDC0 "?"
 *   insn=0x000000000052BDC0 string=0x000000000052BDC4 "c"
 *   insn=0x000000000052BDD0 string=0x000000000052BDD4 "c"
 *   insn=0x000000000052BDEC string=0x000000000052BDF0 "EJ"
 *   insn=0x000000000052BE04 string=0x000000000052BE08 "m>"
 *   insn=0x000000000052BE14 string=0x000000000052BE18 "_"
 *   insn=0x000000000052BE2C string=0x000000000052BE30 "c"
 *   insn=0x000000000052BE34 string=0x000000000052BE38 "c"
 *   insn=0x000000000052BE44 string=0x000000000052BE48 "/J"
 *   insn=0x000000000052BE5C string=0x000000000052BE60 "W>"
 *   insn=0x000000000052BE80 string=0x000000000052BE84 "c"
 *   insn=0x000000000052BE88 string=0x000000000052BE8C "c"
 *   insn=0x000000000052BE94 string=0x000000000052BE98 "J"
 *   insn=0x000000000052BEAC string=0x000000000052BEB0 "C>"
 *   insn=0x000000000052BEC4 string=0x000000000052BEC8 "!@"
 *   insn=0x000000000052BEC8 string=0x000000000052BECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52BDBC(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = &off_6DA180;
  *(_QWORD *)(a1 + 16) = 0;
  return sub_53E704();
}

