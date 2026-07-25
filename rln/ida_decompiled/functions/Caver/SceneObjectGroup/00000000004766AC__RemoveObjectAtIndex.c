/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004766AC
 * Mangled: _ZN5Caver16SceneObjectGroup19RemoveObjectAtIndexEi
 * Demangled: Caver::SceneObjectGroup::RemoveObjectAtIndex(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5070  Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup *)
 *
 * Referenced strings: 13
 *   insn=0x00000000004766B8 string=0x00000000004766BC "h"@"
 *   insn=0x00000000004766C8 string=0x00000000004766CC "i"
 *   insn=0x00000000004766CC string=0x00000000004766D0 "h:"
 *   insn=0x00000000004766CC string=0x00000000001F5070 "P'"
 *   insn=0x00000000004766D0 string=0x00000000004766D4 ""
 *   insn=0x00000000004766D8 string=0x00000000004766DC "-"
 *   insn=0x00000000004766DC string=0x0000000000476700 "h:"
 *   insn=0x00000000004766E0 string=0x00000000004766E4 "j"@"
 *   insn=0x00000000004766E4 string=0x00000000004766E8 "J\t"
 *   insn=0x00000000004766E8 string=0x00000000004766EC "K"
 *   insn=0x00000000004766EC string=0x00000000004766F0 ")"
 *   insn=0x00000000004766F4 string=0x00000000004766F8 "K"
 *   insn=0x00000000004766F8 string=0x00000000004766FC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObjectGroup::RemoveObjectAtIndex(Caver::SceneObjectGroup *this, int a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x10

  result = Caver::SceneObject::RemoveGroup(*(Caver::SceneObject **)(*((_QWORD *)this + 8) + 8LL * a2), this);
  v5 = *((int *)this + 14) - 1LL;
  if ( (int)v5 > a2 )
  {
    v6 = a2;
    do
    {
      v7 = (_QWORD *)(*((_QWORD *)this + 8) + 8 * v6++);
      *v7 = v7[1];
    }
    while ( v5 != v6 );
  }
  *((_DWORD *)this + 14) = v5;
  return result;
}

