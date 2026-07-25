/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB850
 * Mangled: ._ZNK5Caver11SceneObject15IsInHiddenGroupEv
 * Demangled: Caver::SceneObject::IsInHiddenGroup(void)
 *
 * Callers: 1
 *   0x00000000002360FC  Caver::SceneObject::isHidden(void)
 *
 * Callees: 1
 *   0x00000000004732CC  Caver::SceneObject::IsInHiddenGroup(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB854 string=0x00000000004732CC "\t"
 *   insn=0x00000000001FB858 string=0x00000000001FB85C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::IsInHiddenGroup(Caver::SceneObject *this)
{
  return _ZNK5Caver11SceneObject15IsInHiddenGroupEv(this);
}

