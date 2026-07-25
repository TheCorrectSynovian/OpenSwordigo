/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020B02C
 * Mangled: sub_20B02C
 * Demangled: sub_20B02C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x000000000044A4A0  boost::shared_ptr<Caver::MeshInstance>::~shared_ptr()
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x000000000020B060 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020B064 string=0x000000000020B068 "!$A"
 *   insn=0x000000000020B074 string=0x000000000020B078 "?|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20B02C()
{
  sub_522294(&unk_6E9A10);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9A10, &off_6E8000);
  Caver::MeshPrimitives::staticCube_ = 0;
  qword_6E9A20 = 0;
  return __cxa_atexit(
           (void (*)(void *))boost::shared_ptr<Caver::MeshInstance>::~shared_ptr,
           &Caver::MeshPrimitives::staticCube_,
           &off_6E8000);
}

