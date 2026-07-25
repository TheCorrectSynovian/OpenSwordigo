/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C138
 * Mangled: sub_20C138
 * Demangled: sub_20C138
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000566F50  sub_566F50
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000020C144 string=0x000000000020C148 "T"
 *   insn=0x000000000020C15C string=0x000000000020C160 "MX"
 *   insn=0x000000000020C178 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020C194 string=0x000000000020C198 "\ta49K"
 *   insn=0x000000000020C198 string=0x000000000020C19C "K"
 *   insn=0x000000000020C1AC string=0x000000000020C1B0 "!"
 *   insn=0x000000000020C1C8 string=0x000000000020C1CC "!@4"
 *   insn=0x000000000020C1CC string=0x000000000020C1D0 "B"
 *   insn=0x000000000020C1E4 string=0x000000000020C1F8 "6"
 *   insn=0x000000000020C1F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C138()
{
  _ReadStatusReg(TPIDR_EL0);
  sub_522294(&unk_6E9D08);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9D08, &off_6E8000);
  byte_6E9D18 = 1;
  qword_6E9D20 = 13070;
  Caver::FASTRANDOM_MAX = 0x7FFFFFFF;
  sub_566BB8((int)&unk_6E9D10, "");
  return __cxa_atexit((void (*)(void *))sub_566F50, &unk_6E9D10, &off_6E8000);
}

