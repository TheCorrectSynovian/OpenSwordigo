/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000474EB4
 * Mangled: _ZN5Caver16SceneObjectGroupC2Ev
 * Demangled: Caver::SceneObjectGroup::SceneObjectGroup(void)
 *
 * Callers: 1
 *   0x00000000001F42A0  Caver::SceneObjectGroup::SceneObjectGroup(void)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000474EB8 string=0x0000000000474EBC ""
 *   insn=0x0000000000474EC0 string=0x0000000000474EC4 ")"
 *   insn=0x0000000000474EC8 string=0x0000000000474ECC "\nA"
 *   insn=0x0000000000474ECC string=0x0000000000474ED0 "\n"
 *   insn=0x0000000000474ED4 string=0x0000000000474ED8 ""
 *   insn=0x0000000000474ED8 string=0x0000000000474EDC ")a"
 *   insn=0x0000000000474EDC string=0x0000000000474EE0 "|"
 *   insn=0x0000000000474EE0 string=0x0000000000474EE4 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObjectGroup::SceneObjectGroup(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 48) = 0;
  *(_QWORD *)(this + 56) = 0;
  *(_QWORD *)this = off_6D4DC0;
  *(_QWORD *)(this + 16) = &off_6D4E10;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = &byte_6FD2F8;
  *(_QWORD *)(this + 40) = 0;
  *(_QWORD *)(this + 64) = 0;
  *(_QWORD *)(this + 72) = 0x10000;
  return this;
}

