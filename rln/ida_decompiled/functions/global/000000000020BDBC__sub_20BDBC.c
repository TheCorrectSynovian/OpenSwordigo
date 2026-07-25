/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020BDBC
 * Mangled: sub_20BDBC
 * Demangled: sub_20BDBC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 2
 *   insn=0x000000000020BDD0 string=0x000000000020BDD4 "0Y"
 *   insn=0x000000000020BDF4 string=0x00000000001F4C40 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20BDBC()
{
  sub_522294(&unk_6E9BE9);
  return __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9BE9, &off_6E8000);
}

