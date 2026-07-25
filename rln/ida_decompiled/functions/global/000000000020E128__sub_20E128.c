/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020E128
 * Mangled: sub_20E128
 * Demangled: sub_20E128
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x000000000056B0B8  nullsub_4
 *   0x000000000056B0BC  nullsub_5
 *
 * Referenced strings: 3
 *   insn=0x000000000020E13C string=0x000000000020E144 "!"
 *   insn=0x000000000020E150 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020E168 string=0x000000000020E16C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20E128()
{
  __cxa_atexit((void (*)(void *))nullsub_5, off_6E8A38, &off_6E8000);
  return __cxa_atexit((void (*)(void *))nullsub_4, &off_6E8A40, &off_6E8000);
}

