/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F400
 * Mangled: sub_53F400
 * Demangled: sub_53F400
 *
 * Callers: 3
 *   0x000000000054CEF4  sub_54CEF4
 *   0x000000000054D428  sub_54D428
 *   0x000000000054E8C8  sub_54E8C8
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053B7BC  nullsub_2
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x000000000053F400 string=0x000000000053F404 "!"
 *   insn=0x000000000053F410 string=0x000000000053F414 "! C"
 *   insn=0x000000000053F418 string=0x000000000053F41C "!@"
 *   insn=0x000000000053F41C string=0x000000000053F420 "a"
 *   insn=0x000000000053F428 string=0x000000000053F42C "!"
 *   insn=0x000000000053F42C string=0x000000000053F430 " "
 *   insn=0x000000000053F458 string=0x000000000053F45C "!"
 *   insn=0x000000000053F468 string=0x000000000053F46C "! C"
 *   insn=0x000000000053F470 string=0x000000000053F474 "!@"
 *   insn=0x000000000053F474 string=0x000000000053F478 "a"
 *   insn=0x000000000053F480 string=0x000000000053F484 "!"
 *   insn=0x000000000053F484 string=0x000000000053F488 " "
 *   insn=0x000000000053F4A0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000053F4BC string=0x000000000053F4C0 "!`"
 *   insn=0x000000000053F4C4 string=0x000000000053F4C8 "!"
 *   insn=0x000000000053F4C8 string=0x000000000053F4CC "!<E"
 *   insn=0x000000000053F4CC string=0x000000000053F4D0 "!@"
 *   insn=0x000000000053F4D0 string=0x000000000053F4D4 "A"
 *   insn=0x000000000053F4D4 string=0x000000000053F4D8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53F400(_QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[2];
  *a1 = &off_6DB0E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_2();
}

