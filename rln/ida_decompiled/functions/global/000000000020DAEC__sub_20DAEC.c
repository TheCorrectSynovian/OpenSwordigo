/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020DAEC
 * Mangled: sub_20DAEC
 * Demangled: sub_20DAEC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020DB20 string=0x000000000020DB24 "G"
 *   insn=0x000000000020DB24 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20DAEC()
{
  sub_522294(&unk_6EA041);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6EA041, &off_6E8000);
}

