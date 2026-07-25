/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020AF78
 * Mangled: sub_20AF78
 * Demangled: sub_20AF78
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020AFAC string=0x000000000020AFB0 "$"
 *   insn=0x000000000020AFB0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20AF78()
{
  sub_522294(&unk_6E99FB);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E99FB, &off_6E8000);
}

