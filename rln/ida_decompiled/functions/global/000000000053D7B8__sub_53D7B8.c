/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053D7B8
 * Mangled: sub_53D7B8
 * Demangled: sub_53D7B8
 *
 * Callers: 1
 *   0x000000000053D830  sub_53D830
 *
 * Callees: 4
 *   0x00000000001F60A0  .pthread_once
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000053D774  sub_53D774
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 9
 *   insn=0x000000000053D7CC string=0x000000000053D7D0 "@"
 *   insn=0x000000000053D7CC string=0x000000000053D7E4 "S"
 *   insn=0x000000000053D7DC string=0x000000000053D7E0 "0"
 *   insn=0x000000000053D7E0 string=0x00000000001F60A0 "0'"
 *   insn=0x000000000053D7E4 string=0x000000000053D7E8 "sFD"
 *   insn=0x000000000053D7E8 string=0x000000000053D7EC "`"
 *   insn=0x000000000053D800 string=0x000000000053D804 "A"
 *   insn=0x000000000053D810 string=0x000000000053D814 "t"
 *   insn=0x000000000053D814 string=0x000000000053D818 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *sub_53D7B8()
{
  __int64 *result; // x0

  if ( &pthread_create )
    pthread_once(dword_6FBE30, (void (*)(void))sub_53D774);
  result = (__int64 *)qword_6FBE40;
  if ( !qword_6FBE40 )
  {
    sub_53CB20((__int64)&unk_6FC840, 2);
    qword_6FBE40 = (__int64)&unk_6FC840;
    result = &qword_6FBE48;
    qword_6FBE48 = (__int64)&unk_6FC840;
  }
  return result;
}

