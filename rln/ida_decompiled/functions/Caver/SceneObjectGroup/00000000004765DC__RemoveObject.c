/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004765DC
 * Mangled: _ZN5Caver16SceneObjectGroup12RemoveObjectEPNS_11SceneObjectE
 * Demangled: Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x00000000001F65B0  Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *
 * Callees: 2
 *   0x00000000001F5070  Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup *)
 *   0x0000000000202D20  Caver::FastVector<Caver::SceneObject *>::Resize(int)
 *
 * Referenced strings: 17
 *   insn=0x00000000004765FC string=0x00000000001F5070 "P'"
 *   insn=0x0000000000476600 string=0x0000000000476604 "h"
 *   insn=0x000000000047660C string=0x0000000000476610 ""
 *   insn=0x0000000000476610 string=0x0000000000476614 "\n"
 *   insn=0x0000000000476618 string=0x000000000047661C "\t"
 *   insn=0x000000000047661C string=0x0000000000476620 "J!"
 *   insn=0x0000000000476634 string=0x0000000000476638 ")"
 *   insn=0x0000000000476634 string=0x0000000000476694 ""
 *   insn=0x0000000000476638 string=0x000000000047663C "?"
 *   insn=0x000000000047663C string=0x0000000000476640 "J!"
 *   insn=0x0000000000476654 string=0x0000000000476658 "\t"
 *   insn=0x0000000000476660 string=0x0000000000476664 ""
 *   insn=0x0000000000476664 string=0x0000000000476668 "Hy"
 *   insn=0x000000000047666C string=0x0000000000476670 "I"
 *   insn=0x000000000047667C string=0x0000000000476680 "i"
 *   insn=0x0000000000476688 string=0x000000000047668C "("
 *   insn=0x0000000000476690 string=0x0000000000476698 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObjectGroup::RemoveObject(Caver::SceneObjectGroup *this, Caver::SceneObject *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  int *v6; // x19
  Caver::SceneObject *v7; // x11
  __int64 v8; // x9
  __int64 v9; // x10
  __int64 v10; // x12
  Caver::SceneObject *v11; // x22
  int v12; // w10
  int v13; // w9
  int v14; // w8

  result = Caver::SceneObject::RemoveGroup(a2, this);
  v6 = (int *)((char *)this + 56);
  v5 = *((int *)this + 14);
  if ( (_DWORD)v5 )
  {
    if ( (int)v5 < 1 )
    {
      v11 = 0;
LABEL_8:
      v12 = *((_DWORD *)this + 15);
      v13 = v5 - 1;
      *((_DWORD *)this + 14) = v5 - 1;
      if ( (int)v5 > v12 )
      {
        result = Caver::FastVector<Caver::SceneObject *>::Resize();
        v13 = *v6;
      }
      *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v13) = v11;
      v14 = v13 + 1;
    }
    else
    {
      v7 = 0;
      v8 = v5 + 1;
      v9 = 8 * v5 - 8;
      while ( 1 )
      {
        v10 = *((_QWORD *)this + 8);
        v11 = *(Caver::SceneObject **)(v10 + v9);
        *(_QWORD *)(v10 + v9) = v7;
        if ( v11 == a2 )
          break;
        --v8;
        v9 -= 8;
        v7 = v11;
        if ( v8 <= 1 )
          goto LABEL_8;
      }
      v14 = v5 - 1;
    }
    *v6 = v14;
  }
  return result;
}

