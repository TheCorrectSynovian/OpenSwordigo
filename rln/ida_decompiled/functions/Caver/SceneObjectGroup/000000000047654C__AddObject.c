/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047654C
 * Mangled: _ZN5Caver16SceneObjectGroup9AddObjectEPNS_11SceneObjectE
 * Demangled: Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x0000000000200470  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *
 * Callees: 3
 *   0x00000000001F3630  Caver::SceneObject::AddGroup(Caver::SceneObjectGroup *)
 *   0x00000000001FFA00  Caver::SceneObject::HasGroup(Caver::SceneObjectGroup *)
 *   0x0000000000202D20  Caver::FastVector<Caver::SceneObject *>::Resize(int)
 *
 * Referenced strings: 9
 *   insn=0x0000000000476568 string=0x000000000047656C "%%"
 *   insn=0x0000000000476590 string=0x0000000000476594 ""
 *   insn=0x0000000000476594 string=0x0000000000476598 "(y"
 *   insn=0x0000000000476594 string=0x00000000004765B4 "i"@"
 *   insn=0x000000000047659C string=0x00000000004765A0 "I"
 *   insn=0x00000000004765B4 string=0x00000000004765B8 "\n"
 *   insn=0x00000000004765C0 string=0x00000000004765C4 "4"
 *   insn=0x00000000004765C4 string=0x00000000004765C8 "j:"
 *   insn=0x00000000004765D8 string=0x00000000001F3630 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObjectGroup::AddObject(Caver::SceneObjectGroup *this, Caver::SceneObject *a2)
{
  __int64 result; // x0
  int v5; // w8

  result = Caver::SceneObject::HasGroup(a2, this);
  if ( (result & 1) == 0 )
  {
    v5 = *((_DWORD *)this + 14);
    if ( v5 >= *((_DWORD *)this + 15) )
    {
      Caver::FastVector<Caver::SceneObject *>::Resize();
      v5 = *((_DWORD *)this + 14);
    }
    *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v5) = a2;
    *((_DWORD *)this + 14) = v5 + 1;
    return Caver::SceneObject::AddGroup(a2, this);
  }
  return result;
}

