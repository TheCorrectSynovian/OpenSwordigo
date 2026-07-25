/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020AE88
 * Mangled: sub_20AE88
 * Demangled: sub_20AE88
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020AEBC string=0x000000000020AEC0 "`"
 *   insn=0x000000000020AEC0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20AE88()
{
  sub_522294(&unk_6E99F7);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99F7, &off_6E8000);
}

