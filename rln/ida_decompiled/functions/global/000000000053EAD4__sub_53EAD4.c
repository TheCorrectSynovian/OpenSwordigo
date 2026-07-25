/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053EAD4
 * Mangled: sub_53EAD4
 * Demangled: sub_53EAD4
 *
 * Callers: 4
 *   0x000000000052AA54  sub_52AA54
 *   0x000000000052AEDC  sub_52AEDC
 *   0x000000000052C0D8  sub_52C0D8
 *   0x000000000053EA1C  sub_53EA1C
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053EB8C  sub_53EB8C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x000000000053EAD4 string=0x000000000053EAD8 "!"
 *   insn=0x000000000053EAE4 string=0x000000000053EAE8 "!"
 *   insn=0x000000000053EAEC string=0x000000000053EAF0 "!@"
 *   insn=0x000000000053EAF0 string=0x000000000053EAF4 "a"
 *   insn=0x000000000053EAFC string=0x000000000053EB00 "!"
 *   insn=0x000000000053EB00 string=0x000000000053EB04 " "
 *   insn=0x000000000053EB10 string=0x000000000053EB14 "*"
 *   insn=0x000000000053EB1C string=0x000000000053EB20 "'"
 *   insn=0x000000000053EB24 string=0x000000000053EB28 "g"
 *   insn=0x000000000053EB2C string=0x000000000053EB30 "!"
 *   insn=0x000000000053EB3C string=0x000000000053EB40 "!"
 *   insn=0x000000000053EB44 string=0x000000000053EB48 "!@"
 *   insn=0x000000000053EB48 string=0x000000000053EB4C "a"
 *   insn=0x000000000053EB54 string=0x000000000053EB58 "!"
 *   insn=0x000000000053EB58 string=0x000000000053EB5C " "
 *   insn=0x000000000053EB74 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000053EB84 string=0x000000000053EB88 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_53EAD4(_QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[2];
  *a1 = &off_6DA1F0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  nullsub_2();
}

