/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F0E4
 * Mangled: sub_53F0E4
 * Demangled: sub_53F0E4
 *
 * Callers: 3
 *   0x000000000052AA8C  sub_52AA8C
 *   0x000000000052AFC0  sub_52AFC0
 *   0x000000000052C570  sub_52C570
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053F19C  sub_53F19C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000053F0E4 string=0x000000000053F0E8 "!"
 *   insn=0x000000000053F0F4 string=0x000000000053F0F8 "!"
 *   insn=0x000000000053F0FC string=0x000000000053F100 "!@"
 *   insn=0x000000000053F100 string=0x000000000053F104 "a"
 *   insn=0x000000000053F10C string=0x000000000053F110 "!"
 *   insn=0x000000000053F110 string=0x000000000053F114 " "
 *   insn=0x000000000053F13C string=0x000000000053F140 "!"
 *   insn=0x000000000053F14C string=0x000000000053F150 "!"
 *   insn=0x000000000053F154 string=0x000000000053F158 "!@"
 *   insn=0x000000000053F158 string=0x000000000053F15C "a"
 *   insn=0x000000000053F164 string=0x000000000053F168 "!"
 *   insn=0x000000000053F168 string=0x000000000053F16C " "
 *   insn=0x000000000053F180 string=0x000000000053F184 "K"
 *   insn=0x000000000053F184 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53F0E4(_QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[2];
  *a1 = &off_6DA130;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_2();
}

