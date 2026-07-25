/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9160
 * Mangled: _ZN5Caver17GUIAnimatedSpriteC2Ev
 * Demangled: Caver::GUIAnimatedSprite::GUIAnimatedSprite(void)
 *
 * Callers: 1
 *   0x00000000001F8670  Caver::GUIAnimatedSprite::GUIAnimatedSprite(void)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004A9160 string=0x00000000004A9164 "\t"
 *   insn=0x00000000004A9164 string=0x00000000004A9168 "* "
 *   insn=0x00000000004A9174 string=0x00000000004A9178 "\t"
 *   insn=0x00000000004A9178 string=0x00000000004A917C " "
 *   insn=0x00000000004A917C string=0x00000000004A9180 "\n`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAnimatedSprite::GUIAnimatedSprite(__int64 this)
{
  *(_QWORD *)this = 0;
  *(_QWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = 0;
  *(_QWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 24) = -1;
  *(_QWORD *)(this + 32) = this + 32;
  *(_QWORD *)(this + 40) = this + 32;
  *(_WORD *)(this + 48) = 257;
  *(_QWORD *)(this + 52) = 0;
  return this;
}

