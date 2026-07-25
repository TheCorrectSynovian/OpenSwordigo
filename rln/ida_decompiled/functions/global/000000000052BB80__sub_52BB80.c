/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052BB80
 * Mangled: sub_52BB80
 * Demangled: sub_52BB80
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053E890  sub_53E890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x000000000052BB80 string=0x000000000052BB84 "?"
 *   insn=0x000000000052BB84 string=0x000000000052BB88 "c"
 *   insn=0x000000000052BB94 string=0x000000000052BB98 "c"
 *   insn=0x000000000052BBB0 string=0x000000000052BBB4 "7K"
 *   insn=0x000000000052BBD0 string=0x000000000052BBD4 "<W"
 *   insn=0x000000000052BBD8 string=0x000000000052BBDC "_"
 *   insn=0x000000000052BBF0 string=0x000000000052BBF4 "c"
 *   insn=0x000000000052BBF8 string=0x000000000052BBFC "c"
 *   insn=0x000000000052BC08 string=0x000000000052BC0C "!K"
 *   insn=0x000000000052BC28 string=0x000000000052BC2C "&W"
 *   insn=0x000000000052BC44 string=0x000000000052BC48 "c"
 *   insn=0x000000000052BC4C string=0x000000000052BC50 "c"
 *   insn=0x000000000052BC58 string=0x000000000052BC5C "K"
 *   insn=0x000000000052BC88 string=0x000000000052BC8C "!@"
 *   insn=0x000000000052BC8C string=0x000000000052BC90 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52BB80(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)a1 = &off_6DA1F0;
  *(_QWORD *)(a1 + 16) = 0;
  return sub_53E890();
}

