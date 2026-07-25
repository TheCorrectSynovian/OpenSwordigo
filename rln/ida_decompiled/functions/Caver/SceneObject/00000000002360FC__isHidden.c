/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002360FC
 * Mangled: _ZNK5Caver11SceneObject8isHiddenEv
 * Demangled: Caver::SceneObject::isHidden(void)
 *
 * Callers: 1
 *   0x00000000001F8C50  Caver::SceneObject::isHidden(void)
 *
 * Callees: 2
 *   0x00000000001F8C50  Caver::SceneObject::isHidden(void)
 *   0x00000000001FB850  Caver::SceneObject::IsInHiddenGroup(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000236108 string=0x000000000023610C "h"
 *   insn=0x0000000000236110 string=0x0000000000236124 "`"
 *   insn=0x0000000000236124 string=0x0000000000236128 "`"
 *   insn=0x0000000000236128 string=0x0000000000236134 "h"
 *   insn=0x000000000023612C string=0x0000000000236130 " "
 *   insn=0x000000000023612C string=0x00000000001F8C50 "0'"
 *   insn=0x0000000000236140 string=0x00000000001FB850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SceneObject::isHidden(Caver::SceneObject *this)
{
  Caver::SceneObject *v3; // x0

  return *((_BYTE *)this + 244)
      || (v3 = (Caver::SceneObject *)*((_QWORD *)this + 6)) != 0 && (Caver::SceneObject::isHidden(v3) & 1) != 0
      || *((_QWORD *)this + 5) && (Caver::SceneObject::IsInHiddenGroup(this) & 1) != 0;
}

