/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020953C
 * Mangled: sub_20953C
 * Demangled: sub_20953C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x0000000000209550 string=0x0000000000209554 "Pc"
 *   insn=0x000000000020956C string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000209578 string=0x000000000020957C "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double sub_20953C()
{
  double result; // d0

  sub_522294(&unk_6E98E8);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E98E8, &off_6E8000);
  result = -0.0078125;
  qword_6E98F0 = 0xBF80000000000000LL;
  return result;
}

