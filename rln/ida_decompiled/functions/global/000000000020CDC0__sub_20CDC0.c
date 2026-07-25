/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020CDC0
 * Mangled: sub_20CDC0
 * Demangled: sub_20CDC0
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 7
 *   insn=0x000000000020CDD4 string=0x000000000020CDD8 "/U"
 *   insn=0x000000000020CDF0 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020CE04 string=0x000000000020CE08 ")eB"
 *   insn=0x000000000020CE0C string=0x000000000020CE10 "A"
 *   insn=0x000000000020CE10 string=0x000000000020CE14 "b"
 *   insn=0x000000000020CE1C string=0x000000000020CE20 " "
 *   insn=0x000000000020CE20 string=0x000000000020CE24 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double sub_20CDC0()
{
  long double result; // q0

  sub_522294(&unk_6E9EEC);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9EEC, &off_6E8000);
  result = *(long double *)&xmmword_583490;
  Caver::Matrix4::identityMatrix = xmmword_583490;
  xmmword_6E9F00 = xmmword_5837E0;
  xmmword_6E9F10 = xmmword_5837F0;
  xmmword_6E9F20 = xmmword_583800;
  return result;
}

