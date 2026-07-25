/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DA84
 * Mangled: sub_53DA84
 * Demangled: sub_53DA84
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F60A0  .pthread_once
 *   0x000000000053B814  sub_53B814
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000053D774  sub_53D774
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 12
 *   insn=0x000000000053DA98 string=0x000000000053DA9C "@"
 *   insn=0x000000000053DA98 string=0x000000000053DAB0 "S"
 *   insn=0x000000000053DAA8 string=0x000000000053DAAC "}"
 *   insn=0x000000000053DAAC string=0x00000000001F60A0 "0'"
 *   insn=0x000000000053DAB0 string=0x000000000053DAB4 "sFD"
 *   insn=0x000000000053DAB4 string=0x000000000053DAB8 "a"
 *   insn=0x000000000053DAB8 string=0x000000000053DABC "!"
 *   insn=0x000000000053DAC8 string=0x000000000053DACC "R"
 *   insn=0x000000000053DAE0 string=0x000000000053DAE4 "A"
 *   insn=0x000000000053DAF0 string=0x000000000053DAF4 "t"
 *   insn=0x000000000053DAF4 string=0x000000000053DAF8 "@"
 *   insn=0x000000000053DB10 string=0x000000000053DB14 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *sub_53DA84()
{
  if ( &pthread_create )
    pthread_once(dword_6FBE30, (void (*)(void))sub_53D774);
  if ( qword_6FBE40 )
  {
    sub_53B814(qword_6FC7C0, qword_6FBE40);
  }
  else
  {
    sub_53CB20((__int64)&unk_6FC840, 2);
    qword_6FBE40 = (__int64)&unk_6FC840;
    qword_6FBE48 = (__int64)&unk_6FC840;
    sub_53B814(qword_6FC7C0, (__int64)&unk_6FC840);
  }
  return qword_6FC7C0;
}

