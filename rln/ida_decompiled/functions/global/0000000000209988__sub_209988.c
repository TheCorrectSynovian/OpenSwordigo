/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209988
 * Mangled: sub_209988
 * Demangled: sub_209988
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020999C string=0x00000000002099A0 "=b"
 *   insn=0x00000000002099C0 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209988()
{
  sub_522294(&unk_6E9918);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9918, &off_6E8000);
}

